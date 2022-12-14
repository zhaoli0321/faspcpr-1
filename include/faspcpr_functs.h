/*! \file  faspcpr_functs.h
 *
 *  \brief Function decoration for the FASPCPR package
 *
 *---------------------------------------------------------------------------------
 *  Copyright (C) 2015--2022 by the FASP team. All rights reserved.                
 *---------------------------------------------------------------------------------
 *
 *  \warning DO NOT EDIT!!! This file is automatically generated!
 */ 

#include "fasp.h" 
#include "fasp_block.h" 
#include "faspcpr.h" 

/*-------- In file: AuxGetblkBSR.c --------*/

dCSRmat fasp_dbsr_getPP (dBSRmat *A);


/*-------- In file: PreBSR.c --------*/

void fasp_precond_dbsr_CPR (REAL *r,
                            REAL *z,
                            void *data);

void fasp_aux_pres2blkoil (INT Npres,
                           REAL *pres,
                           INT Nx,
                           REAL *x,
                           INT jneq,
                           INT order);


/*-------- In file: PreDecouple.c --------*/

dBSRmat fasp_dbsr_timpes_decoupling2 (dBSRmat *A,
                                      REAL *diaginv,
                                      REAL *sol);

void fasp_precond_dbsr_timpes_decoupling2 (REAL *val,
                                           REAL *sol,
                                           INT n,
                                           INT nb,
                                           REAL *pb);


/*-------- In file: fasp4blkoil.c --------*/

void FASP_BSRSOL_ASCPR (dBSRmat   *A,
                        dvector   *b,
                        dvector   *x,
                        ITS_param *itparam,
                        ILU_param *iluparam,
                        AMG_param *amgparam,
                        const INT mu);

INT fasp_solver_dbsr_krylov_ASCPR ( dBSRmat *A,
                                    dvector *b,
                                    dvector *x,
                                    ITS_param *itparam,
                                    ILU_param *iluparam,
                                    AMG_param *amgparam,
                                    ivector *neigh,
                                    ivector *order);

/* End of faspcpr_functs.h */
