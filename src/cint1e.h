/*
 * Copyright (C) 2013  Qiming Sun <osirpt.sun@gmail.com>
 *
 */

#include <complex.h>
#include "config.h"

FINT CINT1e_loop(double *gctr, CINTEnvVars *envs, double *cache);

FINT CINT1e_nuc_loop(double *gctr, CINTEnvVars *envs, double fac, FINT nuc_id, double *cache);

FINT CINT1e_drv(double *out, FINT *dims, CINTEnvVars *envs,
               double *cache, void (*f_c2s)(), FINT int1e_type);

FINT CINT1e_spinor_drv(double complex *out, FINT *dims, CINTEnvVars *envs,
                       double *cache, void (*f_c2s)(), FINT int1e_type);

double CINTnuc_mod(double aij, FINT nuc_id, FINT *atm, double *env);

#define INT1E_TYPE_OVLP 0
#define INT1E_TYPE_RINV 1
#define INT1E_TYPE_NUC  2

