/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystemIndependent_types.h
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

#ifndef flightControlSystemIndependent_types_h_
#define flightControlSystemIndependent_types_h_
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

#ifndef struct_tag_5e8GnIx8R8RPYwO85WQu3D
#define struct_tag_5e8GnIx8R8RPYwO85WQu3D

struct tag_5e8GnIx8R8RPYwO85WQu3D
{
  int32_T isInitialized;
};

#endif                                 /* struct_tag_5e8GnIx8R8RPYwO85WQu3D */

#ifndef typedef_parrot_ImageProcess_flightControlSystemIndependent_T
#define typedef_parrot_ImageProcess_flightControlSystemIndependent_T

typedef struct tag_5e8GnIx8R8RPYwO85WQu3D
  parrot_ImageProcess_flightControlSystemIndependent_T;

#endif        /* typedef_parrot_ImageProcess_flightControlSystemIndependent_T */

/* Forward declaration for rtModel */
typedef struct tag_RTM_flightControlSystemIndependent_T
  RT_MODEL_flightControlSystemIndependent_T;

#endif                             /* flightControlSystemIndependent_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
