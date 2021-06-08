startScript;                            % Clears screen and variables, except allows CI testing              

% Optimizer construction


%     R      Q(1)  Q(2,2)  Q(3,3)
ub = [inf      inf   inf     inf]';  % Initial guess
lb = [eps      eps   eps       eps]';  % Initial guess


options = optimoptions('ga','PlotFcn', {@gaplotbestf, @gaplotstopping, @gaplotbestindiv,});
options.PopulationSize = 200; % 50 for <5 variables, 200 otherwise
options.MaxGenerations=600;  %100 x number of decision variables

if exist('CI_Testing','var') % If its only a CI test
    options.PopulationSize = 10;
    options.MaxGenerations=1; % Just do a pro-forma computation
end

options.MaxStallGenerations=100; %Stalling 100 default
%options.InitialPopulationMatrix = final_pop;
fun = @objfun;
tic
[x,Fval,exitFlag,Output,final_pop] = ga(fun,length(lb),[],[],[],[],lb,ub,[],options);
TET=toc;

%save x x



x
Fval
exitFlag
Output



%options.InitialPopulationRange = [-1 0; 1 2]; e.g. defines a range
%options.FunctionTolerance.  % Function tolerance for stopping

% 
% 
% x
% Fval
% exot
% Output.generation
% SEED = Output.rngstate.State;