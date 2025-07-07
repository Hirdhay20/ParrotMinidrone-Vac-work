/*
 * flightControlSystem_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "flightControlSystem".
 *
 * Model version              : 9.18
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Mon Jul  7 10:33:56 2025
 *
 * Target selection: sldrtert.tlc
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
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
  sizeof(int64_T),
  sizeof(uint64_T),
  sizeof(int32_T),
  sizeof(struct_eF5OUT33sX0T9pzS8027m),
  sizeof(struct_FIfaVnupBjYAxo1EdNiDlF),
  sizeof(struct_eFnp8sKFNJLN84XLbLzaFF),
  sizeof(struct_8SSZ93PxvPkADZcA4gG8MD),
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
  sizeof(int32_T),
  sizeof(int32_T),
  sizeof(int32_T),
  sizeof(int32_T),
  sizeof(int32_T),
  sizeof(int32_T),
  sizeof(int32_T),
  sizeof(int32_T),
  sizeof(parrot_ImageProcess_flightControlSystem_T),
  sizeof(uint64_T),
  sizeof(int64_T),
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
  "int64_T",
  "uint64_T",
  "struct_hE1099BMemg5OfzqcWAA6G",
  "struct_eF5OUT33sX0T9pzS8027m",
  "struct_FIfaVnupBjYAxo1EdNiDlF",
  "struct_eFnp8sKFNJLN84XLbLzaFF",
  "struct_8SSZ93PxvPkADZcA4gG8MD",
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
  "struct_eAf0NJvzCY9HYTXF7bLNgB",
  "struct_XRMsui9C07VjBvdq1msujB",
  "struct_hxsmtt0xTZOLDNa2Rz7GAF",
  "struct_IZWOW0zYvpphl7qLgSfN7E",
  "struct_q6UUpnZ4gTjFvULFx6Rxa",
  "struct_OMRgDnJcZuQneKEj9vdTyD",
  "struct_p3FXZIgqtjF2uqDpmYjb6C",
  "struct_OSJpyIZcrpXqReVWwh9iuG",
  "parrot_ImageProcess_flightControlSystem_T",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&flightControlSystem_B.RateTransition), 0, 0, 2 },

  { (char_T *)(&flightControlSystem_B.outputImage[0]), 3, 0, 172800 },

  { (char_T *)(&flightControlSystem_B.ControlSystem.inverseIMU_gain[0]), 1, 0, 6
  },

  { (char_T *)(&flightControlSystem_B.ControlSystem.Reshape_k[0]), 1, 0, 4 },

  { (char_T *)(&flightControlSystem_B.ControlSystem.Reshapexhat[0]), 0, 0, 8 },

  { (char_T *)(&flightControlSystem_B.ControlSystem.DataTypeConversion3[0]), 1,
    0, 3 },

  { (char_T *)(&flightControlSystem_B.ControlSystem.invertzaxisGain), 0, 0, 9 },

  { (char_T *)(&flightControlSystem_B.ControlSystem.SimplyIntegrateVelocity[0]),
    1, 0, 15 },

  { (char_T *)(&flightControlSystem_B.ControlSystem.DataTypeConversion), 1, 0,
    43 },

  { (char_T *)(&flightControlSystem_B.ControlSystem.LogicalOperator), 4, 0, 1 },

  { (char_T *)(&flightControlSystem_B.ControlSystem.Compare), 8, 0, 4 },

  { (char_T *)(&flightControlSystem_B.ControlSystem.EnabledSubsystem_n.Product2
               [0]), 1, 0, 2 },

  { (char_T *)
    (&flightControlSystem_B.ControlSystem.MeasurementUpdate_j.Product3[0]), 1, 0,
    2 },

  { (char_T *)(&flightControlSystem_B.ControlSystem.EnabledSubsystem_d.Product2
               [0]), 1, 0, 2 },

  { (char_T *)
    (&flightControlSystem_B.ControlSystem.MeasurementUpdate_n.Product3[0]), 1, 0,
    2 }
  ,

  { (char_T *)(&motors_outport[0]), 1, 0, 4 }
  ,

  { (char_T *)(&flag_outport), 3, 0, 1 }
  ,

  { (char_T *)(&flightControlSystem_DW.Delay_DSTATE), 0, 0, 3 },

  { (char_T *)(&flightControlSystem_DW.ToWorkspace1_PWORK.LoggedData), 11, 0, 4
  },

  { (char_T *)(&flightControlSystem_DW.RateTransition_ActiveBufIdx), 2, 0, 1 },

  { (char_T *)(&flightControlSystem_DW.captured[0]), 3, 0, 57600 },

  { (char_T *)(&flightControlSystem_DW.ControlSystem.Delay2_DSTATE), 0, 0, 9 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.ToWorkspace_PWORK.LoggedData), 11, 0,
    1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.SimplyIntegrateVelocity_DSTATE[0]), 1,
    0, 62 },

  { (char_T *)(&flightControlSystem_DW.ControlSystem.FIR_IMUaccel_circBuf), 6, 0,
    1 },

  { (char_T *)(&flightControlSystem_DW.ControlSystem.Output_DSTATE), 7, 0, 3 },

  { (char_T *)(&flightControlSystem_DW.ControlSystem.pressureFilter_IIR_tmp), 1,
    0, 44 },

  { (char_T *)(&flightControlSystem_DW.ControlSystem.is_c3_flightControlSystem),
    7, 0, 2 },

  { (char_T *)(&flightControlSystem_DW.ControlSystem.Output_DSTATE_a), 5, 0, 3 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.SimplyIntegrateVelocity_PrevResetState),
    2, 0, 7 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.is_active_c3_flightControlSystem), 3,
    0, 1 },

  { (char_T *)(&flightControlSystem_DW.ControlSystem.icLoad), 8, 0, 8 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.EnabledSubsystem_n.EnabledSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.EnabledSubsystem_n.EnabledSubsystem_MODE),
    8, 0, 1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.MeasurementUpdate_j.MeasurementUpdate_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.MeasurementUpdate_j.MeasurementUpdate_MODE),
    8, 0, 1 },

  { (char_T *)(&flightControlSystem_DW.ControlSystem.sf_SqrtUsedFcn_e.sfEvent),
    6, 0, 1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.sf_SqrtUsedFcn_e.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.EnabledSubsystem_d.EnabledSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.EnabledSubsystem_d.EnabledSubsystem_MODE),
    8, 0, 1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.MeasurementUpdate_n.MeasurementUpdate_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.MeasurementUpdate_n.MeasurementUpdate_MODE),
    8, 0, 1 },

  { (char_T *)(&flightControlSystem_DW.ControlSystem.sf_SqrtUsedFcn_h.sfEvent),
    6, 0, 1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.sf_SqrtUsedFcn_h.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.Normalcondition.Geofencingerror_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.Ultrasoundimproper.Geofencingerror_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.Noopticalflow.Geofencingerror_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.estimatorOpticalflowerror.Geofencingerror_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&flightControlSystem_DW.ControlSystem.Geofencingerror.Geofencingerror_SubsysRanBC),
    2, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  49U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&flightControlSystem_P.Sensors), 21, 0, 1 },

  { (char_T *)(&flightControlSystem_P.U[0]), 0, 0, 30 },

  { (char_T *)(&flightControlSystem_P.ThingSpeakOutput_ChannelFields), 6, 0, 1 },

  { (char_T *)(&flightControlSystem_P.Constant_Value), 0, 0, 5 },

  { (char_T *)(&flightControlSystem_P.ControlSystem.outlierBelowFloor_const), 0,
    0, 6 },

  { (char_T *)
    (&flightControlSystem_P.ControlSystem.Angularvelocitycontrolloop_D[0]), 1, 0,
    44 },

  { (char_T *)(&flightControlSystem_P.ControlSystem.WrapToZero_Threshold), 7, 0,
    5 },

  { (char_T *)(&flightControlSystem_P.ControlSystem.WrapToZero_Threshold_c), 5,
    0, 2 },

  { (char_T *)(&flightControlSystem_P.ControlSystem.Lykyhatkk1_Y0), 0, 0, 102 },

  { (char_T *)(&flightControlSystem_P.ControlSystem.Out1_Y0), 1, 0, 307 },

  { (char_T *)(&flightControlSystem_P.ControlSystem.Output_InitialCondition), 7,
    0, 9 },

  { (char_T *)(&flightControlSystem_P.ControlSystem.Output_InitialCondition_fi),
    5, 0, 3 },

  { (char_T *)(&flightControlSystem_P.ControlSystem.controlModePosVsOrient_Value),
    8, 0, 5 },

  { (char_T *)(&flightControlSystem_P.ControlSystem.Constant_Value_km), 2, 0, 8
  },

  { (char_T *)
    (&flightControlSystem_P.ControlSystem.Disabletemperaturecompensation_CurrentSetting),
    3, 0, 3 },

  { (char_T *)(&flightControlSystem_P.ControlSystem.EnabledSubsystem_n.deltax_Y0),
    1, 0, 1 },

  { (char_T *)
    (&flightControlSystem_P.ControlSystem.MeasurementUpdate_j.Lykyhatkk1_Y0), 1,
    0, 1 },

  { (char_T *)(&flightControlSystem_P.ControlSystem.EnabledSubsystem_d.deltax_Y0),
    1, 0, 1 },

  { (char_T *)
    (&flightControlSystem_P.ControlSystem.MeasurementUpdate_n.Lykyhatkk1_Y0), 1,
    0, 1 },

  { (char_T *)
    (&flightControlSystem_P.ControlSystem.Normalcondition.Constant_Value), 3, 0,
    1 },

  { (char_T *)
    (&flightControlSystem_P.ControlSystem.Ultrasoundimproper.Constant_Value), 3,
    0, 1 },

  { (char_T *)(&flightControlSystem_P.ControlSystem.Noopticalflow.Constant_Value),
    3, 0, 1 },

  { (char_T *)
    (&flightControlSystem_P.ControlSystem.estimatorOpticalflowerror.Constant_Value),
    3, 0, 1 },

  { (char_T *)
    (&flightControlSystem_P.ControlSystem.Geofencingerror.Constant_Value), 3, 0,
    1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  24U,
  rtPTransitions
};

/* [EOF] flightControlSystem_dt.h */
