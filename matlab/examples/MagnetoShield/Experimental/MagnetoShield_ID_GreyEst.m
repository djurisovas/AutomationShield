clc; clear all;                                 % Clears screen and all variables

load('MagnetoShield_ID_Data');
Ts=0.003250;                                    % [s] Sampling
y=result(:,1)/1000;                             % [m] Output in meters
u=result(:,2);                                  % [V] Input is closed loop + probe signal
i=result(:,3)/1000;                             % [A] Current

%% System identification data object
data = iddata([y i],u,Ts,'Name','Magnetic Levitation');    % Data file
data.InputName = 'Solenoid';                    % Input name: Solenoid voltage
data.InputUnit =  'V';                          % Input unit
data.OutputName{1} = 'Position';                % Output 1 name
data.OutputUnit{1} = 'm';                       % Output 1 unit
data.OutputName{2} = 'Current';                 % Output 2 name
data.OutputUnit{2} = 'A';                       % Output 2 unit
data.Tstart = 0;                                % Starting time
data.TimeUnit = 's';                            % Time unit
data = data(100:end);                           % Discard the time when magnet is on ground, pick close to linearization point
data=detrend(data);                             % Discard offset                               
dataf = fft(data);                              % Frequency domain 

%% Parameters
m  = 0.945E-3;                                  % [kg] Magnet mass
R  = 198.3;                                     % [Ohm] Solenoid resistance
L  = 0.239;                                     % [H] Solenoid inductance
Km = 1E-6;                                      % Magnetic constant (rhough estimate)
Ke = Km;

% Linearization points
y0 = mean(y);                                   % [m] Output (position) linearization around setpoint
u0 = mean(u);                                   % [V] Input linearization around setpoint
i0 = mean(i);                                   % [A] Current linearization around setpoint

% Initial states
h0=data.y(1,1);                                 % Initial position estimate
dh0=(data.y(2,1)-data.y(1,1))/Ts;               % Initial velocity estimate
ii0=data.y(1,2);                                % Initial current estimate

sys = idgrey('MagnetoShield_ODE',[m; Km; R; L; Ke],'c',[y0; u0; i0]);
sys.DisturbanceModel = 'estimate';              % Estimate disturbance model
sys.InitialState = 'estimate';                  % Estimate initial states

Options = greyestOptions;
Options.Display = 'on';                         % Show progress
Options.Focus =   'simulation';                 % Identification focus
Options.EnforceStability = 0;                   % Unstable model
Options.InitialState = 'estimate';              % Estimate initial condition
Options.DisturbanceModel= 'estimate';

model=greyest(dataf,sys,Options)
compare(dataf,model)



