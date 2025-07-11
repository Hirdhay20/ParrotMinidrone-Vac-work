/*
 * flightControlSystemIndependent_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "flightControlSystemIndependent".
 *
 * Model version              : 9.27
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Tue Jul  8 09:23:04 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(int32_T),
  sizeof(CommandBus),
  sizeof(extraSensorData_t),
  sizeof(HAL_acc_SI_t),
  sizeof(HAL_gyro_SI_t),
  sizeof(HAL_fifo_gyro_SI_t),
  sizeof(HAL_magn_mG_t),
  sizeof(HAL_pressure_SI_t),
  sizeof(HAL_echo_t),
  sizeof(HAL_list_echo_t),
  sizeof(HAL_ultrasound_SI_t),
  sizeof(HAL_vbat_SI_t),
  sizeof(HAL_acquisition_t),
  sizeof(SensorsBus),
  sizeof(parrot_ImageProcess_flightControlSystemIndependent_T),
  sizeof(uint_T),
  sizeof(char_T),
  sizeof(uchar_T),
  sizeof(time_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "physical_connection",
  "CommandBus",
  "extraSensorData_t",
  "HAL_acc_SI_t",
  "HAL_gyro_SI_t",
  "HAL_fifo_gyro_SI_t",
  "HAL_magn_mG_t",
  "HAL_pressure_SI_t",
  "HAL_echo_t",
  "HAL_list_echo_t",
  "HAL_ultrasound_SI_t",
  "HAL_vbat_SI_t",
  "HAL_acquisition_t",
  "SensorsBus",
  "parrot_ImageProcess_flightControlSystemIndependent_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&flightControlSystemIndependent_B.RateTransition), 0, 0, 2 },

  { (char_T *)(&flightControlSystemIndependent_B.outputImage[0]), 3, 0, 172800 },

  { (char_T *)(&flightControlSystemIndependent_B.ControlSystem.invertzaxisGain),
    0, 0, 13 },

  { (char_T *)
    (&flightControlSystemIndependent_B.ControlSystem.SimplyIntegrateVelocity[0]),
    1, 0, 2 },

  { (char_T *)
    (&flightControlSystemIndependent_B.ControlSystem.DataTypeConversion), 1, 0,
    49 },

  { (char_T *)(&flightControlSystemIndependent_B.ControlSystem.LogicalOperator),
    4, 0, 1 },

  { (char_T *)(&flightControlSystemIndependent_B.ControlSystem.Compare), 8, 0, 3
  }
  ,

  { (char_T *)(&motors_outport[0]), 1, 0, 4 }
  ,

  { (char_T *)(&flag_outport), 3, 0, 1 }
  ,

  { (char_T *)(&flightControlSystemIndependent_DW.Delay_DSTATE), 0, 0, 3 },

  { (char_T *)(&flightControlSystemIndependent_DW.ToWorkspace1_PWORK.LoggedData),
    11, 0, 3 },

  { (char_T *)(&flightControlSystemIndependent_DW.RateTransition_ActiveBufIdx),
    2, 0, 1 },

  { (char_T *)(&flightControlSystemIndependent_DW.captured[0]), 3, 0, 57600 },

  { (char_T *)(&flightControlSystemIndependent_DW.ControlSystem.Delay2_DSTATE),
    0, 0, 10 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.ToWorkspace_PWORK.LoggedData),
    11, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.SimplyIntegrateVelocity_DSTATE
     [0]), 1, 0, 62 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.FIR_IMUaccel_circBuf), 6,
    0, 1 },

  { (char_T *)(&flightControlSystemIndependent_DW.ControlSystem.Output_DSTATE),
    7, 0, 3 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.FIR_IMUaccel_simContextBuf[
     0]), 1, 0, 36 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.is_c3_flightControlSystemIndependent),
    7, 0, 2 },

  { (char_T *)(&flightControlSystemIndependent_DW.ControlSystem.Output_DSTATE_a),
    5, 0, 3 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.SimplyIntegrateVelocity_PrevResetState),
    2, 0, 9 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.is_active_c3_flightControlSystemIndependent),
    3, 0, 1 },

  { (char_T *)(&flightControlSystemIndependent_DW.ControlSystem.icLoad), 8, 0, 8
  },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_n.EnabledSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_n.EnabledSubsystem_MODE),
    8, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_j.MeasurementUpdate_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_j.MeasurementUpdate_MODE),
    8, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.sf_SqrtUsedFcn_e.sfEvent),
    6, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.sf_SqrtUsedFcn_e.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_d.EnabledSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_d.EnabledSubsystem_MODE),
    8, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_n.MeasurementUpdate_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_n.MeasurementUpdate_MODE),
    8, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.sf_SqrtUsedFcn_h.sfEvent),
    6, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.sf_SqrtUsedFcn_h.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.Normalcondition.Noopticalflow_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.Ultrasoundimproper.Noopticalflow_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&flightControlSystemIndependent_DW.ControlSystem.Noopticalflow.Noopticalflow_SubsysRanBC),
    2, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  39U,
  rtBTransitions
};

/* [EOF] flightControlSystemIndependent_dt.h */
