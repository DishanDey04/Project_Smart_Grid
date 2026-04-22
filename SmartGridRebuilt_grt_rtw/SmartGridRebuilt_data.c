/*
 * SmartGridRebuilt_data.c
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

/* Block parameters (default storage) */
P_SmartGridRebuilt_T SmartGridRebuilt_P = {
  /* Mask Parameter: PVARRAY1_Npar
   * Referenced by:
   *   '<S4>/Rsh_array'
   *   '<S4>/I0_array'
   *   '<S7>/Npar'
   *   '<S11>/Rs_array_'
   */
  1092.0,

  /* Mask Parameter: PVARRAY2_Npar
   * Referenced by:
   *   '<S16>/Rsh_array'
   *   '<S16>/I0_array'
   *   '<S19>/Npar'
   *   '<S23>/Rs_array_'
   */
  1095.0,

  /* Mask Parameter: PVARRAY1_Nser
   * Referenced by:
   *   '<S4>/Rsh_array'
   *   '<S4>/VT_ref_array'
   *   '<S11>/Rs_array_'
   */
  11.0,

  /* Mask Parameter: PVARRAY2_Nser
   * Referenced by:
   *   '<S16>/Rsh_array'
   *   '<S16>/VT_ref_array'
   *   '<S23>/Rs_array_'
   */
  11.0,

  /* Expression: 0
   * Referenced by: '<S4>/Unit Delay'
   */
  0.0,

  /* Expression: 273.15
   * Referenced by: '<S7>/0_K'
   */
  273.15,

  /* Expression: Tref_K
   * Referenced by: '<S7>/Tref_K'
   */
  298.15,

  /* Expression: alpha_Isc
   * Referenced by: '<S7>/alpha_Isc'
   */
  0.003459,

  /* Expression: IL
   * Referenced by: '<S7>/IL_module'
   */
  8.8849,

  /* Expression: 1e-3
   * Referenced by: '<S7>/1//Sref'
   */
  0.001,

  /* Expression: S.D
   * Referenced by: '<S28>/State-Space'
   */
  { -40.860124542124531, 0.0, 40.860124542124531, 0.0 },

  /* Expression: 0
   * Referenced by: '<S16>/Unit Delay'
   */
  0.0,

  /* Expression: 273.15
   * Referenced by: '<S19>/0_K'
   */
  273.15,

  /* Expression: Tref_K
   * Referenced by: '<S19>/Tref_K'
   */
  298.15,

  /* Expression: alpha_Isc
   * Referenced by: '<S19>/alpha_Isc'
   */
  0.003459,

  /* Expression: IL
   * Referenced by: '<S19>/IL_module'
   */
  8.8849,

  /* Expression: 1e-3
   * Referenced by: '<S19>/1//Sref'
   */
  0.001,

  /* Expression: S.D
   * Referenced by: '<S29>/State-Space'
   */
  { -40.748178995433783, 0.0, 40.748178995433783, 0.0 },

  /* Expression: 1
   * Referenced by: '<S8>/do not delete this gain'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S10>/do not delete this gain'
   */
  1.0,

  /* Expression: Tref_K
   * Referenced by: '<S4>/Tref_K2'
   */
  298.15,

  /* Expression: 1
   * Referenced by: '<S4>/one'
   */
  1.0,

  /* Expression: EgRef/(k1*Tref_K)
   * Referenced by: '<S13>/EgRef'
   */
  43.63127955055414,

  /* Expression: 1
   * Referenced by: '<S4>/one1'
   */
  1.0,

  /* Expression: Tref_K
   * Referenced by: '<S4>/Tref_K1'
   */
  298.15,

  /* Expression: dEgdT
   * Referenced by: '<S4>/dEgdT'
   */
  -0.0002677,

  /* Expression: EgRef
   * Referenced by: '<S4>/EgRef'
   */
  1.121,

  /* Expression: k1
   * Referenced by: '<S13>/k1'
   */
  8.617332478E-5,

  /* Expression: Rsh_array5pc
   * Referenced by: '<S4>/Rsh_array_5%Sref'
   */
  40.860124542124531,

  /* Expression: 1
   * Referenced by: '<S20>/do not delete this gain'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S22>/do not delete this gain'
   */
  1.0,

  /* Expression: Tref_K
   * Referenced by: '<S16>/Tref_K2'
   */
  298.15,

  /* Expression: 1
   * Referenced by: '<S16>/one'
   */
  1.0,

  /* Expression: EgRef/(k1*Tref_K)
   * Referenced by: '<S25>/EgRef'
   */
  43.63127955055414,

  /* Expression: 1
   * Referenced by: '<S16>/one1'
   */
  1.0,

  /* Expression: Tref_K
   * Referenced by: '<S16>/Tref_K1'
   */
  298.15,

  /* Expression: dEgdT
   * Referenced by: '<S16>/dEgdT'
   */
  -0.0002677,

  /* Expression: EgRef
   * Referenced by: '<S16>/EgRef'
   */
  1.121,

  /* Expression: k1
   * Referenced by: '<S25>/k1'
   */
  8.617332478E-5,

  /* Expression: Rsh_array5pc
   * Referenced by: '<S16>/Rsh_array_5%Sref'
   */
  40.748178995433783
};
