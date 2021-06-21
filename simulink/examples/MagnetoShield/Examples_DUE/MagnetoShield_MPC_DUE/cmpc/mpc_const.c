#include "mpc_const.h" 

const real_t HoL[] = { /* Quadratic term (Hessian) matrix of QP over Lipschitz constant. */
0.516152301938241, 0.22271206653531195, 0.18031295100618183, 0.1399275693573958, 0.10066489387805505, 0.061517017507550155, 0.02336110631608738, 
0.222712066535312, 0.4522035905730354, 0.16510503611900607, 0.12783786848618514, 0.09153604835909238, 0.05567333244004729, 0.021061835793439808, 
0.18031295100618183, 0.1651050361190061, 0.40029988897989144, 0.11781689769264739, 0.08422272146826783, 0.05097996649289284, 0.019202975983128964, 
0.1399275693573958, 0.12783786848618514, 0.11781689769264742, 0.3572095177415111, 0.07806723996281437, 0.04725610638692371, 0.01773397715210847, 
0.10066489387805505, 0.09153604835909238, 0.08422272146826783, 0.07806723996281438, 0.3205361719275265, 0.04395698919606146, 0.01657442649773683, 
0.061517017507550155, 0.0556733324400473, 0.05097996649289284, 0.04725610638692371, 0.04395698919606147, 0.2888047237438699, 0.015402364969415239, 
0.02336110631608738, 0.021061835793439808, 0.019202975983128964, 0.01773397715210847, 0.01657442649773683, 0.015402364969415239, 0.26304174846324574, 
 
};
const real_t GoL[] = { /* Linear term matrix of the QP, over Lipschitz constant. */
1.9173823519791293, -2188.3456314527007, -87.94293153782489, 32.89705915992396, 
1.095796384071766, -1927.049690056503, -72.9948730681921, 27.379289142554978, 
0.5569392978988826, -1651.8746192636554, -59.22306281863915, 22.179411840660194, 
0.23558440826076477, -1354.0592967042323, -46.15894719412853, 17.248025687729424, 
0.07190882697099234, -1023.8500030170691, -33.35773938657842, 12.436582744705532, 
0.010431986263828753, -653.3259042668942, -20.4702137234483, 7.616118952173127, 
0.0, -256.309967377422, -7.798893304513244, 2.8970029954717034, 

};
const real_t Bh_T[] = { /* Extended input matrix (used for reference tracking). */
0.0, -2.08005346e-06, -0.00183828647, 0.00389543638, 2.08005346e-06, -1.01779300139805e-05, -0.0031979947047490057, 0.0006755885646788838, 1.2257983473980501e-05, -2.037760006390932e-05, -0.0035561381804662686, 0.00018480057978208613, 3.263558353788982e-05, -3.143997534176266e-05, -0.0038224878306561162, 0.00011434103355951568, 6.407555887965248e-05, -4.336817409628112e-05, -0.0041419209543399295, 0.0001101186698444615, 0.0001074437329759336, -5.637384615170059e-05, -0.004543357158118164, 0.00011796856212348192, 0.00016381757912763422, -7.072299625810098e-05, -0.005039477623830949, 0.00012978182582578228, 
0.0, 0.0, 0.0, 0.0, 0.0, -2.08005346e-06, -0.00183828647, 0.00389543638, 2.08005346e-06, -1.01779300139805e-05, -0.0031979947047490057, 0.0006755885646788838, 1.2257983473980501e-05, -2.037760006390932e-05, -0.0035561381804662686, 0.00018480057978208613, 3.263558353788982e-05, -3.143997534176266e-05, -0.0038224878306561162, 0.00011434103355951568, 6.407555887965248e-05, -4.336817409628112e-05, -0.0041419209543399295, 0.0001101186698444615, 0.0001074437329759336, -5.637384615170059e-05, -0.004543357158118164, 0.00011796856212348192, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.08005346e-06, -0.00183828647, 0.00389543638, 2.08005346e-06, -1.01779300139805e-05, -0.0031979947047490057, 0.0006755885646788838, 1.2257983473980501e-05, -2.037760006390932e-05, -0.0035561381804662686, 0.00018480057978208613, 3.263558353788982e-05, -3.143997534176266e-05, -0.0038224878306561162, 0.00011434103355951568, 6.407555887965248e-05, -4.336817409628112e-05, -0.0041419209543399295, 0.0001101186698444615, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.08005346e-06, -0.00183828647, 0.00389543638, 2.08005346e-06, -1.01779300139805e-05, -0.0031979947047490057, 0.0006755885646788838, 1.2257983473980501e-05, -2.037760006390932e-05, -0.0035561381804662686, 0.00018480057978208613, 3.263558353788982e-05, -3.143997534176266e-05, -0.0038224878306561162, 0.00011434103355951568, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.08005346e-06, -0.00183828647, 0.00389543638, 2.08005346e-06, -1.01779300139805e-05, -0.0031979947047490057, 0.0006755885646788838, 1.2257983473980501e-05, -2.037760006390932e-05, -0.0035561381804662686, 0.00018480057978208613, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.08005346e-06, -0.00183828647, 0.00389543638, 2.08005346e-06, -1.01779300139805e-05, -0.0031979947047490057, 0.0006755885646788838, 
0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.08005346e-06, -0.00183828647, 0.00389543638, 

};
const real_t E[] = { /* Linear factor (prediction matrix) of 2-sided state constraint. */
0, 

};
const real_t Kx_Ai[] = { /* Prediction component of the state constraint bound. */
0, 

};

const real_t u_lb[] = { /* Left (lower) constraint of the inputs for condensed QP. */
-4.6234, 
-4.6234, 
-4.6234, 
-4.6234, 
-4.6234, 
-4.6234, 
-4.6234, 

};
const real_t u_ub[] = { /* Right (upper) constraint of the inputs for condensed QP. */
5.3766, 
5.3766, 
5.3766, 
5.3766, 
5.3766, 
5.3766, 
5.3766, 

};
const real_t e_lb[] = { /* Left (lower) constraint of the states for condensed QP. */
0, 

};
const real_t e_ub[] = { /* Right (upper) constraint of the states for condensed QP. */
0, 

};

const real_t nu = 0.32972568026804816; /* Fast gradient extra step constant */
const real_t mu = 0.0; /* Augmented Lagrange multiplier penalty parameter. */
const real_t Linv = 25.076245549546485; /* Inverse of gradient Lipschitz constant (1/L) */

/* state dependent variables */
real_t gxoL[MPC_HOR_INPUTS];  /* gradient vector as a function of the current state */
real_t zx_lb[MPC_HOR_MXCONSTRS];  /* mixed constraint lower bound as function of current state */
real_t zx_ub[MPC_HOR_MXCONSTRS];  /* mixed constraint upper bound as function of current state */

/* reference dependent variables */
real_t groL[MPC_HOR_INPUTS];

/* MPC system: state-space and weighting matrices */
const real_t Q[] = {  /* State weighting matrix */
200, 0, 0, 0, 
0, 1000, 0, 0, 
0, 0, 100, 0, 
0, 0, 0, 10, 

};
const real_t R[] = {   /* Input weighting matrix */
0.01, 

};
const real_t P[] = {   /* Terminal state weighting matrix */
200, 0, 0, 0, 
0, 1000, 0, 0, 
0, 0, 100, 0, 
0, 0, 0, 10, 

};
const real_t K[] = {   /* Linear quadratic regulator gain matrix */
0, 

};
const real_t Ad[] = {   /* Discrete-time system matrix */
1.0, -1.0, 0.0, 0.0, 
0.0, 1.00963287, 0.00302193111, -0.000647594865, 
0.0, 6.44427897, 1.02051402, -0.335929795, 
0.0, -0.0952330093, -0.0231655632, 0.162447919, 

};
const real_t Bd[] = {   /* Discrete-time input matrix */
0.0, 
-2.08005346e-06, 
-0.00183828647, 
0.00389543638, 

};
const real_t dt = 0.003;


/* User variables created with appropriate size */
real_t u_opt[MPC_HOR_INPUTS];  /* Optimal input */
real_t l_opt[MPC_HOR_MXCONSTRS];  /* Optimal multiplier */
real_t x_trj[MPC_HOR_STATES + MPC_STATES];  /* State trajectory for u_opt */
real_t u_ini[MPC_HOR_INPUTS];  /* Initial guess input */
real_t l_ini[MPC_HOR_MXCONSTRS];  /* Initial guess multiplier */
real_t ctl_x_ref[MPC_HOR_STATES];  /* Reference for state trajectory */
real_t ctl_u_ref[MPC_HOR_INPUTS];  /* Reference for input trajectory */

/* Always check this declarations match the structure definitions */
struct mpc_conf conf = {1, 1, 0};

struct mpc_qpx qpx = {HoL, gxoL, E, u_lb, u_ub, zx_lb, zx_ub,
		MPC_HOR_INPUTS, MPC_HOR_MXCONSTRS};

struct mpc_sys sys = {Ad, Bd, &dt};

struct mpc_wmx wmx = {Q, R, P,};

struct mpc_lqr lqr = {K, P,};

struct mpc_fgm fgm = {u_ini, gxoL, groL, &(conf.in_iter),
			HoL, GoL, Bh_T, u_lb, u_ub, &nu,
			MPC_HOR, MPC_STATES, MPC_INPUTS, MPC_HOR_INPUTS, MPC_HOR_STATES};

struct mpc_alm alm = {&fgm, l_ini, zx_lb, zx_ub, &(conf.ex_iter),
			&mu,
			E, Kx_Ai, e_lb, e_ub,
			&Linv, 
			MPC_STATES, MPC_MXCONSTRS, MPC_HOR_INPUTS, MPC_HOR_MXCONSTRS};

struct mpc_ctl ctl = {&conf, &qpx, &sys, &wmx, &lqr, &alm,
			u_opt, l_opt, x_trj, 0, 0, u_ini, l_ini};

