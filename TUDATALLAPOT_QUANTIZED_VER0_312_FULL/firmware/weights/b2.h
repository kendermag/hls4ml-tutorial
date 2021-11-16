//Numpy array shape [8]
//Min -0.125000000000
//Max 0.187500000000
//Number of zeros 1

#ifndef B2_H_
#define B2_H_

#ifndef __SYNTHESIS__
bias2_t b2[8];
#else
bias2_t b2[8] = {0.06250, 0.06250, 0.03125, 0.00000, 0.06250, 0.03125, 0.00000, -0.12500};
#endif

#endif
