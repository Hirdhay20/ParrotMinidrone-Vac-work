/*
 * flightControlSystem_types.h
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

#ifndef flightControlSystem_types_h_
#define flightControlSystem_types_h_
#include "rtwtypes.h"
#include "C:\ProgramData\MATLAB\SupportPackages\R2024b\toolbox\target\supportpackages\parrot\include\HAL.h"
#ifndef DEFINED_TYPEDEF_FOR_CommandBus_
#define DEFINED_TYPEDEF_FOR_CommandBus_

typedef struct {
  boolean_T controlModePosVSOrient;
  real32_T pos_ref[3];
  boolean_T takeoff_flag;
  real32_T orient_ref[3];
  uint32_T live_time_ticks;
} CommandBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_extraSensorData_t_
#define DEFINED_TYPEDEF_FOR_extraSensorData_t_

typedef struct {
  real32_T opticalFlow_data[3];
  real32_T posVIS_data[4];
  real32_T usePosVIS_flag;
} extraSensorData_t;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SensorsBus_
#define DEFINED_TYPEDEF_FOR_SensorsBus_

typedef struct {
  extraSensorData_t VisionSensors;
  HAL_acquisition_t HALSensors;
  real32_T SensorCalibration[8];
} SensorsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_eF5OUT33sX0T9pzS8027m_
#define DEFINED_TYPEDEF_FOR_struct_eF5OUT33sX0T9pzS8027m_

typedef struct {
  real_T cg[3];
  real_T location[3];
  real_T accNatFreq;
  real_T accDamping;
  real_T accScaleCross[9];
  real_T accBias[3];
  real_T accLimits[6];
  real_T gyroNatFreq;
  real_T gyroDamping;
  real_T gyroScaleCross[9];
  real_T gyroBias[3];
  real_T gyroGBias[3];
  real_T gyroLimits[6];
  real_T noiseSeeds[6];
  real_T noiseWeights[6];
  real_T noisePower[6];
} struct_eF5OUT33sX0T9pzS8027m;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_FIfaVnupBjYAxo1EdNiDlF_
#define DEFINED_TYPEDEF_FOR_struct_FIfaVnupBjYAxo1EdNiDlF_

typedef struct {
  real_T noisePower;
  real_T noiseSeeds;
} struct_FIfaVnupBjYAxo1EdNiDlF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_eFnp8sKFNJLN84XLbLzaFF_
#define DEFINED_TYPEDEF_FOR_struct_eFnp8sKFNJLN84XLbLzaFF_

typedef struct {
  real_T posVISNoVisionAvail[4];
  real_T usePosVISFlag;
  real_T batteryStatus[2];
} struct_eFnp8sKFNJLN84XLbLzaFF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_8SSZ93PxvPkADZcA4gG8MD_
#define DEFINED_TYPEDEF_FOR_struct_8SSZ93PxvPkADZcA4gG8MD_

typedef struct {
  real_T IMUAccelGain[3];
  real_T IMUGyroGain[3];
  struct_eF5OUT33sX0T9pzS8027m IMU;
  struct_FIfaVnupBjYAxo1EdNiDlF Sonar;
  real_T NO_VIS_X;
  real_T NO_VIS_YAW;
  struct_eFnp8sKFNJLN84XLbLzaFF dummy;
  real_T sensorDelay;
  real_T airDensity;
  real_T altToPrsGain;
  real_T altToPrsBias;
  real_T inverseIMUGain[6];
  real_T altSensorMin;
  real_T velocityToOpticalFlowGain;
} struct_8SSZ93PxvPkADZcA4gG8MD;

#endif

#ifndef struct_tag_5e8GnIx8R8RPYwO85WQu3D
#define struct_tag_5e8GnIx8R8RPYwO85WQu3D

struct tag_5e8GnIx8R8RPYwO85WQu3D
{
  int32_T isInitialized;
};

#endif                                 /* struct_tag_5e8GnIx8R8RPYwO85WQu3D */

#ifndef typedef_parrot_ImageProcess_flightControlSystem_T
#define typedef_parrot_ImageProcess_flightControlSystem_T

typedef struct tag_5e8GnIx8R8RPYwO85WQu3D
  parrot_ImageProcess_flightControlSystem_T;

#endif                   /* typedef_parrot_ImageProcess_flightControlSystem_T */

/* Parameters for system: '<S4>/Geofencing error' */
typedef struct P_Geofencingerror_flightControlSystem_T_
  P_Geofencingerror_flightControlSystem_T;

/* Parameters for system: '<S341>/MeasurementUpdate' */
typedef struct P_MeasurementUpdate_flightControlSystem_T_
  P_MeasurementUpdate_flightControlSystem_T;

/* Parameters for system: '<S348>/Enabled Subsystem' */
typedef struct P_EnabledSubsystem_flightControlSystem_T_
  P_EnabledSubsystem_flightControlSystem_T;

/* Parameters for system: '<Root>/Control System' */
typedef struct P_ControlSystem_flightControlSystem_T_
  P_ControlSystem_flightControlSystem_T;

/* Parameters (default storage) */
typedef struct P_flightControlSystem_T_ P_flightControlSystem_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_flightControlSystem_T RT_MODEL_flightControlSystem_T;

#endif                                 /* flightControlSystem_types_h_ */
