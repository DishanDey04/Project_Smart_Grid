/*
 * SmartGridRebuilt.h
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

#ifndef RTW_HEADER_SmartGridRebuilt_h_
#define RTW_HEADER_SmartGridRebuilt_h_
#ifndef SmartGridRebuilt_COMMON_INCLUDES_
#define SmartGridRebuilt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* SmartGridRebuilt_COMMON_INCLUDES_ */

#include "SmartGridRebuilt_types.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include <float.h>
#include <string.h>
#include <stddef.h>
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T UnitDelay;                    /* '<S4>/Unit Delay' */
  real_T IL;                           /* '<S7>/Product1' */
  real_T StateSpace[2];                /* '<S28>/State-Space' */
  real_T UnitDelay_h;                  /* '<S16>/Unit Delay' */
  real_T IL_a;                         /* '<S19>/Product1' */
  real_T StateSpace_n[2];              /* '<S29>/State-Space' */
} B_SmartGridRebuilt_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S4>/Unit Delay' */
  real_T UnitDelay_DSTATE_m;           /* '<S16>/Unit Delay' */
  struct {
    void *AS;
    void *BS;
    void *CS;
    void *DS;
    void *DX_COL;
    void *BD_COL;
    void *TMP1;
    void *TMP2;
    void *XTMP;
    void *SWITCH_STATUS;
    void *SWITCH_STATUS_INIT;
    void *SW_CHG;
    void *G_STATE;
    void *USWLAST;
    void *XKM12;
    void *XKP12;
    void *XLAST;
    void *ULAST;
    void *IDX_SW_CHG;
    void *Y_SWITCH;
    void *SWITCH_TYPES;
    void *IDX_OUT_SW;
    void *SWITCH_TOPO_SAVED_IDX;
    void *SWITCH_MAP;
  } StateSpace_PWORK;                  /* '<S28>/State-Space' */

  struct {
    void *AS;
    void *BS;
    void *CS;
    void *DS;
    void *DX_COL;
    void *BD_COL;
    void *TMP1;
    void *TMP2;
    void *XTMP;
    void *SWITCH_STATUS;
    void *SWITCH_STATUS_INIT;
    void *SW_CHG;
    void *G_STATE;
    void *USWLAST;
    void *XKM12;
    void *XKP12;
    void *XLAST;
    void *ULAST;
    void *IDX_SW_CHG;
    void *Y_SWITCH;
    void *SWITCH_TYPES;
    void *IDX_OUT_SW;
    void *SWITCH_TOPO_SAVED_IDX;
    void *SWITCH_MAP;
  } StateSpace_PWORK_h;                /* '<S29>/State-Space' */

  int_T StateSpace_IWORK[11];          /* '<S28>/State-Space' */
  int_T StateSpace_IWORK_p[11];        /* '<S29>/State-Space' */
} DW_SmartGridRebuilt_T;

/* Parameters (default storage) */
struct P_SmartGridRebuilt_T_ {
  real_T PVARRAY1_Npar;                /* Mask Parameter: PVARRAY1_Npar
                                        * Referenced by:
                                        *   '<S4>/Rsh_array'
                                        *   '<S4>/I0_array'
                                        *   '<S7>/Npar'
                                        *   '<S11>/Rs_array_'
                                        */
  real_T PVARRAY2_Npar;                /* Mask Parameter: PVARRAY2_Npar
                                        * Referenced by:
                                        *   '<S16>/Rsh_array'
                                        *   '<S16>/I0_array'
                                        *   '<S19>/Npar'
                                        *   '<S23>/Rs_array_'
                                        */
  real_T PVARRAY1_Nser;                /* Mask Parameter: PVARRAY1_Nser
                                        * Referenced by:
                                        *   '<S4>/Rsh_array'
                                        *   '<S4>/VT_ref_array'
                                        *   '<S11>/Rs_array_'
                                        */
  real_T PVARRAY2_Nser;                /* Mask Parameter: PVARRAY2_Nser
                                        * Referenced by:
                                        *   '<S16>/Rsh_array'
                                        *   '<S16>/VT_ref_array'
                                        *   '<S23>/Rs_array_'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S4>/Unit Delay'
                                        */
  real_T u_K_Value;                    /* Expression: 273.15
                                        * Referenced by: '<S7>/0_K'
                                        */
  real_T Tref_K_Value;                 /* Expression: Tref_K
                                        * Referenced by: '<S7>/Tref_K'
                                        */
  real_T alpha_Isc_Gain;               /* Expression: alpha_Isc
                                        * Referenced by: '<S7>/alpha_Isc'
                                        */
  real_T IL_module_Value;              /* Expression: IL
                                        * Referenced by: '<S7>/IL_module'
                                        */
  real_T uSref_Gain;                   /* Expression: 1e-3
                                        * Referenced by: '<S7>/1//Sref'
                                        */
  real_T StateSpace_DS_param[4];       /* Expression: S.D
                                        * Referenced by: '<S28>/State-Space'
                                        */
  real_T UnitDelay_InitialCondition_l; /* Expression: 0
                                        * Referenced by: '<S16>/Unit Delay'
                                        */
  real_T u_K_Value_e;                  /* Expression: 273.15
                                        * Referenced by: '<S19>/0_K'
                                        */
  real_T Tref_K_Value_c;               /* Expression: Tref_K
                                        * Referenced by: '<S19>/Tref_K'
                                        */
  real_T alpha_Isc_Gain_i;             /* Expression: alpha_Isc
                                        * Referenced by: '<S19>/alpha_Isc'
                                        */
  real_T IL_module_Value_o;            /* Expression: IL
                                        * Referenced by: '<S19>/IL_module'
                                        */
  real_T uSref_Gain_k;                 /* Expression: 1e-3
                                        * Referenced by: '<S19>/1//Sref'
                                        */
  real_T StateSpace_DS_param_j[4];     /* Expression: S.D
                                        * Referenced by: '<S29>/State-Space'
                                        */
  real_T donotdeletethisgain_Gain;     /* Expression: 1
                                        * Referenced by: '<S8>/do not delete this gain'
                                        */
  real_T donotdeletethisgain_Gain_i;   /* Expression: 1
                                        * Referenced by: '<S10>/do not delete this gain'
                                        */
  real_T Tref_K2_Value;                /* Expression: Tref_K
                                        * Referenced by: '<S4>/Tref_K2'
                                        */
  real_T one_Value;                    /* Expression: 1
                                        * Referenced by: '<S4>/one'
                                        */
  real_T EgRef_Value;                  /* Expression: EgRef/(k1*Tref_K)
                                        * Referenced by: '<S13>/EgRef'
                                        */
  real_T one1_Value;                   /* Expression: 1
                                        * Referenced by: '<S4>/one1'
                                        */
  real_T Tref_K1_Value;                /* Expression: Tref_K
                                        * Referenced by: '<S4>/Tref_K1'
                                        */
  real_T dEgdT_Gain;                   /* Expression: dEgdT
                                        * Referenced by: '<S4>/dEgdT'
                                        */
  real_T EgRef_Gain;                   /* Expression: EgRef
                                        * Referenced by: '<S4>/EgRef'
                                        */
  real_T k1_Gain;                      /* Expression: k1
                                        * Referenced by: '<S13>/k1'
                                        */
  real_T Rsh_array_5Sref_Value;        /* Expression: Rsh_array5pc
                                        * Referenced by: '<S4>/Rsh_array_5%Sref'
                                        */
  real_T donotdeletethisgain_Gain_j;   /* Expression: 1
                                        * Referenced by: '<S20>/do not delete this gain'
                                        */
  real_T donotdeletethisgain_Gain_n;   /* Expression: 1
                                        * Referenced by: '<S22>/do not delete this gain'
                                        */
  real_T Tref_K2_Value_h;              /* Expression: Tref_K
                                        * Referenced by: '<S16>/Tref_K2'
                                        */
  real_T one_Value_b;                  /* Expression: 1
                                        * Referenced by: '<S16>/one'
                                        */
  real_T EgRef_Value_m;                /* Expression: EgRef/(k1*Tref_K)
                                        * Referenced by: '<S25>/EgRef'
                                        */
  real_T one1_Value_f;                 /* Expression: 1
                                        * Referenced by: '<S16>/one1'
                                        */
  real_T Tref_K1_Value_d;              /* Expression: Tref_K
                                        * Referenced by: '<S16>/Tref_K1'
                                        */
  real_T dEgdT_Gain_c;                 /* Expression: dEgdT
                                        * Referenced by: '<S16>/dEgdT'
                                        */
  real_T EgRef_Gain_j;                 /* Expression: EgRef
                                        * Referenced by: '<S16>/EgRef'
                                        */
  real_T k1_Gain_p;                    /* Expression: k1
                                        * Referenced by: '<S25>/k1'
                                        */
  real_T Rsh_array_5Sref_Value_j;      /* Expression: Rsh_array5pc
                                        * Referenced by: '<S16>/Rsh_array_5%Sref'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_SmartGridRebuilt_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_SmartGridRebuilt_T SmartGridRebuilt_P;

/* Block signals (default storage) */
extern B_SmartGridRebuilt_T SmartGridRebuilt_B;

/* Block states (default storage) */
extern DW_SmartGridRebuilt_T SmartGridRebuilt_DW;

/* Model entry point functions */
extern void SmartGridRebuilt_initialize(void);
extern void SmartGridRebuilt_step(void);
extern void SmartGridRebuilt_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SmartGridRebuilt_T *const SmartGridRebuilt_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SmartGridRebuilt'
 * '<S1>'   : 'SmartGridRebuilt/PV ARRAY1'
 * '<S2>'   : 'SmartGridRebuilt/PV ARRAY2'
 * '<S3>'   : 'SmartGridRebuilt/powergui'
 * '<S4>'   : 'SmartGridRebuilt/PV ARRAY1/Diode Rsh'
 * '<S5>'   : 'SmartGridRebuilt/PV ARRAY1/I Filter'
 * '<S6>'   : 'SmartGridRebuilt/PV ARRAY1/IL'
 * '<S7>'   : 'SmartGridRebuilt/PV ARRAY1/IL ctrl'
 * '<S8>'   : 'SmartGridRebuilt/PV ARRAY1/I_PV'
 * '<S9>'   : 'SmartGridRebuilt/PV ARRAY1/V Filter'
 * '<S10>'  : 'SmartGridRebuilt/PV ARRAY1/V_PV'
 * '<S11>'  : 'SmartGridRebuilt/PV ARRAY1/Vdiode'
 * '<S12>'  : 'SmartGridRebuilt/PV ARRAY1/Diode Rsh/Id+IRsh'
 * '<S13>'  : 'SmartGridRebuilt/PV ARRAY1/Diode Rsh/Subsystem'
 * '<S14>'  : 'SmartGridRebuilt/PV ARRAY1/I_PV/Model'
 * '<S15>'  : 'SmartGridRebuilt/PV ARRAY1/V_PV/Model'
 * '<S16>'  : 'SmartGridRebuilt/PV ARRAY2/Diode Rsh'
 * '<S17>'  : 'SmartGridRebuilt/PV ARRAY2/I Filter'
 * '<S18>'  : 'SmartGridRebuilt/PV ARRAY2/IL'
 * '<S19>'  : 'SmartGridRebuilt/PV ARRAY2/IL ctrl'
 * '<S20>'  : 'SmartGridRebuilt/PV ARRAY2/I_PV'
 * '<S21>'  : 'SmartGridRebuilt/PV ARRAY2/V Filter'
 * '<S22>'  : 'SmartGridRebuilt/PV ARRAY2/V_PV'
 * '<S23>'  : 'SmartGridRebuilt/PV ARRAY2/Vdiode'
 * '<S24>'  : 'SmartGridRebuilt/PV ARRAY2/Diode Rsh/Id+IRsh'
 * '<S25>'  : 'SmartGridRebuilt/PV ARRAY2/Diode Rsh/Subsystem'
 * '<S26>'  : 'SmartGridRebuilt/PV ARRAY2/I_PV/Model'
 * '<S27>'  : 'SmartGridRebuilt/PV ARRAY2/V_PV/Model'
 * '<S28>'  : 'SmartGridRebuilt/powergui/EquivalentModel1'
 * '<S29>'  : 'SmartGridRebuilt/powergui/EquivalentModel2'
 * '<S30>'  : 'SmartGridRebuilt/powergui/EquivalentModel1/Sources'
 * '<S31>'  : 'SmartGridRebuilt/powergui/EquivalentModel1/Yout'
 * '<S32>'  : 'SmartGridRebuilt/powergui/EquivalentModel2/Sources'
 * '<S33>'  : 'SmartGridRebuilt/powergui/EquivalentModel2/Yout'
 */
#endif                                 /* RTW_HEADER_SmartGridRebuilt_h_ */
