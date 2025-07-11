/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystemIndependent_private.h
 *
 * Code generated for Simulink model 'flightControlSystemIndependent'.
 *
 * Model version                  : 9.27
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jul  8 09:23:04 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef flightControlSystemIndependent_private_h_
#define flightControlSystemIndependent_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "flightControlSystemIndependent.h"
#include "flightControlSystemIndependent_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

/* Imported (extern) pointer block signals */
extern uint8_T *imRGB;                 /* '<Root>/Image Data' */
extern real32_T rt_powf_snf(real32_T u0, real32_T u1);
extern void flightControlSystemIndependent_Noopticalflow(uint8_T *rty_Out1);
extern void flightControlSystemIndependent_SqrtUsedFcn_Init
  (DW_SqrtUsedFcn_flightControlSystemIndependent_T *localDW);
extern void flightControlSystemIndependent_SqrtUsedFcn(const real32_T rtu_u[4],
  boolean_T rtu_isSqrtUsed, real32_T rty_P[4],
  DW_SqrtUsedFcn_flightControlSystemIndependent_T *localDW);
extern void flightControlSystemIndependent_MeasurementUpdate_Disable(real32_T
  rty_Lykyhatkk1[2], DW_MeasurementUpdate_flightControlSystemIndependent_T
  *localDW);
extern void flightControlSystemIndependent_MeasurementUpdate(boolean_T
  rtu_Enable, const real32_T rtu_Lk[2], real32_T rtu_yk, const real32_T rtu_Ck[2],
  const real32_T rtu_xhatkk1[2], real32_T rtu_Dk, real32_T rtu_uk, real32_T
  rty_Lykyhatkk1[2], DW_MeasurementUpdate_flightControlSystemIndependent_T
  *localDW);
extern void flightControlSystemIndependent_EnabledSubsystem_Disable(real32_T
  rty_deltax[2], DW_EnabledSubsystem_flightControlSystemIndependent_T *localDW);
extern void flightControlSystemIndependent_EnabledSubsystem(boolean_T rtu_Enable,
  const real32_T rtu_Mk[2], const real32_T rtu_Ck[2], real32_T rtu_yk, const
  real32_T rtu_xhatkk1[2], real32_T rty_deltax[2],
  DW_EnabledSubsystem_flightControlSystemIndependent_T *localDW);
extern void flightControlSystemIndependent_ControlSystem_Init(uint8_T *rty_Flag,
  DW_ControlSystem_flightControlSystemIndependent_T *localDW);
extern void flightControlSystemIndependent_ControlSystem(const CommandBus
  *rtu_ReferenceValueServerCmds, const SensorsBus *rtu_Sensors, real_T
  rtu_VisionbasedData, real32_T rty_motorCmds[4], uint8_T *rty_Flag,
  B_ControlSystem_flightControlSystemIndependent_T *localB,
  DW_ControlSystem_flightControlSystemIndependent_T *localDW,
  ZCE_ControlSystem_flightControlSystemIndependent_T *localZCE);

#endif                           /* flightControlSystemIndependent_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
