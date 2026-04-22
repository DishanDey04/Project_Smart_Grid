/*
 * SmartGridRebuilt.c
 *
 * Code generation for model "SmartGridRebuilt".
 *
 * Model version              : 1.1
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Sat Apr 11 00:02:49 2026
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SmartGridRebuilt.h"
#include "rtwtypes.h"
#include <math.h>
#include "SmartGridRebuilt_private.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Block signals (default storage) */
B_SmartGridRebuilt_T SmartGridRebuilt_B;

/* Block states (default storage) */
DW_SmartGridRebuilt_T SmartGridRebuilt_DW;

/* Real-time model */
static RT_MODEL_SmartGridRebuilt_T SmartGridRebuilt_M_;
RT_MODEL_SmartGridRebuilt_T *const SmartGridRebuilt_M = &SmartGridRebuilt_M_;
real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    real_T tmp;
    real_T tmp_0;
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Model step function */
void SmartGridRebuilt_step(void)
{
  real_T rtb_IRsh_5;
  real_T rtb_SSref;
  real_T rtb_SSref_h;
  real_T rtb_Tcell_KTref_K;
  real_T rtb_Vd;
  real_T rtb_expVdVT;
  real_T tmp;

  /* UnitDelay: '<S4>/Unit Delay' */
  SmartGridRebuilt_B.UnitDelay = SmartGridRebuilt_DW.UnitDelay_DSTATE;

  /* Gain: '<S7>/1//Sref' */
  rtb_SSref = SmartGridRebuilt_P.uSref_Gain * 0.0;

  /* Product: '<S7>/Product1' incorporates:
   *  Constant: '<S7>/0_K'
   *  Constant: '<S7>/IL_module'
   *  Constant: '<S7>/Tref_K'
   *  Gain: '<S7>/Npar'
   *  Gain: '<S7>/alpha_Isc'
   *  Sum: '<S7>/Add'
   *  Sum: '<S7>/Add3'
   */
  SmartGridRebuilt_B.IL = ((SmartGridRebuilt_P.u_K_Value -
    SmartGridRebuilt_P.Tref_K_Value) * SmartGridRebuilt_P.alpha_Isc_Gain +
    SmartGridRebuilt_P.IL_module_Value) * SmartGridRebuilt_P.PVARRAY1_Npar *
    rtb_SSref;

  /* S-Function (sfun_spssw_discc): '<S28>/State-Space' */

  /* S-Function block: <S28>/State-Space */
  {
    real_T accum;

    /*
     * Compute outputs:
     * ---------------
     */
    real_T *Ds = (real_T*)SmartGridRebuilt_DW.StateSpace_PWORK.DS;
    accum = 0.0;
    accum += *(Ds++) * SmartGridRebuilt_B.UnitDelay;
    accum += *(Ds++) * SmartGridRebuilt_B.IL;
    SmartGridRebuilt_B.StateSpace[0] = accum;
    accum = 0.0;
    accum += *(Ds++) * SmartGridRebuilt_B.UnitDelay;
    accum += *(Ds++) * SmartGridRebuilt_B.IL;
    SmartGridRebuilt_B.StateSpace[1] = accum;
  }

  /* UnitDelay: '<S16>/Unit Delay' */
  SmartGridRebuilt_B.UnitDelay_h = SmartGridRebuilt_DW.UnitDelay_DSTATE_m;

  /* Gain: '<S19>/1//Sref' */
  rtb_SSref_h = SmartGridRebuilt_P.uSref_Gain_k * 0.0;

  /* Product: '<S19>/Product1' incorporates:
   *  Constant: '<S19>/0_K'
   *  Constant: '<S19>/IL_module'
   *  Constant: '<S19>/Tref_K'
   *  Gain: '<S19>/Npar'
   *  Gain: '<S19>/alpha_Isc'
   *  Sum: '<S19>/Add'
   *  Sum: '<S19>/Add3'
   */
  SmartGridRebuilt_B.IL_a = ((SmartGridRebuilt_P.u_K_Value_e -
    SmartGridRebuilt_P.Tref_K_Value_c) * SmartGridRebuilt_P.alpha_Isc_Gain_i +
    SmartGridRebuilt_P.IL_module_Value_o) * SmartGridRebuilt_P.PVARRAY2_Npar *
    rtb_SSref_h;

  /* S-Function (sfun_spssw_discc): '<S29>/State-Space' */

  /* S-Function block: <S29>/State-Space */
  {
    real_T accum;

    /*
     * Compute outputs:
     * ---------------
     */
    real_T *Ds = (real_T*)SmartGridRebuilt_DW.StateSpace_PWORK_h.DS;
    accum = 0.0;
    accum += *(Ds++) * SmartGridRebuilt_B.UnitDelay_h;
    accum += *(Ds++) * SmartGridRebuilt_B.IL_a;
    SmartGridRebuilt_B.StateSpace_n[0] = accum;
    accum = 0.0;
    accum += *(Ds++) * SmartGridRebuilt_B.UnitDelay_h;
    accum += *(Ds++) * SmartGridRebuilt_B.IL_a;
    SmartGridRebuilt_B.StateSpace_n[1] = accum;
  }

  /* Sum: '<S11>/Add1' incorporates:
   *  Constant: '<S11>/Rs_array_'
   *  Gain: '<S10>/do not delete this gain'
   *  Gain: '<S8>/do not delete this gain'
   *  Product: '<S11>/Product2'
   */
  rtb_Tcell_KTref_K = 0.34115 * SmartGridRebuilt_P.PVARRAY1_Nser /
    SmartGridRebuilt_P.PVARRAY1_Npar *
    (SmartGridRebuilt_P.donotdeletethisgain_Gain *
     SmartGridRebuilt_B.StateSpace[1]) +
    SmartGridRebuilt_P.donotdeletethisgain_Gain_i *
    SmartGridRebuilt_B.StateSpace[0];

  /* Product: '<S4>/Product3' incorporates:
   *  Constant: '<S4>/Tref_K2'
   *  Constant: '<S7>/0_K'
   */
  rtb_Vd = SmartGridRebuilt_P.u_K_Value / SmartGridRebuilt_P.Tref_K2_Value;

  /* Math: '<S4>/Math Function' incorporates:
   *  Gain: '<S4>/VT_ref_array'
   *  Product: '<S4>/Product1'
   *
   * About '<S4>/Math Function':
   *  Operator: exp
   */
  rtb_expVdVT = exp(1.0 / (1.4110223103082009 * SmartGridRebuilt_P.PVARRAY1_Nser
    * rtb_Vd) * rtb_Tcell_KTref_K);

  /* Fcn: '<S4>/Fcn' */
  tmp = rt_powd_snf(rtb_Vd, 3.0);

  /* Product: '<S4>/Product2' incorporates:
   *  Constant: '<S4>/Rsh_array'
   */
  rtb_SSref *= rtb_Tcell_KTref_K / (202.8148 * SmartGridRebuilt_P.PVARRAY1_Nser /
    SmartGridRebuilt_P.PVARRAY1_Npar);

  /* Product: '<S4>/Product5' incorporates:
   *  Constant: '<S4>/Rsh_array_5%Sref'
   */
  rtb_IRsh_5 = rtb_Tcell_KTref_K / SmartGridRebuilt_P.Rsh_array_5Sref_Value;

  /* Sum: '<S23>/Add1' incorporates:
   *  Constant: '<S23>/Rs_array_'
   *  Gain: '<S20>/do not delete this gain'
   *  Gain: '<S22>/do not delete this gain'
   *  Product: '<S23>/Product2'
   */
  rtb_Vd = 0.34115 * SmartGridRebuilt_P.PVARRAY2_Nser /
    SmartGridRebuilt_P.PVARRAY2_Npar *
    (SmartGridRebuilt_P.donotdeletethisgain_Gain_j *
     SmartGridRebuilt_B.StateSpace_n[1]) +
    SmartGridRebuilt_P.donotdeletethisgain_Gain_n *
    SmartGridRebuilt_B.StateSpace_n[0];

  /* Product: '<S16>/Product3' incorporates:
   *  Constant: '<S16>/Tref_K2'
   *  Constant: '<S19>/0_K'
   */
  rtb_Tcell_KTref_K = SmartGridRebuilt_P.u_K_Value_e /
    SmartGridRebuilt_P.Tref_K2_Value_h;

  /* Update for UnitDelay: '<S4>/Unit Delay' incorporates:
   *  Constant: '<S13>/EgRef'
   *  Constant: '<S4>/Tref_K1'
   *  Constant: '<S4>/one'
   *  Constant: '<S4>/one1'
   *  Constant: '<S7>/0_K'
   *  Fcn: '<S4>/Fcn'
   *  Gain: '<S13>/k1'
   *  Gain: '<S4>/EgRef'
   *  Gain: '<S4>/I0_array'
   *  Gain: '<S4>/dEgdT'
   *  Math: '<S13>/Math Function'
   *  Product: '<S13>/Product'
   *  Product: '<S4>/Product'
   *  Product: '<S4>/Product4'
   *  Sum: '<S13>/Add'
   *  Sum: '<S4>/Add'
   *  Sum: '<S4>/Add1'
   *  Sum: '<S4>/Add3'
   *  Sum: '<S4>/Add4'
   *
   * About '<S13>/Math Function':
   *  Operator: exp
   */
  SmartGridRebuilt_DW.UnitDelay_DSTATE = (exp(SmartGridRebuilt_P.EgRef_Value -
    ((SmartGridRebuilt_P.u_K_Value - SmartGridRebuilt_P.Tref_K1_Value) *
     SmartGridRebuilt_P.dEgdT_Gain + SmartGridRebuilt_P.one1_Value) *
    SmartGridRebuilt_P.EgRef_Gain / (SmartGridRebuilt_P.k1_Gain *
    SmartGridRebuilt_P.u_K_Value)) * (3.0928E-11 *
    SmartGridRebuilt_P.PVARRAY1_Npar * tmp) * (rtb_expVdVT -
    SmartGridRebuilt_P.one_Value) + rtb_SSref) - rtb_IRsh_5;

  /* Update for UnitDelay: '<S16>/Unit Delay' incorporates:
   *  Constant: '<S16>/Rsh_array'
   *  Constant: '<S16>/Rsh_array_5%Sref'
   *  Constant: '<S16>/Tref_K1'
   *  Constant: '<S16>/one'
   *  Constant: '<S16>/one1'
   *  Constant: '<S19>/0_K'
   *  Constant: '<S25>/EgRef'
   *  Fcn: '<S16>/Fcn'
   *  Gain: '<S16>/EgRef'
   *  Gain: '<S16>/I0_array'
   *  Gain: '<S16>/VT_ref_array'
   *  Gain: '<S16>/dEgdT'
   *  Gain: '<S25>/k1'
   *  Math: '<S16>/Math Function'
   *  Math: '<S25>/Math Function'
   *  Product: '<S16>/Product'
   *  Product: '<S16>/Product1'
   *  Product: '<S16>/Product2'
   *  Product: '<S16>/Product4'
   *  Product: '<S16>/Product5'
   *  Product: '<S25>/Product'
   *  Sum: '<S16>/Add'
   *  Sum: '<S16>/Add1'
   *  Sum: '<S16>/Add3'
   *  Sum: '<S16>/Add4'
   *  Sum: '<S25>/Add'
   *
   * About '<S16>/Math Function':
   *  Operator: exp
   *
   * About '<S25>/Math Function':
   *  Operator: exp
   */
  SmartGridRebuilt_DW.UnitDelay_DSTATE_m = (exp(SmartGridRebuilt_P.EgRef_Value_m
    - ((SmartGridRebuilt_P.u_K_Value_e - SmartGridRebuilt_P.Tref_K1_Value_d) *
       SmartGridRebuilt_P.dEgdT_Gain_c + SmartGridRebuilt_P.one1_Value_f) *
    SmartGridRebuilt_P.EgRef_Gain_j / (SmartGridRebuilt_P.k1_Gain_p *
    SmartGridRebuilt_P.u_K_Value_e)) * (3.0928E-11 *
    SmartGridRebuilt_P.PVARRAY2_Npar * rt_powd_snf(rtb_Tcell_KTref_K, 3.0)) *
    (exp(1.0 / (1.4110223103082009 * SmartGridRebuilt_P.PVARRAY2_Nser *
                rtb_Tcell_KTref_K) * rtb_Vd) - SmartGridRebuilt_P.one_Value_b) +
    rtb_Vd / (202.8148 * SmartGridRebuilt_P.PVARRAY2_Nser /
              SmartGridRebuilt_P.PVARRAY2_Npar) * rtb_SSref_h) - rtb_Vd /
    SmartGridRebuilt_P.Rsh_array_5Sref_Value_j;

  /* Matfile logging */
  rt_UpdateTXYLogVars(SmartGridRebuilt_M->rtwLogInfo,
                      (&SmartGridRebuilt_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [1.0E-5s, 0.0s] */
    if ((rtmGetTFinal(SmartGridRebuilt_M)!=-1) &&
        !((rtmGetTFinal(SmartGridRebuilt_M)-SmartGridRebuilt_M->Timing.taskTime0)
          > SmartGridRebuilt_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(SmartGridRebuilt_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SmartGridRebuilt_M->Timing.clockTick0)) {
    ++SmartGridRebuilt_M->Timing.clockTickH0;
  }

  SmartGridRebuilt_M->Timing.taskTime0 = SmartGridRebuilt_M->Timing.clockTick0 *
    SmartGridRebuilt_M->Timing.stepSize0 +
    SmartGridRebuilt_M->Timing.clockTickH0 *
    SmartGridRebuilt_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void SmartGridRebuilt_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)SmartGridRebuilt_M, 0,
                sizeof(RT_MODEL_SmartGridRebuilt_T));
  rtmSetTFinal(SmartGridRebuilt_M, 10.0);
  SmartGridRebuilt_M->Timing.stepSize0 = 1.0E-5;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    SmartGridRebuilt_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(SmartGridRebuilt_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(SmartGridRebuilt_M->rtwLogInfo, (NULL));
    rtliSetLogT(SmartGridRebuilt_M->rtwLogInfo, "tout");
    rtliSetLogX(SmartGridRebuilt_M->rtwLogInfo, "");
    rtliSetLogXFinal(SmartGridRebuilt_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(SmartGridRebuilt_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(SmartGridRebuilt_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(SmartGridRebuilt_M->rtwLogInfo, 0);
    rtliSetLogDecimation(SmartGridRebuilt_M->rtwLogInfo, 1);
    rtliSetLogY(SmartGridRebuilt_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(SmartGridRebuilt_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(SmartGridRebuilt_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &SmartGridRebuilt_B), 0,
                sizeof(B_SmartGridRebuilt_T));

  /* states (dwork) */
  (void) memset((void *)&SmartGridRebuilt_DW, 0,
                sizeof(DW_SmartGridRebuilt_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(SmartGridRebuilt_M->rtwLogInfo, 0.0,
    rtmGetTFinal(SmartGridRebuilt_M), SmartGridRebuilt_M->Timing.stepSize0,
    (&rtmGetErrorStatus(SmartGridRebuilt_M)));

  /* Start for S-Function (sfun_spssw_discc): '<S28>/State-Space' */

  /* S-Function block: <S28>/State-Space */
  {
    SmartGridRebuilt_DW.StateSpace_PWORK.DS = (real_T*)calloc(2 * 2, sizeof
      (real_T));
    SmartGridRebuilt_DW.StateSpace_PWORK.DX_COL = (real_T*)calloc(2, sizeof
      (real_T));
    SmartGridRebuilt_DW.StateSpace_PWORK.TMP2 = (real_T*)calloc(2, sizeof(real_T));
  }

  /* Start for S-Function (sfun_spssw_discc): '<S29>/State-Space' */

  /* S-Function block: <S29>/State-Space */
  {
    SmartGridRebuilt_DW.StateSpace_PWORK_h.DS = (real_T*)calloc(2 * 2, sizeof
      (real_T));
    SmartGridRebuilt_DW.StateSpace_PWORK_h.DX_COL = (real_T*)calloc(2, sizeof
      (real_T));
    SmartGridRebuilt_DW.StateSpace_PWORK_h.TMP2 = (real_T*)calloc(2, sizeof
      (real_T));
  }

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
  SmartGridRebuilt_DW.UnitDelay_DSTATE =
    SmartGridRebuilt_P.UnitDelay_InitialCondition;

  /* InitializeConditions for S-Function (sfun_spssw_discc): '<S28>/State-Space' */
  {
    int32_T i, j;
    real_T *Ds = (real_T*)SmartGridRebuilt_DW.StateSpace_PWORK.DS;

    /* Copy and transpose D */
    for (i=0; i<2; i++) {
      for (j=0; j<2; j++)
        Ds[i*2 + j] = (SmartGridRebuilt_P.StateSpace_DS_param[i + j*2]);
    }
  }

  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay' */
  SmartGridRebuilt_DW.UnitDelay_DSTATE_m =
    SmartGridRebuilt_P.UnitDelay_InitialCondition_l;

  /* InitializeConditions for S-Function (sfun_spssw_discc): '<S29>/State-Space' */
  {
    int32_T i, j;
    real_T *Ds = (real_T*)SmartGridRebuilt_DW.StateSpace_PWORK_h.DS;

    /* Copy and transpose D */
    for (i=0; i<2; i++) {
      for (j=0; j<2; j++)
        Ds[i*2 + j] = (SmartGridRebuilt_P.StateSpace_DS_param_j[i + j*2]);
    }
  }
}

/* Model terminate function */
void SmartGridRebuilt_terminate(void)
{
  /* Terminate for S-Function (sfun_spssw_discc): '<S28>/State-Space' */

  /* S-Function block: <S28>/State-Space */
  {
    /* Free memory */
    free(SmartGridRebuilt_DW.StateSpace_PWORK.DS);
    free(SmartGridRebuilt_DW.StateSpace_PWORK.DX_COL);
    free(SmartGridRebuilt_DW.StateSpace_PWORK.TMP2);
  }

  /* Terminate for S-Function (sfun_spssw_discc): '<S29>/State-Space' */

  /* S-Function block: <S29>/State-Space */
  {
    /* Free memory */
    free(SmartGridRebuilt_DW.StateSpace_PWORK_h.DS);
    free(SmartGridRebuilt_DW.StateSpace_PWORK_h.DX_COL);
    free(SmartGridRebuilt_DW.StateSpace_PWORK_h.TMP2);
  }
}
