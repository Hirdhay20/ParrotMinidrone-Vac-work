/*
 * flightControlSystem_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "flightControlSystem".
 *
 * Model version              : 9.18
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Mon Jul  7 09:56:11 2025
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef flightControlSystem_private_h_
#define flightControlSystem_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "flightControlSystem.h"
#include "flightControlSystem_types.h"

/* Imported (extern) pointer block signals */
extern uint8_T *imRGB;                 /* '<Root>/Image Data' */
extern void flightControlSystem_Geofencingerror(uint8_T *rty_Out1,
  P_Geofencingerror_flightControlSystem_T *localP);
extern void flightControlSystem_SqrtUsedFcn_Init
  (DW_SqrtUsedFcn_flightControlSystem_T *localDW);
extern void flightControlSystem_SqrtUsedFcn(DW_SqrtUsedFcn_flightControlSystem_T
  *localDW);
extern void flightControlSystem_MeasurementUpdate_Init
  (B_MeasurementUpdate_flightControlSystem_T *localB,
   P_MeasurementUpdate_flightControlSystem_T *localP);
extern void flightControlSystem_MeasurementUpdate_Start
  (DW_MeasurementUpdate_flightControlSystem_T *localDW);
extern void flightControlSystem_MeasurementUpdate_Disable
  (B_MeasurementUpdate_flightControlSystem_T *localB,
   DW_MeasurementUpdate_flightControlSystem_T *localDW,
   P_MeasurementUpdate_flightControlSystem_T *localP);
extern void flightControlSystem_MeasurementUpdate(boolean_T rtu_Enable, const
  real32_T rtu_Lk[2], real32_T rtu_yk, const real32_T rtu_Ck[2], const real32_T
  rtu_xhatkk1[2], real32_T rtu_Dk, real32_T rtu_uk,
  B_MeasurementUpdate_flightControlSystem_T *localB,
  DW_MeasurementUpdate_flightControlSystem_T *localDW,
  P_MeasurementUpdate_flightControlSystem_T *localP);
extern void flightControlSystem_EnabledSubsystem_Init
  (B_EnabledSubsystem_flightControlSystem_T *localB,
   P_EnabledSubsystem_flightControlSystem_T *localP);
extern void flightControlSystem_EnabledSubsystem_Start
  (DW_EnabledSubsystem_flightControlSystem_T *localDW);
extern void flightControlSystem_EnabledSubsystem_Disable
  (B_EnabledSubsystem_flightControlSystem_T *localB,
   DW_EnabledSubsystem_flightControlSystem_T *localDW,
   P_EnabledSubsystem_flightControlSystem_T *localP);
extern void flightControlSystem_EnabledSubsystem(boolean_T rtu_Enable, const
  real32_T rtu_Mk[2], const real32_T rtu_Ck[2], real32_T rtu_yk, const real32_T
  rtu_xhatkk1[2], B_EnabledSubsystem_flightControlSystem_T *localB,
  DW_EnabledSubsystem_flightControlSystem_T *localDW,
  P_EnabledSubsystem_flightControlSystem_T *localP);
extern void flightControlSystem_ControlSystem_Init
  (B_ControlSystem_flightControlSystem_T *localB,
   DW_ControlSystem_flightControlSystem_T *localDW,
   P_ControlSystem_flightControlSystem_T *localP);
extern void flightControlSystem_ControlSystem_Start
  (DW_ControlSystem_flightControlSystem_T *localDW);
extern void flightControlSystem_ControlSystem_Update
  (B_ControlSystem_flightControlSystem_T *localB,
   DW_ControlSystem_flightControlSystem_T *localDW,
   P_ControlSystem_flightControlSystem_T *localP);
extern void flightControlSystem_ControlSystem(const CommandBus
  *rtu_ReferenceValueServerCmds, const SensorsBus *rtu_Sensors, real_T
  rtu_VisionbasedData, B_ControlSystem_flightControlSystem_T *localB,
  DW_ControlSystem_flightControlSystem_T *localDW,
  P_ControlSystem_flightControlSystem_T *localP,
  ZCE_ControlSystem_flightControlSystem_T *localZCE);

#endif                                 /* flightControlSystem_private_h_ */
