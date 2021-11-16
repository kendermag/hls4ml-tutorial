//Numpy array shape [3, 3, 10, 10]
//Min -0.656250000000
//Max 0.718750000000
//Number of zeros 475

#ifndef W10_H_
#define W10_H_

#ifndef __SYNTHESIS__
weight10_t w10[900];
#else
weight10_t w10[900] = {-0.21875, 0.28125, 0.00000, 0.53125, -0.09375, 0.00000, 0.87500, 0.00000, 0.09375, 0.06250, 0.00000, 0.00000, 0.78125, -0.12500, 0.00000, 0.00000, 0.00000, -0.43750, 0.96875, 0.00000, 0.15625, 0.43750, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.43750, 0.50000, 0.25000, 0.00000, -0.03125, 0.00000, 0.37500, 0.00000, -0.03125, -0.34375, 0.00000, 0.09375, 0.00000, -0.59375, 0.37500, 0.21875, 0.53125, 0.87500, 0.00000, 0.96875, -0.50000, 0.34375, 0.46875, 0.00000, 0.21875, 0.25000, 0.00000, 0.15625, 0.46875, 0.00000, -0.40625, 0.34375, 0.00000, 0.00000, -0.06250, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, -0.09375, 0.00000, 0.00000, -0.34375, 0.00000, -0.03125, 0.00000, 0.00000, 0.00000, 0.00000, 0.34375, 0.00000, 0.00000, -0.56250, 0.00000, 0.00000, 0.21875, 0.00000, 0.00000, -1.00000, -0.21875, 0.00000, 0.00000, 0.96875, 0.21875, 0.00000, 0.00000, 0.00000, -0.65625, 0.00000, 0.00000, 0.12500, 0.00000, 0.00000, 0.00000, 0.06250, 0.00000, 0.00000, -0.03125, 0.00000, -0.21875, 0.00000, -0.18750, -0.46875, -0.09375, 0.00000, 0.00000, 0.12500, 0.12500, -0.03125, 0.00000, 0.12500, 0.28125, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, -0.59375, 0.00000, 0.00000, 0.00000, -0.21875, -0.25000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, -0.06250, 0.15625, 0.18750, 0.00000, 0.00000, 0.00000, 0.65625, 0.00000, 0.00000, 0.12500, -0.28125, 0.00000, 0.25000, 0.96875, -0.06250, -0.75000, -0.21875, -0.50000, 0.00000, 0.00000, 0.00000, 0.03125, 0.25000, -0.09375, -0.12500, 0.40625, -0.03125, 0.21875, 0.18750, 0.03125, 0.21875, 0.15625, 0.00000, -0.12500, 0.31250, 0.00000, 0.00000, 0.18750, -0.28125, 0.00000, 0.15625, 0.00000, 0.00000, 0.28125, 0.00000, 0.00000, 0.00000, -0.15625, 0.21875, -0.03125, 0.00000, -0.03125, 0.00000, 0.00000, -0.12500, 0.00000, -0.12500, 0.00000, 0.21875, 0.00000, 0.31250, 0.00000, 0.28125, 0.00000, -0.09375, 0.00000, -0.21875, 0.00000, -0.18750, 0.00000, -0.31250, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.31250, 0.15625, 0.00000, 0.00000, 0.00000, -0.37500, 0.00000, 0.00000, 0.34375, 0.00000, -0.15625, 0.15625, 0.00000, 0.00000, -0.25000, -0.21875, -0.09375, -0.25000, 0.00000, 0.00000, -0.21875, 0.00000, 0.00000, -0.34375, 0.00000, 0.00000, 0.00000, 0.25000, 0.00000, 0.00000, 0.00000, 0.34375, 0.00000, 0.00000, 0.18750, 0.00000, 0.00000, 0.00000, -0.28125, 0.00000, 0.00000, 0.00000, 0.00000, -0.15625, 0.00000, 0.00000, -0.21875, -0.53125, 0.03125, 0.00000, 0.00000, 0.12500, 0.00000, 0.06250, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, -0.31250, 0.43750, -0.06250, 0.00000, 0.03125, 0.00000, 0.25000, -0.15625, 0.21875, 0.00000, 0.00000, 0.06250, 0.00000, 0.00000, -0.09375, 0.00000, 0.00000, -0.03125, 0.00000, 0.00000, 0.00000, 0.18750, -0.53125, 0.00000, -0.21875, 0.00000, 0.00000, 0.28125, 0.12500, -0.12500, 0.00000, 0.00000, 0.00000, 0.34375, 0.28125, 0.00000, -0.09375, -0.15625, 0.00000, 0.15625, -0.21875, 0.40625, 0.00000, 0.15625, 0.00000, 0.40625, -0.28125, -0.31250, 0.12500, 0.00000, 0.15625, 0.00000, -0.40625, 0.00000, 0.00000, -0.09375, 0.00000, 0.00000, 0.00000, 0.12500, 0.00000, 0.03125, -0.06250, 0.00000, 0.00000, 0.00000, 0.12500, 0.21875, -0.09375, 0.15625, 0.00000, 0.00000, -0.15625, 0.00000, 0.00000, 0.25000, -0.37500, 0.00000, 0.12500, 0.28125, 0.00000, 0.00000, 0.00000, 0.09375, 0.00000, 0.15625, -0.21875, 0.00000, -0.15625, 0.00000, 0.00000, 0.00000, 0.00000, 0.21875, 0.00000, -0.06250, -0.12500, -0.40625, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, -0.09375, 0.00000, 0.00000, 0.28125, 0.12500, 0.00000, 0.21875, 0.12500, 0.00000, 0.00000, -0.12500, -0.06250, 0.00000, 0.00000, 0.00000, 0.28125, 0.50000, 0.00000, 0.03125, 0.00000, 0.00000, 0.00000, 0.00000, 0.12500, 0.00000, 0.00000, -0.18750, 0.18750, 0.06250, 0.00000, 0.00000, 0.18750, 0.00000, 0.00000, 0.00000, 0.09375, 0.28125, 0.00000, 0.03125, 0.00000, 0.00000, 0.40625, 0.00000, -0.28125, 0.00000, 0.00000, -0.12500, 0.34375, 0.00000, 0.00000, 0.00000, -0.25000, -0.31250, 0.00000, 0.00000, -0.06250, 0.00000, 0.00000, 0.15625, 0.09375, -0.65625, 0.00000, 0.00000, 0.00000, 0.09375, 0.43750, 0.00000, 0.00000, 0.00000, 0.09375, 0.25000, 0.00000, 0.00000, 0.00000, -0.31250, -0.06250, 0.00000, 0.00000, 0.31250, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, -0.09375, 0.00000, -0.31250, 0.00000, 0.15625, 0.00000, 0.00000, 0.00000, -0.21875, 0.06250, 0.25000, -0.43750, 0.00000, -0.06250, 0.00000, 0.00000, 0.06250, -0.34375, 0.00000, 0.28125, 0.00000, 0.00000, -0.25000, 0.06250, 0.00000, 0.00000, 0.00000, -0.03125, 0.00000, 0.46875, 0.00000, -0.18750, -0.09375, 0.43750, 0.12500, 0.00000, 0.37500, 0.00000, -0.03125, 0.00000, -0.03125, -0.21875, -0.21875, 0.00000, -0.40625, -0.18750, 0.00000, -0.06250, 0.00000, 0.12500, 0.09375, -0.31250, 0.15625, 0.00000, 0.00000, 0.00000, 0.00000, -0.03125, -0.06250, 0.00000, 0.00000, 0.00000, -0.09375, 0.00000, 0.00000, 0.00000, -0.15625, 0.00000, -0.12500, 0.15625, -0.06250, 0.00000, 0.00000, 0.00000, -0.06250, 0.00000, 0.00000, 0.00000, 0.12500, 0.00000, 0.21875, 0.00000, 0.31250, 0.31250, 0.00000, -0.09375, -0.37500, -0.06250, 0.46875, -0.21875, 0.21875, 0.34375, 0.25000, -0.03125, -0.18750, -0.21875, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.18750, -0.12500, -0.03125, 0.43750, 0.00000, 0.00000, 0.00000, 0.00000, 0.40625, 0.00000, 0.00000, -0.18750, 0.34375, 0.00000, -0.31250, 0.03125, 0.00000, 0.00000, 0.34375, 0.03125, -0.09375, 0.12500, 0.06250, 0.00000, 0.00000, 0.25000, 0.00000, -0.12500, 0.06250, 0.12500, 0.00000, 0.06250, 0.00000, 0.12500, 0.00000, 0.00000, 0.00000, -0.06250, 0.34375, 0.09375, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, -0.12500, 0.00000, 0.00000, 0.37500, 0.00000, 0.00000, 0.06250, 0.00000, -0.15625, -0.65625, 0.00000, 0.00000, -0.12500, 0.09375, 0.06250, -0.09375, 0.00000, 0.21875, 0.09375, -0.40625, 0.00000, 0.00000, 0.00000, 0.15625, -0.18750, -0.09375, 0.00000, -0.12500, 0.00000, -0.15625, 0.00000, 0.00000, 0.00000, 0.15625, -0.06250, -0.25000, 0.12500, 0.37500, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.12500, 0.12500, 0.00000, 0.00000, -0.21875, 0.00000, 0.31250, 0.00000, 0.00000, -0.06250, 0.00000, -0.37500, -0.12500, 0.06250, 0.00000, -0.03125, 0.00000, 0.00000, 0.03125, 0.09375, 0.00000, -0.09375, 0.00000, 0.00000, 0.09375, 0.09375, 0.00000, 0.25000, 0.03125, 0.18750, 0.00000, 0.00000, -0.12500, 0.25000, 0.00000, 0.00000, 0.21875, 0.34375, 0.00000, 0.00000, 0.18750, 0.00000, 0.00000, 0.00000, 0.06250, 0.00000, -0.06250, 0.03125, 0.00000, 0.00000, 0.00000, 0.09375, -0.46875, 0.00000, 0.09375, 0.00000, -0.03125, 0.00000, 0.00000, 0.00000, -0.21875, -0.12500, 0.00000, 0.53125, 0.00000, 0.00000, 0.00000, 0.00000, -0.43750, -0.03125, 0.43750, 0.15625, 0.00000, 0.00000, 0.03125, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, -0.09375, 0.25000, 0.37500, 0.18750, 0.21875, 0.00000, -0.09375, 0.00000, 0.00000, 0.06250, -0.03125, 0.25000, 0.00000, -0.28125, 0.00000, -0.59375, 0.00000, -0.31250, 0.18750, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, -0.28125, 0.00000, 0.03125, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.34375, 0.00000, 0.00000, 0.00000, 0.03125, 0.00000, 0.00000, -0.50000, -0.31250, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, -0.09375, 0.00000, 0.12500, 0.00000, -0.03125, -0.15625, 0.00000, 0.46875, 0.00000, -0.09375, 0.03125, 0.00000, -0.31250, 0.53125, 0.59375, 0.00000, -0.34375, -0.21875, 0.00000, 0.21875, 0.00000, -0.03125, 0.00000, -0.25000, 0.00000, 0.09375, 0.18750, -0.06250, 0.00000, 0.00000, 0.00000, 0.00000, -0.21875, 0.00000, 0.00000, -0.31250, 0.50000, 0.00000, -0.28125, 0.00000, -0.21875, 0.00000, 0.00000, 0.00000, 0.00000, -0.34375, 0.03125, 0.21875, 0.03125, 0.09375, 0.21875, -0.28125, 0.28125, 0.00000, 0.00000, 0.00000, -0.03125, 0.31250, 0.62500, 0.25000, 0.00000, 0.00000, 0.00000, 0.00000, 0.12500, 0.00000, 0.28125, -0.34375, -0.21875, 0.00000, -0.03125, -0.06250, 0.00000, 0.21875, 0.00000, 0.00000, 0.40625, 0.15625, -0.06250, 0.00000, 0.03125, 0.00000, -0.25000, 0.00000, -0.40625, -0.65625, -0.37500, -0.34375, 0.15625, 0.00000, 0.00000, 0.31250, 0.00000, 0.00000, 0.03125, 0.00000, 0.00000, 0.00000, 0.15625, 0.00000, 0.00000, 0.00000, 0.12500, 0.00000, -0.40625, 0.00000, -0.37500, -0.59375, 0.00000, -0.18750, 0.00000, 0.00000, 0.00000, -0.06250, -0.31250, 0.00000, 0.00000};
#endif

#endif
