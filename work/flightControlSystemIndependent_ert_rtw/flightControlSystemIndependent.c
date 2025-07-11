/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystemIndependent.c
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

#include "flightControlSystemIndependent.h"
#include "rtwtypes.h"
#include "flightControlSystemIndependent_types.h"
#include "flightControlSystemIndependent_private.h"
#include <math.h>
#include <string.h>
#include "zero_crossing_types.h"
#include "rt_nonfinite.h"
#include "flightControlSystemIndependent_dt.h"

/* Named constants for MATLAB Function: '<S371>/SqrtUsedFcn' */
#define flightControlSystemIndependent_CALL_EVENT (-1)

/* Named constants for Chart: '<S6>/Chart' */
#define flightControlSystemIndependent_IN_Forloop (1U)
#define flightControlSystemIndependent_IN_Move (1U)
#define flightControlSystemIndependent_IN_Move2 (2U)
#define flightControlSystemIndependent_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define flightControlSystemIndependent_IN_Start (3U)
#define flightControlSystemIndependent_IN_Stop (2U)
#define flightControlSystemIndependent_IN_Takeoff (3U)
#define flightControlSystemIndependent_IN_intial (4U)
#define flightControlSystemIndependent_IN_land (5U)
#define flightControlSystemIndependent_IN_land2 (6U)

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
real32_T motors_outport[4];            /* '<S13>/MotorDirections' */
uint8_T flag_outport;                  /* '<S5>/Merge' */

/* Block signals (default storage) */
B_flightControlSystemIndependent_T flightControlSystemIndependent_B;

/* Block states (default storage) */
DW_flightControlSystemIndependent_T flightControlSystemIndependent_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_flightControlSystemIndependent_T flightControlSystemIndependent_PrevZCX;

/* External outputs (root outports fed by signals with default storage) */
ExtY_flightControlSystemIndependent_T flightControlSystemIndependent_Y;

/* Real-time model */
static RT_MODEL_flightControlSystemIndependent_T
  flightControlSystemIndependent_M_;
RT_MODEL_flightControlSystemIndependent_T *const
  flightControlSystemIndependent_M = &flightControlSystemIndependent_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void flightControlSystemIndependent_SetEventsForThisBaseStep(boolean_T
  *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(flightControlSystemIndependent_M, 1));
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (flightControlSystemIndependent_M->Timing.TaskCounters.TID[1])++;
  if ((flightControlSystemIndependent_M->Timing.TaskCounters.TID[1]) > 39) {/* Sample time: [0.2s, 0.0s] */
    flightControlSystemIndependent_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for action system:
 *    '<S5>/No optical flow '
 *    '<S5>/Ultrasound improper'
 *    '<S5>/Normal condition'
 */
void flightControlSystemIndependent_Noopticalflow(uint8_T *rty_Out1)
{
  /* SignalConversion generated from: '<S245>/Out1' incorporates:
   *  Constant: '<S245>/Constant'
   */
  *rty_Out1 = 0U;
}

/*
 * System initialize for atomic system:
 *    '<S371>/SqrtUsedFcn'
 *    '<S425>/SqrtUsedFcn'
 */
void flightControlSystemIndependent_SqrtUsedFcn_Init
  (DW_SqrtUsedFcn_flightControlSystemIndependent_T *localDW)
{
  localDW->sfEvent = flightControlSystemIndependent_CALL_EVENT;
}

/*
 * Output and update for atomic system:
 *    '<S371>/SqrtUsedFcn'
 *    '<S425>/SqrtUsedFcn'
 */
void flightControlSystemIndependent_SqrtUsedFcn(const real32_T rtu_u[4],
  boolean_T rtu_isSqrtUsed, real32_T rty_P[4],
  DW_SqrtUsedFcn_flightControlSystemIndependent_T *localDW)
{
  int32_T i;
  real32_T rtu_u_0[4];
  real32_T rtu_u_tmp;
  localDW->sfEvent = flightControlSystemIndependent_CALL_EVENT;
  for (i = 0; i < 2; i++) {
    rtu_u_tmp = rtu_u[i + 2];
    rtu_u_0[i] = rtu_u_tmp * rtu_u[2] + rtu_u[i] * rtu_u[0];
    rtu_u_0[i + 2] = rtu_u_tmp * rtu_u[3] + rtu_u[i] * rtu_u[1];
  }

  if (rtu_isSqrtUsed) {
    rty_P[0] = rtu_u_0[0];
    rty_P[1] = rtu_u_0[1];
    rty_P[2] = rtu_u_0[2];
    rty_P[3] = rtu_u_0[3];
  } else {
    rty_P[0] = rtu_u[0];
    rty_P[1] = rtu_u[1];
    rty_P[2] = rtu_u[2];
    rty_P[3] = rtu_u[3];
  }
}

/*
 * Disable for enable system:
 *    '<S342>/MeasurementUpdate'
 *    '<S396>/MeasurementUpdate'
 */
void flightControlSystemIndependent_MeasurementUpdate_Disable(real32_T
  rty_Lykyhatkk1[2], DW_MeasurementUpdate_flightControlSystemIndependent_T
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S342>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S373>/Enable'
   */
  /* Disable for Outport: '<S373>/L*(y[k]-yhat[k|k-1])' */
  rty_Lykyhatkk1[0] = 0.0F;
  rty_Lykyhatkk1[1] = 0.0F;

  /* End of Outputs for SubSystem: '<S342>/MeasurementUpdate' */
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S342>/MeasurementUpdate'
 *    '<S396>/MeasurementUpdate'
 */
void flightControlSystemIndependent_MeasurementUpdate(boolean_T rtu_Enable,
  const real32_T rtu_Lk[2], real32_T rtu_yk, const real32_T rtu_Ck[2], const
  real32_T rtu_xhatkk1[2], real32_T rtu_Dk, real32_T rtu_uk, real32_T
  rty_Lykyhatkk1[2], DW_MeasurementUpdate_flightControlSystemIndependent_T
  *localDW)
{
  real32_T rtb_Sum;

  /* Outputs for Enabled SubSystem: '<S342>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S373>/Enable'
   */
  if (rtu_Enable) {
    localDW->MeasurementUpdate_MODE = true;

    /* Sum: '<S373>/Sum' incorporates:
     *  Product: '<S373>/C[k]*xhat[k|k-1]'
     *  Product: '<S373>/D[k]*u[k]'
     *  Sum: '<S373>/Add1'
     */
    rtb_Sum = rtu_yk - ((rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[1] * rtu_xhatkk1[1])
                        + rtu_Dk * rtu_uk);

    /* Product: '<S373>/Product3' */
    rty_Lykyhatkk1[0] = rtu_Lk[0] * rtb_Sum;
    rty_Lykyhatkk1[1] = rtu_Lk[1] * rtb_Sum;
    srUpdateBC(localDW->MeasurementUpdate_SubsysRanBC);
  } else if (localDW->MeasurementUpdate_MODE) {
    flightControlSystemIndependent_MeasurementUpdate_Disable(rty_Lykyhatkk1,
      localDW);
  }

  /* End of Outputs for SubSystem: '<S342>/MeasurementUpdate' */
}

/*
 * Disable for enable system:
 *    '<S349>/Enabled Subsystem'
 *    '<S403>/Enabled Subsystem'
 */
void flightControlSystemIndependent_EnabledSubsystem_Disable(real32_T
  rty_deltax[2], DW_EnabledSubsystem_flightControlSystemIndependent_T *localDW)
{
  /* Outputs for Enabled SubSystem: '<S349>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S375>/Enable'
   */
  /* Disable for Outport: '<S375>/deltax' */
  rty_deltax[0] = 0.0F;
  rty_deltax[1] = 0.0F;

  /* End of Outputs for SubSystem: '<S349>/Enabled Subsystem' */
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S349>/Enabled Subsystem'
 *    '<S403>/Enabled Subsystem'
 */
void flightControlSystemIndependent_EnabledSubsystem(boolean_T rtu_Enable, const
  real32_T rtu_Mk[2], const real32_T rtu_Ck[2], real32_T rtu_yk, const real32_T
  rtu_xhatkk1[2], real32_T rty_deltax[2],
  DW_EnabledSubsystem_flightControlSystemIndependent_T *localDW)
{
  real32_T rtb_Add1;

  /* Outputs for Enabled SubSystem: '<S349>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S375>/Enable'
   */
  if (rtu_Enable) {
    localDW->EnabledSubsystem_MODE = true;

    /* Sum: '<S375>/Add1' incorporates:
     *  Product: '<S375>/Product'
     */
    rtb_Add1 = rtu_yk - (rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[1] * rtu_xhatkk1[1]);

    /* Product: '<S375>/Product2' */
    rty_deltax[0] = rtu_Mk[0] * rtb_Add1;
    rty_deltax[1] = rtu_Mk[1] * rtb_Add1;
    srUpdateBC(localDW->EnabledSubsystem_SubsysRanBC);
  } else if (localDW->EnabledSubsystem_MODE) {
    flightControlSystemIndependent_EnabledSubsystem_Disable(rty_deltax, localDW);
  }

  /* End of Outputs for SubSystem: '<S349>/Enabled Subsystem' */
}

real32_T rt_powf_snf(real32_T u0, real32_T u1)
{
  real32_T tmp;
  real32_T tmp_0;
  real32_T y;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else {
    tmp = (real32_T)fabs(u0);
    tmp_0 = (real32_T)fabs(u1);
    if (rtIsInfF(u1)) {
      if (tmp == 1.0F) {
        y = 1.0F;
      } else if (tmp > 1.0F) {
        if (u1 > 0.0F) {
          y = (rtInfF);
        } else {
          y = 0.0F;
        }
      } else if (u1 > 0.0F) {
        y = 0.0F;
      } else {
        y = (rtInfF);
      }
    } else if (tmp_0 == 0.0F) {
      y = 1.0F;
    } else if (tmp_0 == 1.0F) {
      if (u1 > 0.0F) {
        y = u0;
      } else {
        y = 1.0F / u0;
      }
    } else if (u1 == 2.0F) {
      y = u0 * u0;
    } else if ((u1 == 0.5F) && (u0 >= 0.0F)) {
      y = (real32_T)sqrt(u0);
    } else if ((u0 < 0.0F) && (u1 > (real32_T)floor(u1))) {
      y = (rtNaNF);
    } else {
      y = (real32_T)pow(u0, u1);
    }
  }

  return y;
}

/* System initialize for atomic system: '<Root>/Control System' */
void flightControlSystemIndependent_ControlSystem_Init(uint8_T *rty_Flag,
  DW_ControlSystem_flightControlSystemIndependent_T *localDW)
{
  /* InitializeConditions for DiscreteIntegrator: '<S438>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_PrevResetState = 2;

  /* InitializeConditions for Delay: '<S256>/MemoryX' */
  localDW->icLoad = true;

  /* InitializeConditions for Delay: '<S322>/MemoryX' */
  localDW->icLoad_p = true;

  /* InitializeConditions for Delay: '<S376>/MemoryX' */
  localDW->icLoad_k = true;

  /* InitializeConditions for Delay: '<S442>/MemoryX' */
  localDW->icLoad_o = true;

  /* InitializeConditions for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_PrevResetState = 2;

  /* SystemInitialize for Merge: '<S5>/Merge' */
  *rty_Flag = 0U;

  /* SystemInitialize for MATLAB Function: '<S371>/SqrtUsedFcn' */
  flightControlSystemIndependent_SqrtUsedFcn_Init(&localDW->sf_SqrtUsedFcn_h);

  /* SystemInitialize for MATLAB Function: '<S425>/SqrtUsedFcn' */
  flightControlSystemIndependent_SqrtUsedFcn_Init(&localDW->sf_SqrtUsedFcn_e);
}

/* Output and update for atomic system: '<Root>/Control System' */
void flightControlSystemIndependent_ControlSystem(const CommandBus
  *rtu_ReferenceValueServerCmds, const SensorsBus *rtu_Sensors, real_T
  rtu_VisionbasedData, real32_T rty_motorCmds[4], uint8_T *rty_Flag,
  B_ControlSystem_flightControlSystemIndependent_T *localB,
  DW_ControlSystem_flightControlSystemIndependent_T *localDW,
  ZCE_ControlSystem_flightControlSystemIndependent_T *localZCE)
{
  real32_T numAccum;
  real32_T rtb_DataTypeConversion_e_idx_0;
  real32_T rtb_DataTypeConversion_e_idx_1;
  real32_T rtb_DataTypeConversion_e_tmp;
  real32_T rtb_sincos_o1_idx_0;
  real32_T rtb_sincos_o1_idx_0_tmp;
  int8_T rtb_Switch1_0;
  int8_T rtb_Switch2_0;
  boolean_T rtb_Compare_fc;
  boolean_T rtb_Compare_ls;
  boolean_T rtb_LogicalOperator2_m;

  /* DiscreteIntegrator: '<S438>/SimplyIntegrateVelocity' */
  if (localDW->SimplyIntegrateVelocity_PrevResetState <= 0) {
    localDW->SimplyIntegrateVelocity_DSTATE[0] = 0.0F;
    localDW->SimplyIntegrateVelocity_DSTATE[1] = 0.0F;
  }

  /* DiscreteIntegrator: '<S438>/SimplyIntegrateVelocity' */
  localB->SimplyIntegrateVelocity[0] = localDW->SimplyIntegrateVelocity_DSTATE[0];
  localB->SimplyIntegrateVelocity[1] = localDW->SimplyIntegrateVelocity_DSTATE[1];

  /* RelationalOperator: '<S259>/Compare' incorporates:
   *  Constant: '<S259>/Constant'
   *  Delay: '<S252>/Delay2'
   */
  localB->Compare = (localDW->Delay2_DSTATE > 0.0);

  /* Delay: '<S256>/MemoryX' incorporates:
   *  Constant: '<S256>/X0'
   *  DataTypeConversion: '<S256>/DataTypeConversionReset'
   *  Reshape: '<S256>/ReshapeX0'
   */
  localDW->icLoad = (localB->Compare || localDW->icLoad);
  if (localDW->icLoad) {
    localDW->MemoryX_DSTATE[0] = -0.046;
    localDW->MemoryX_DSTATE[1] = 0.0;
  }

  /* Gain: '<S252>/invertzaxisGain' */
  localB->invertzaxisGain = -(real_T)
    rtu_Sensors->HALSensors.HAL_ultrasound_SI.altitude;

  /* Saturate: '<S257>/SaturationSonar' */
  if (localB->invertzaxisGain >= -0.44) {
    localB->u_h = -0.44;
  } else {
    localB->u_h = localB->invertzaxisGain;
  }

  /* End of Saturate: '<S257>/SaturationSonar' */

  /* Abs: '<S257>/Absestdiff' incorporates:
   *  Delay: '<S252>/Delay2'
   *  Sum: '<S257>/Add'
   */
  localB->u_h = fabs(localDW->Delay2_DSTATE - localB->u_h);

  /* DataTypeConversion: '<S254>/Data Type Conversion' */
  for (localB->i = 0; localB->i < 8; localB->i++) {
    localB->DataTypeConversion_m[localB->i] = rtu_Sensors->
      SensorCalibration[localB->i];
  }

  /* End of DataTypeConversion: '<S254>/Data Type Conversion' */

  /* Sum: '<S254>/Sum2' */
  localB->pressureFilter_IIR = rtu_Sensors->HALSensors.HAL_pressure_SI.pressure
    - localB->DataTypeConversion_m[6];

  /* DiscreteFilter: '<S257>/pressureFilter_IIR' incorporates:
   *  Gain: '<S252>/prsToAltGain'
   */
  localB->pressureFilter_IIR = ((0.0832137167F * localB->pressureFilter_IIR -
    -2.93717074F * localDW->pressureFilter_IIR_states[0]) - 2.87629962F *
    localDW->pressureFilter_IIR_states[1]) - -0.939098954F *
    localDW->pressureFilter_IIR_states[2];
  numAccum = ((3.75683794E-6F * localB->pressureFilter_IIR + 1.12705138E-5F *
               localDW->pressureFilter_IIR_states[0]) + 1.12705138E-5F *
              localDW->pressureFilter_IIR_states[1]) + 3.75683794E-6F *
    localDW->pressureFilter_IIR_states[2];

  /* DiscreteFilter: '<S257>/sonarFilter_IIR' */
  localB->denAccum = ((localB->invertzaxisGain - -2.9371707284498907 *
                       localDW->sonarFilter_IIR_states[0]) - 2.8762997234793319 *
                      localDW->sonarFilter_IIR_states[1]) - -0.939098940325283 *
    localDW->sonarFilter_IIR_states[2];

  /* Abs: '<S257>/Absestdiff1' incorporates:
   *  Delay: '<S252>/Delay2'
   *  DiscreteFilter: '<S257>/pressureFilter_IIR'
   *  Sum: '<S257>/Add1'
   */
  localB->u_h_c = fabs(numAccum - localDW->Delay2_DSTATE);

  /* Sum: '<S257>/Add2' incorporates:
   *  Delay: '<S252>/Delay2'
   *  DiscreteFilter: '<S257>/sonarFilter_IIR'
   */
  localDW->Delay2_DSTATE = (((3.7568380197512489E-6 * localB->denAccum +
    1.1270514059253748E-5 * localDW->sonarFilter_IIR_states[0]) +
    1.1270514059253748E-5 * localDW->sonarFilter_IIR_states[1]) +
    3.7568380197512489E-6 * localDW->sonarFilter_IIR_states[2]) -
    localDW->Delay2_DSTATE;

  /* Abs: '<S257>/Absestdiff2' incorporates:
   *  Delay: '<S252>/Delay2'
   */
  localDW->Delay2_DSTATE = fabs(localDW->Delay2_DSTATE);

  /* Logic: '<S257>/nicemeasurementor newupdateneeded' incorporates:
   *  Constant: '<S311>/Constant'
   *  Constant: '<S312>/Constant'
   *  Constant: '<S313>/Constant'
   *  Constant: '<S314>/Constant'
   *  Delay: '<S252>/Delay2'
   *  Logic: '<S257>/NOT'
   *  Logic: '<S257>/findingoutliers'
   *  Logic: '<S257>/newupdateneeded'
   *  RelationalOperator: '<S311>/Compare'
   *  RelationalOperator: '<S312>/Compare'
   *  RelationalOperator: '<S313>/Compare'
   *  RelationalOperator: '<S314>/Compare'
   */
  localB->nicemeasurementornewupdateneeded = ((localB->u_h <= 0.1) &&
    (localB->invertzaxisGain < -0.44) && ((!(localB->u_h_c >= 0.8)) ||
    (!(localDW->Delay2_DSTATE >= 0.4))));

  /* Outputs for Enabled SubSystem: '<S284>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S310>/Enable'
   */
  /* DataTypeConversion: '<S256>/DataTypeConversionEnable' */
  if (localB->nicemeasurementornewupdateneeded) {
    localDW->EnabledSubsystem_MODE_l = true;

    /* Sum: '<S310>/Add1' incorporates:
     *  Constant: '<S256>/C'
     *  Delay: '<S256>/MemoryX'
     *  Product: '<S310>/Product'
     *  Reshape: '<S256>/Reshapey'
     */
    localB->u_h = localB->invertzaxisGain - (0.0 * localDW->MemoryX_DSTATE[1] +
      localDW->MemoryX_DSTATE[0]);

    /* Product: '<S310>/Product2' incorporates:
     *  Constant: '<S260>/KalmanGainM'
     *  DataTypeConversion: '<S301>/Conversion'
     */
    localB->Product2[0] = 0.026241420641871648 * localB->u_h;
    localB->Product2[1] = 0.069776736071491721 * localB->u_h;
    srUpdateBC(localDW->EnabledSubsystem_SubsysRanBC_c);
  } else if (localDW->EnabledSubsystem_MODE_l) {
    /* Disable for Product: '<S310>/Product2' incorporates:
     *  Outport: '<S310>/deltax'
     */
    localB->Product2[0] = 0.0;
    localB->Product2[1] = 0.0;
    localDW->EnabledSubsystem_MODE_l = false;
  }

  /* End of Outputs for SubSystem: '<S284>/Enabled Subsystem' */

  /* Sum: '<S284>/Add' incorporates:
   *  Delay: '<S256>/MemoryX'
   */
  localB->u_h_c = localB->Product2[0] + localDW->MemoryX_DSTATE[0];
  localB->rtb_Add_a_idx_1 = localB->Product2[1] + localDW->MemoryX_DSTATE[1];

  /* DataTypeConversion: '<S252>/Data Type Conversion' incorporates:
   *  Reshape: '<S256>/Reshapexhat'
   */
  localB->DataTypeConversion = (real32_T)localB->u_h_c;

  /* Delay: '<S322>/MemoryX' incorporates:
   *  Constant: '<S322>/X0'
   *  Reshape: '<S322>/ReshapeX0'
   */
  if (localDW->icLoad_p) {
    localDW->MemoryX_DSTATE_g[0] = 0.0F;
    localDW->MemoryX_DSTATE_g[1] = 0.0F;
  }

  /* Bias: '<S254>/Assuming that the  preflight calibration was done at level orientation' */
  for (localB->i = 0; localB->i < 6; localB->i++) {
    localB->Sum1_p[localB->i] = localB->DataTypeConversion_m[localB->i] +
      flightControlSystemIndependent_ConstP.Assumingthatthepreflightcalibrationwasdoneatlevelorientation_Bias
      [localB->i];
  }

  /* End of Bias: '<S254>/Assuming that the  preflight calibration was done at level orientation' */

  /* Sum: '<S254>/Sum1' */
  localB->Sum1_p_k[0] = rtu_Sensors->HALSensors.HAL_acc_SI.x - localB->Sum1_p[0];
  localB->Sum1_p_k[1] = rtu_Sensors->HALSensors.HAL_acc_SI.y - localB->Sum1_p[1];
  localB->Sum1_p_k[2] = rtu_Sensors->HALSensors.HAL_acc_SI.z - localB->Sum1_p[2];
  localB->Sum1_p_k[3] = rtu_Sensors->HALSensors.HAL_gyro_SI.x - localB->Sum1_p[3];
  localB->Sum1_p_k[4] = rtu_Sensors->HALSensors.HAL_gyro_SI.y - localB->Sum1_p[4];
  localB->Sum1_p_k[5] = rtu_Sensors->HALSensors.HAL_gyro_SI.z - localB->Sum1_p[5];
  for (localB->j = 0; localB->j < 6; localB->j++) {
    /* Gain: '<S254>/inverseIMU_gain' */
    localB->Sum1_p_k[localB->j] *=
      flightControlSystemIndependent_ConstP.inverseIMU_gain_Gain[localB->j];
  }

  /* DiscreteFir: '<S254>/FIR_IMUaccel' */
  localB->Abs = localB->Sum1_p_k[0] * 0.0264077242F;
  localB->i = 1;
  localB->j = localDW->FIR_IMUaccel_circBuf;
  while (localB->j < 5) {
    localB->Abs += localDW->FIR_IMUaccel_states[localB->j] *
      flightControlSystemIndependent_ConstP.FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->j = 0;
  while (localB->j < localDW->FIR_IMUaccel_circBuf) {
    localB->Abs += localDW->FIR_IMUaccel_states[localB->j] *
      flightControlSystemIndependent_ConstP.FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->FIR_IMUaccel[0] = localB->Abs;

  /* Math: '<S321>/Math Function' incorporates:
   *  DiscreteFir: '<S254>/FIR_IMUaccel'
   */
  localB->Switch_m[0] = rt_powf_snf(localB->Abs, 2.0F);

  /* DiscreteFir: '<S254>/FIR_IMUaccel' */
  localB->Abs = localB->Sum1_p_k[1] * 0.0264077242F;
  localB->i = 1;
  localB->j = localDW->FIR_IMUaccel_circBuf;
  while (localB->j < 5) {
    localB->Abs += localDW->FIR_IMUaccel_states[localB->j + 5] *
      flightControlSystemIndependent_ConstP.FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->j = 0;
  while (localB->j < localDW->FIR_IMUaccel_circBuf) {
    localB->Abs += localDW->FIR_IMUaccel_states[localB->j + 5] *
      flightControlSystemIndependent_ConstP.FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->FIR_IMUaccel[1] = localB->Abs;

  /* Math: '<S321>/Math Function' incorporates:
   *  DiscreteFir: '<S254>/FIR_IMUaccel'
   */
  localB->Switch_m[1] = rt_powf_snf(localB->Abs, 2.0F);

  /* DiscreteFir: '<S254>/FIR_IMUaccel' */
  localB->Abs = localB->Sum1_p_k[2] * 0.0264077242F;
  localB->i = 1;
  localB->j = localDW->FIR_IMUaccel_circBuf;
  while (localB->j < 5) {
    localB->Abs += localDW->FIR_IMUaccel_states[localB->j + 10] *
      flightControlSystemIndependent_ConstP.FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->j = 0;
  while (localB->j < localDW->FIR_IMUaccel_circBuf) {
    localB->Abs += localDW->FIR_IMUaccel_states[localB->j + 10] *
      flightControlSystemIndependent_ConstP.FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->FIR_IMUaccel[2] = localB->Abs;

  /* Gain: '<S318>/Gain2' */
  localB->pitchrollerror = 0.101936802F * localB->FIR_IMUaccel[0];

  /* Trigonometry: '<S318>/Trigonometric Function1' */
  if (localB->pitchrollerror > 1.0F) {
    localB->pitchrollerror = 1.0F;
  } else if (localB->pitchrollerror < -1.0F) {
    localB->pitchrollerror = -1.0F;
  }

  /* Trigonometry: '<S318>/Trigonometric Function1' */
  localB->TrigonometricFunction1 = (real32_T)asin(localB->pitchrollerror);

  /* Sqrt: '<S321>/Sqrt' incorporates:
   *  DiscreteFir: '<S254>/FIR_IMUaccel'
   *  Math: '<S321>/Math Function'
   *  Sum: '<S321>/Sum of Elements'
   */
  localB->pitchrollerror = (real32_T)sqrt((localB->Switch_m[0] +
    localB->Switch_m[1]) + rt_powf_snf(localB->Abs, 2.0F));

  /* Logic: '<S253>/Logical Operator' incorporates:
   *  Constant: '<S316>/Constant'
   *  Constant: '<S317>/Constant'
   *  RelationalOperator: '<S316>/Compare'
   *  RelationalOperator: '<S317>/Compare'
   */
  localB->LogicalOperator = (int16_T)((localB->pitchrollerror > 6.867F) &&
    (localB->pitchrollerror < 12.753F));

  /* DataTypeConversion: '<S366>/Conversion' incorporates:
   *  Constant: '<S323>/KalmanGainM'
   *  DataTypeConversion: '<S420>/Conversion'
   */
  localB->IntegralGain_e[0] = 0.00118693F;
  localB->IntegralGain_e[1] = -3.28681635E-5F;

  /* Outputs for Enabled SubSystem: '<S349>/Enabled Subsystem' */
  /* DataTypeConversion: '<S322>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S322>/C'
   *  DataTypeConversion: '<S366>/Conversion'
   *  Delay: '<S322>/MemoryX'
   *  Reshape: '<S322>/Reshapey'
   */
  flightControlSystemIndependent_EnabledSubsystem((localB->LogicalOperator != 0),
    localB->IntegralGain_e, flightControlSystemIndependent_ConstP.pooled13,
    localB->TrigonometricFunction1, localDW->MemoryX_DSTATE_g,
    localB->Product2_g, &localDW->EnabledSubsystem_d);

  /* End of Outputs for SubSystem: '<S349>/Enabled Subsystem' */

  /* Delay: '<S376>/MemoryX' incorporates:
   *  Constant: '<S376>/X0'
   *  Reshape: '<S376>/ReshapeX0'
   */
  if (localDW->icLoad_k) {
    localDW->MemoryX_DSTATE_m[0] = 0.0F;
    localDW->MemoryX_DSTATE_m[1] = 0.0F;
  }

  /* Trigonometry: '<S319>/Trigonometric Function' incorporates:
   *  DiscreteFir: '<S254>/FIR_IMUaccel'
   *  Product: '<S319>/Divide'
   */
  localB->TrigonometricFunction = (real32_T)atan(localB->FIR_IMUaccel[1] /
    localB->Abs);

  /* Outputs for Enabled SubSystem: '<S403>/Enabled Subsystem' */
  /* DataTypeConversion: '<S376>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S376>/C'
   *  Delay: '<S376>/MemoryX'
   *  Reshape: '<S376>/Reshapey'
   */
  flightControlSystemIndependent_EnabledSubsystem((localB->LogicalOperator != 0),
    localB->IntegralGain_e, flightControlSystemIndependent_ConstP.pooled13,
    localB->TrigonometricFunction, localDW->MemoryX_DSTATE_m, localB->Product2_a,
    &localDW->EnabledSubsystem_n);

  /* End of Outputs for SubSystem: '<S403>/Enabled Subsystem' */

  /* DataTypeConversion: '<S253>/Data Type Conversion3' incorporates:
   *  Delay: '<S322>/MemoryX'
   *  Delay: '<S376>/MemoryX'
   *  DiscreteIntegrator: '<S320>/Discrete-Time Integrator'
   *  Sum: '<S349>/Add'
   *  Sum: '<S403>/Add'
   */
  localB->DataTypeConversion3[0] = localDW->DiscreteTimeIntegrator_DSTATE;
  localB->DataTypeConversion3[1] = localB->Product2_g[0] +
    localDW->MemoryX_DSTATE_g[0];
  localB->DataTypeConversion3[2] = localB->Product2_a[0] +
    localDW->MemoryX_DSTATE_m[0];

  /* DiscreteTransferFcn: '<S254>/LPF Fcutoff = 40Hz1' */
  localB->LPFFcutoff40Hz1_tmp = (localB->Sum1_p_k[3] - -0.591549456F *
    localDW->LPFFcutoff40Hz1_states) / 2.5915494F;

  /* DiscreteTransferFcn: '<S254>/LPF Fcutoff = 40Hz1' */
  localB->p = localB->LPFFcutoff40Hz1_tmp + localDW->LPFFcutoff40Hz1_states;

  /* DiscreteTransferFcn: '<S254>/LPF Fcutoff = 40Hz' */
  localB->LPFFcutoff40Hz_tmp = (localB->Sum1_p_k[4] - -0.591549456F *
    localDW->LPFFcutoff40Hz_states) / 2.5915494F;

  /* DiscreteTransferFcn: '<S254>/LPF Fcutoff = 40Hz' */
  localB->q = localB->LPFFcutoff40Hz_tmp + localDW->LPFFcutoff40Hz_states;

  /* DiscreteFilter: '<S254>/IIR_IMUgyro_r' */
  localB->denAccum_b = localB->Sum1_p_k[5];
  for (localB->j = 0; localB->j < 5; localB->j++) {
    localB->denAccum_b -= flightControlSystemIndependent_ConstP.pooled17
      [localB->j + 1] * localDW->IIR_IMUgyro_r_states[localB->j];
  }

  localB->numAccum = 0.282124132F * localB->denAccum_b;
  for (localB->j = 0; localB->j < 5; localB->j++) {
    localB->numAccum += flightControlSystemIndependent_ConstP.pooled16[localB->j
      + 1] * localDW->IIR_IMUgyro_r_states[localB->j];
  }

  /* RelationalOperator: '<S432>/Compare' incorporates:
   *  Constant: '<S432>/Constant'
   *  UnitDelay: '<S433>/Output'
   */
  rtb_Compare_ls = (localDW->Output_DSTATE == 1U);

  /* Outputs for Triggered SubSystem: '<S430>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S434>/Trigger'
   */
  if (((localZCE->TriggeredSubsystem_Trig_ZCE == POS_ZCSIG) != (int32_T)
       rtb_Compare_ls) && (localZCE->TriggeredSubsystem_Trig_ZCE !=
       UNINITIALIZED_ZCSIG)) {
    /* SignalConversion generated from: '<S434>/In1' */
    localB->In1 = rtu_Sensors->HALSensors.HAL_gyro_SI.temperature;
    localDW->TriggeredSubsystem_SubsysRanBC = 4;
  }

  localZCE->TriggeredSubsystem_Trig_ZCE = rtb_Compare_ls;

  /* End of Outputs for SubSystem: '<S430>/Triggered Subsystem' */

  /* Sum: '<S430>/Subtract' */
  localB->pitchrollerror = rtu_Sensors->HALSensors.HAL_gyro_SI.temperature -
    localB->In1;

  /* Sum: '<S430>/Subtract1' incorporates:
   *  DiscreteFilter: '<S254>/IIR_IMUgyro_r'
   *  Gain: '<S430>/Gain'
   */
  localB->r = localB->numAccum - 0.00228F * localB->pitchrollerror;

  /* Sum: '<S253>/Subtract' incorporates:
   *  Delay: '<S322>/MemoryX'
   *  Delay: '<S376>/MemoryX'
   *  Sum: '<S349>/Add'
   *  Sum: '<S403>/Add'
   */
  localB->Subtract[0] = localB->p - (localB->Product2_a[1] +
    localDW->MemoryX_DSTATE_m[1]);
  localB->Subtract[1] = localB->q - (localB->Product2_g[1] +
    localDW->MemoryX_DSTATE_g[1]);
  localB->Subtract[2] = localB->r;

  /* Delay: '<S442>/MemoryX' incorporates:
   *  Constant: '<S442>/X0'
   *  Reshape: '<S442>/ReshapeX0'
   */
  if (localDW->icLoad_o) {
    localDW->MemoryX_DSTATE_l[0] = 0.0F;
    localDW->MemoryX_DSTATE_l[1] = 0.0F;
    localDW->MemoryX_DSTATE_l[2] = 0.0F;
    localDW->MemoryX_DSTATE_l[3] = 0.0F;
  }

  /* RelationalOperator: '<S514>/Compare' incorporates:
   *  Constant: '<S514>/Constant'
   *  UnitDelay: '<S515>/Output'
   */
  rtb_Compare_ls = (localDW->Output_DSTATE_n < 800U);

  /* Product: '<S443>/ ' incorporates:
   *  Gain: '<S443>/Gain'
   */
  localB->DiscreteTimeIntegrator_a = rtu_Sensors->
    VisionSensors.opticalFlow_data[0] * -localB->DataTypeConversion;

  /* Switch: '<S443>/Switch' incorporates:
   *  Gain: '<S443>/opticalFlowErrorCorrect'
   */
  if (rtb_Compare_ls) {
    localB->pitchrollerror = rtu_Sensors->VisionSensors.opticalFlow_data[0];
  } else {
    localB->pitchrollerror = 1.15F * localB->DiscreteTimeIntegrator_a;
  }

  localB->Switch_m[0] = localB->pitchrollerror;

  /* Product: '<S443>/ ' incorporates:
   *  Gain: '<S443>/Gain'
   */
  localB->DiscreteTimeIntegrator_a = rtu_Sensors->
    VisionSensors.opticalFlow_data[1] * -localB->DataTypeConversion;

  /* Switch: '<S443>/Switch' incorporates:
   *  Gain: '<S443>/opticalFlowErrorCorrect'
   */
  if (rtb_Compare_ls) {
    localB->Saturation_g = rtu_Sensors->VisionSensors.opticalFlow_data[1];
  } else {
    localB->Saturation_g = 1.15F * localB->DiscreteTimeIntegrator_a;
  }

  localB->Switch_m[1] = localB->Saturation_g;

  /* Product: '<S443>/ ' incorporates:
   *  Gain: '<S443>/Gain'
   */
  localB->DiscreteTimeIntegrator_a = rtu_Sensors->
    VisionSensors.opticalFlow_data[2] * -localB->DataTypeConversion;

  /* Switch: '<S443>/Switch' incorporates:
   *  Gain: '<S443>/opticalFlowErrorCorrect'
   */
  if (rtb_Compare_ls) {
    localB->Switch_m[2] = rtu_Sensors->VisionSensors.opticalFlow_data[2];
  } else {
    localB->Switch_m[2] = 1.15F * localB->DiscreteTimeIntegrator_a;
  }

  /* Abs: '<S440>/Abs' */
  localB->DiscreteTimeIntegrator_a = (real32_T)fabs(localB->DataTypeConversion);

  /* DataTypeConversion: '<S440>/Data Type Conversion' incorporates:
   *  Gain: '<S440>/Gain1'
   *  Product: '<S440>/prod'
   */
  localB->Add_k[0] = -(localB->DiscreteTimeIntegrator_a * localB->Subtract[1]);
  localB->Add_k[1] = localB->DiscreteTimeIntegrator_a * localB->Subtract[0];

  /* SignalConversion generated from: '<S441>/IIRgyroz' */
  localB->IntegralGain_e[0] = localB->p;
  localB->IntegralGain_e[1] = localB->q;
  for (localB->i = 0; localB->i < 2; localB->i++) {
    /* Sum: '<S437>/angular velocity compensation' */
    localB->DiscreteTimeIntegrator_a = localB->Switch_m[localB->i];

    /* Sum: '<S437>/angular velocity compensation' */
    localB->angularvelocitycompensation[localB->i] =
      localB->DiscreteTimeIntegrator_a + localB->Add_k[localB->i];

    /* DiscreteFilter: '<S441>/IIRgyroz' */
    localB->memOffset = localB->i * 5;
    localB->numAccum = localB->IntegralGain_e[localB->i];
    for (localB->j = 0; localB->j < 5; localB->j++) {
      localB->numAccum -= flightControlSystemIndependent_ConstP.pooled17
        [localB->j + 1] * localDW->IIRgyroz_states[localB->memOffset + localB->j];
    }

    localB->IIRgyroz_tmp[localB->i] = localB->numAccum;
    localB->numAccum *= 0.282124132F;
    for (localB->j = 0; localB->j < 5; localB->j++) {
      localB->numAccum += flightControlSystemIndependent_ConstP.pooled16
        [localB->j + 1] * localDW->IIRgyroz_states[localB->memOffset + localB->j];
    }

    /* SampleTimeMath: '<S449>/TSamp' incorporates:
     *  DiscreteFilter: '<S441>/IIRgyroz'
     *
     * About '<S449>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     *   */
    localB->numAccum *= 200.0F;
    localB->Integrator_l[localB->i] = localB->numAccum;

    /* Sum: '<S449>/Diff' incorporates:
     *  UnitDelay: '<S449>/UD'
     *
     * Block description for '<S449>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S449>/UD':
     *
     *  Store in Global RAM
     */
    localDW->UD_DSTATE[localB->i] = localB->numAccum - localDW->UD_DSTATE
      [localB->i];

    /* Sum: '<S441>/Add' incorporates:
     *  Delay: '<S437>/Delay'
     */
    localB->Add_k[localB->i] = localB->DiscreteTimeIntegrator_a -
      localDW->Delay_DSTATE[localB->i];
  }

  /* Abs: '<S441>/Abs' incorporates:
   *  Abs: '<S441>/Abs4'
   */
  localB->DiscreteTimeIntegrator_a = (real32_T)fabs(localB->p);

  /* Abs: '<S441>/Abs1' incorporates:
   *  Abs: '<S441>/Abs5'
   */
  localB->numAccum = (real32_T)fabs(localB->q);

  /* Logic: '<S441>/Logical Operator3' incorporates:
   *  Abs: '<S441>/Abs'
   *  Abs: '<S441>/Abs1'
   *  Abs: '<S441>/Abs2'
   *  Abs: '<S441>/Abs3'
   *  Abs: '<S441>/Abs6'
   *  Abs: '<S441>/Abs7'
   *  Abs: '<S441>/Abs8'
   *  Abs: '<S441>/Abs9'
   *  Constant: '<S450>/Constant'
   *  Constant: '<S451>/Constant'
   *  Constant: '<S452>/Constant'
   *  Constant: '<S453>/Constant'
   *  Constant: '<S454>/Constant'
   *  Constant: '<S455>/Constant'
   *  Constant: '<S456>/Constant'
   *  Constant: '<S457>/Constant'
   *  Constant: '<S458>/Constant'
   *  Constant: '<S459>/Constant'
   *  Constant: '<S460>/Constant'
   *  Logic: '<S441>/Logical Operator'
   *  Logic: '<S441>/Logical Operator1'
   *  Logic: '<S441>/Logical Operator2'
   *  RelationalOperator: '<S450>/Compare'
   *  RelationalOperator: '<S451>/Compare'
   *  RelationalOperator: '<S452>/Compare'
   *  RelationalOperator: '<S453>/Compare'
   *  RelationalOperator: '<S454>/Compare'
   *  RelationalOperator: '<S455>/Compare'
   *  RelationalOperator: '<S456>/Compare'
   *  RelationalOperator: '<S457>/Compare'
   *  RelationalOperator: '<S458>/Compare'
   *  RelationalOperator: '<S459>/Compare'
   *  RelationalOperator: '<S460>/Compare'
   */
  localB->LogicalOperator3 = (((((real32_T)fabs(localB->DataTypeConversion3[1]) <=
    0.6F) && ((real32_T)fabs(localB->DataTypeConversion3[2]) <= 0.6F) &&
    (localB->DiscreteTimeIntegrator_a <= 7.0F) && (localB->numAccum <= 7.0F) &&
    ((real32_T)fabs(localDW->UD_DSTATE[0]) <= 80.0F) && ((real32_T)fabs
    (localDW->UD_DSTATE[1]) <= 80.0F)) || ((localB->DiscreteTimeIntegrator_a <=
    0.5F) && (localB->numAccum <= 0.5F))) && ((real32_T)fabs(localB->Add_k[0]) <=
    5.0F) && ((real32_T)fabs(localB->Add_k[1]) <= 5.0F) &&
    (localB->DataTypeConversion <= -0.4F));

  /* Outputs for Enabled SubSystem: '<S487>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S513>/Enable'
   */
  /* DataTypeConversion: '<S442>/DataTypeConversionEnable' */
  if (localB->LogicalOperator3) {
    localDW->EnabledSubsystem_MODE = true;

    /* Delay: '<S442>/MemoryX' incorporates:
     *  Constant: '<S442>/C'
     *  Product: '<S513>/Product'
     */
    localB->DiscreteTimeIntegrator_a = localDW->MemoryX_DSTATE_l[1];
    localB->numAccum = localDW->MemoryX_DSTATE_l[0];
    rtb_sincos_o1_idx_0 = localDW->MemoryX_DSTATE_l[2];
    localB->rtb_sincos_o1_idx_1 = localDW->MemoryX_DSTATE_l[3];

    /* Sum: '<S513>/Add1' incorporates:
     *  Constant: '<S442>/C'
     *  Delay: '<S442>/MemoryX'
     *  Product: '<S513>/Product'
     *  Reshape: '<S442>/Reshapey'
     */
    for (localB->j = 0; localB->j < 2; localB->j++) {
      localB->IntegralGain_e[localB->j] = localB->
        angularvelocitycompensation[localB->j] -
        (((flightControlSystemIndependent_ConstP.C_Value_i[localB->j + 2] *
           localB->DiscreteTimeIntegrator_a +
           flightControlSystemIndependent_ConstP.C_Value_i[localB->j] *
           localB->numAccum) +
          flightControlSystemIndependent_ConstP.C_Value_i[localB->j + 4] *
          rtb_sincos_o1_idx_0) +
         flightControlSystemIndependent_ConstP.C_Value_i[localB->j + 6] *
         localB->rtb_sincos_o1_idx_1);
    }

    /* End of Sum: '<S513>/Add1' */

    /* Product: '<S513>/Product2' incorporates:
     *  Constant: '<S461>/KalmanGainM'
     *  DataTypeConversion: '<S504>/Conversion'
     */
    localB->DiscreteTimeIntegrator_a = localB->IntegralGain_e[1];
    localB->numAccum = localB->IntegralGain_e[0];
    for (localB->j = 0; localB->j < 4; localB->j++) {
      /* Product: '<S513>/Product2' incorporates:
       *  Constant: '<S461>/KalmanGainM'
       *  DataTypeConversion: '<S504>/Conversion'
       */
      localB->Product2_k[localB->j] = (real32_T)
        flightControlSystemIndependent_ConstP.KalmanGainM_Value_i[localB->j + 4]
        * localB->DiscreteTimeIntegrator_a + (real32_T)
        flightControlSystemIndependent_ConstP.KalmanGainM_Value_i[localB->j] *
        localB->numAccum;
    }

    srUpdateBC(localDW->EnabledSubsystem_SubsysRanBC);
  } else if (localDW->EnabledSubsystem_MODE) {
    /* Disable for Product: '<S513>/Product2' incorporates:
     *  Outport: '<S513>/deltax'
     */
    localB->Product2_k[0] = 0.0F;
    localB->Product2_k[1] = 0.0F;
    localB->Product2_k[2] = 0.0F;
    localB->Product2_k[3] = 0.0F;
    localDW->EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S487>/Enabled Subsystem' */

  /* Reshape: '<S442>/Reshapexhat' incorporates:
   *  Delay: '<S442>/MemoryX'
   *  Sum: '<S487>/Add'
   */
  localB->Reshapexhat[0] = localB->Product2_k[0] + localDW->MemoryX_DSTATE_l[0];
  localB->Reshapexhat[1] = localB->Product2_k[1] + localDW->MemoryX_DSTATE_l[1];
  localB->Reshapexhat[2] = localB->Product2_k[2] + localDW->MemoryX_DSTATE_l[2];
  localB->Reshapexhat[3] = localB->Product2_k[3] + localDW->MemoryX_DSTATE_l[3];

  /* Trigonometry: '<S258>/sincos' incorporates:
   *  MATLAB Function: '<S11>/Position error transformation (Earth to Body frame)'
   *  Trigonometry: '<S518>/sincos'
   */
  rtb_sincos_o1_idx_0_tmp = (real32_T)sin(localB->DataTypeConversion3[0]);
  rtb_DataTypeConversion_e_tmp = (real32_T)cos(localB->DataTypeConversion3[0]);
  rtb_sincos_o1_idx_0 = (real32_T)sin(localB->DataTypeConversion3[1]);
  localB->rtb_sincos_o1_idx_1 = (real32_T)cos(localB->DataTypeConversion3[1]);
  localB->rtb_sincos_o1_idx_2 = (real32_T)sin(localB->DataTypeConversion3[2]);
  localB->rtb_IntegralGain_idx_0 = (real32_T)cos(localB->DataTypeConversion3[2]);

  /* Fcn: '<S258>/Fcn11' incorporates:
   *  Trigonometry: '<S258>/sincos'
   */
  localB->VectorConcatenate[0] = rtb_DataTypeConversion_e_tmp *
    localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S258>/Fcn21' incorporates:
   *  Fcn: '<S258>/Fcn22'
   *  Trigonometry: '<S258>/sincos'
   */
  localB->DiscreteTimeIntegrator_a = rtb_sincos_o1_idx_0 *
    localB->rtb_sincos_o1_idx_2;
  localB->VectorConcatenate[1] = localB->DiscreteTimeIntegrator_a *
    rtb_DataTypeConversion_e_tmp - rtb_sincos_o1_idx_0_tmp *
    localB->rtb_IntegralGain_idx_0;

  /* Fcn: '<S258>/Fcn31' incorporates:
   *  Fcn: '<S258>/Fcn32'
   *  Trigonometry: '<S258>/sincos'
   */
  localB->numAccum = rtb_sincos_o1_idx_0 * localB->rtb_IntegralGain_idx_0;
  localB->VectorConcatenate[2] = localB->numAccum * rtb_DataTypeConversion_e_tmp
    + rtb_sincos_o1_idx_0_tmp * localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S258>/Fcn12' incorporates:
   *  Trigonometry: '<S258>/sincos'
   */
  localB->VectorConcatenate[3] = rtb_sincos_o1_idx_0_tmp *
    localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S258>/Fcn22' incorporates:
   *  Trigonometry: '<S258>/sincos'
   */
  localB->VectorConcatenate[4] = localB->DiscreteTimeIntegrator_a *
    rtb_sincos_o1_idx_0_tmp + rtb_DataTypeConversion_e_tmp *
    localB->rtb_IntegralGain_idx_0;

  /* Fcn: '<S258>/Fcn32' incorporates:
   *  Trigonometry: '<S258>/sincos'
   */
  localB->VectorConcatenate[5] = localB->numAccum * rtb_sincos_o1_idx_0_tmp -
    rtb_DataTypeConversion_e_tmp * localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S258>/Fcn13' incorporates:
   *  Trigonometry: '<S258>/sincos'
   */
  localB->VectorConcatenate[6] = -rtb_sincos_o1_idx_0;

  /* Fcn: '<S258>/Fcn23' incorporates:
   *  Trigonometry: '<S258>/sincos'
   */
  localB->VectorConcatenate[7] = localB->rtb_sincos_o1_idx_1 *
    localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S258>/Fcn33' incorporates:
   *  Trigonometry: '<S258>/sincos'
   */
  localB->VectorConcatenate[8] = localB->rtb_sincos_o1_idx_1 *
    localB->rtb_IntegralGain_idx_0;

  /* SignalConversion generated from: '<S252>/Product1' incorporates:
   *  Delay: '<S7>/Delay1'
   */
  localB->u_h = localDW->Delay1_DSTATE[0];
  localB->unnamed_idx_1 = localDW->Delay1_DSTATE[1];

  /* Product: '<S252>/Product1' incorporates:
   *  Reshape: '<S256>/Reshapexhat'
   *  Reshape: '<S315>/Reshape (9) to [3x3] column-major'
   *  SignalConversion generated from: '<S252>/Product1'
   */
  for (localB->j = 0; localB->j < 3; localB->j++) {
    localB->rtb_VectorConcatenate_c[localB->j] = (localB->
      VectorConcatenate[localB->j + 3] * localB->unnamed_idx_1 +
      localB->VectorConcatenate[localB->j] * localB->u_h) +
      localB->VectorConcatenate[localB->j + 6] * localB->rtb_Add_a_idx_1;
  }

  /* End of Product: '<S252>/Product1' */

  /* DataTypeConversion: '<S252>/Data Type Conversion2' */
  localB->DataTypeConversion2 = (real32_T)localB->rtb_VectorConcatenate_c[2];

  /* SignalConversion generated from: '<S1>/To Workspace' */
  localB->TmpSignalConversionAtToWorkspaceInport1[0] =
    localB->SimplyIntegrateVelocity[0];
  localB->TmpSignalConversionAtToWorkspaceInport1[1] =
    localB->SimplyIntegrateVelocity[1];
  localB->TmpSignalConversionAtToWorkspaceInport1[2] =
    localB->DataTypeConversion;
  localB->TmpSignalConversionAtToWorkspaceInport1[3] =
    localB->DataTypeConversion3[0];
  localB->TmpSignalConversionAtToWorkspaceInport1[4] =
    localB->DataTypeConversion3[1];
  localB->TmpSignalConversionAtToWorkspaceInport1[5] =
    localB->DataTypeConversion3[2];
  localB->TmpSignalConversionAtToWorkspaceInport1[6] = localB->Reshapexhat[0];
  localB->TmpSignalConversionAtToWorkspaceInport1[7] = localB->Reshapexhat[1];
  localB->TmpSignalConversionAtToWorkspaceInport1[8] =
    localB->DataTypeConversion2;
  localB->TmpSignalConversionAtToWorkspaceInport1[9] = localB->Subtract[0];
  localB->TmpSignalConversionAtToWorkspaceInport1[10] = localB->Subtract[1];
  localB->TmpSignalConversionAtToWorkspaceInport1[11] = localB->Subtract[2];
  for (localB->j = 0; localB->j < 3; localB->j++) {
    /* Math: '<S252>/Math Function' incorporates:
     *  Reshape: '<S315>/Reshape (9) to [3x3] column-major'
     */
    localB->MathFunction[3 * localB->j] = localB->VectorConcatenate[localB->j];
    localB->MathFunction[3 * localB->j + 1] = localB->VectorConcatenate
      [localB->j + 3];
    localB->MathFunction[3 * localB->j + 2] = localB->VectorConcatenate
      [localB->j + 6];

    /* Trigonometry: '<S445>/sincos' */
    localB->DataTypeConversion_e[localB->j] = (real32_T)sin
      (localB->DataTypeConversion3[localB->j]);
    localB->sincos_o2[localB->j] = (real32_T)cos(localB->
      DataTypeConversion3[localB->j]);
  }

  /* Fcn: '<S445>/Fcn11' */
  localB->VectorConcatenate[0] = localB->sincos_o2[0] * localB->sincos_o2[1];

  /* Fcn: '<S445>/Fcn21' incorporates:
   *  Fcn: '<S445>/Fcn22'
   */
  localB->DiscreteTimeIntegrator_a = localB->DataTypeConversion_e[1] *
    localB->DataTypeConversion_e[2];
  localB->VectorConcatenate[1] = localB->DiscreteTimeIntegrator_a *
    localB->sincos_o2[0] - localB->DataTypeConversion_e[0] * localB->sincos_o2[2];

  /* Fcn: '<S445>/Fcn31' incorporates:
   *  Fcn: '<S445>/Fcn32'
   */
  localB->numAccum = localB->DataTypeConversion_e[1] * localB->sincos_o2[2];
  localB->VectorConcatenate[2] = localB->numAccum * localB->sincos_o2[0] +
    localB->DataTypeConversion_e[0] * localB->DataTypeConversion_e[2];

  /* Fcn: '<S445>/Fcn12' */
  localB->VectorConcatenate[3] = localB->DataTypeConversion_e[0] *
    localB->sincos_o2[1];

  /* Fcn: '<S445>/Fcn22' */
  localB->VectorConcatenate[4] = localB->DiscreteTimeIntegrator_a *
    localB->DataTypeConversion_e[0] + localB->sincos_o2[0] * localB->sincos_o2[2];

  /* Fcn: '<S445>/Fcn32' */
  localB->VectorConcatenate[5] = localB->numAccum * localB->
    DataTypeConversion_e[0] - localB->sincos_o2[0] *
    localB->DataTypeConversion_e[2];

  /* Fcn: '<S445>/Fcn13' */
  localB->VectorConcatenate[6] = -localB->DataTypeConversion_e[1];

  /* Fcn: '<S445>/Fcn23' */
  localB->VectorConcatenate[7] = localB->sincos_o2[1] *
    localB->DataTypeConversion_e[2];

  /* Fcn: '<S445>/Fcn33' */
  localB->VectorConcatenate[8] = localB->sincos_o2[1] * localB->sincos_o2[2];

  /* Reshape: '<S448>/Reshape (9) to [3x3] column-major' */
  for (localB->i = 0; localB->i < 9; localB->i++) {
    localB->Reshape9to3x3columnmajor[localB->i] = localB->
      VectorConcatenate[localB->i];
  }

  /* End of Reshape: '<S448>/Reshape (9) to [3x3] column-major' */

  /* Fcn: '<S518>/Fcn11' */
  localB->VectorConcatenate[0] = rtb_DataTypeConversion_e_tmp *
    localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S518>/Fcn21' incorporates:
   *  Fcn: '<S518>/Fcn22'
   */
  localB->DiscreteTimeIntegrator_a = rtb_sincos_o1_idx_0 *
    localB->rtb_sincos_o1_idx_2;
  localB->VectorConcatenate[1] = localB->DiscreteTimeIntegrator_a *
    rtb_DataTypeConversion_e_tmp - rtb_sincos_o1_idx_0_tmp *
    localB->rtb_IntegralGain_idx_0;

  /* Fcn: '<S518>/Fcn31' incorporates:
   *  Fcn: '<S518>/Fcn32'
   */
  localB->numAccum = rtb_sincos_o1_idx_0 * localB->rtb_IntegralGain_idx_0;
  localB->VectorConcatenate[2] = localB->numAccum * rtb_DataTypeConversion_e_tmp
    + rtb_sincos_o1_idx_0_tmp * localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S518>/Fcn12' */
  localB->VectorConcatenate[3] = rtb_sincos_o1_idx_0_tmp *
    localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S518>/Fcn22' */
  localB->VectorConcatenate[4] = localB->DiscreteTimeIntegrator_a *
    rtb_sincos_o1_idx_0_tmp + rtb_DataTypeConversion_e_tmp *
    localB->rtb_IntegralGain_idx_0;

  /* Fcn: '<S518>/Fcn32' */
  localB->VectorConcatenate[5] = localB->numAccum * rtb_sincos_o1_idx_0_tmp -
    rtb_DataTypeConversion_e_tmp * localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S518>/Fcn13' */
  localB->VectorConcatenate[6] = -rtb_sincos_o1_idx_0;

  /* Fcn: '<S518>/Fcn23' */
  localB->VectorConcatenate[7] = localB->rtb_sincos_o1_idx_1 *
    localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S518>/Fcn33' */
  localB->VectorConcatenate[8] = localB->rtb_sincos_o1_idx_1 *
    localB->rtb_IntegralGain_idx_0;

  /* RelationalOperator: '<S444>/Compare' incorporates:
   *  Constant: '<S444>/Constant'
   */
  rtb_Compare_ls = (localB->DataTypeConversion <= -0.4F);

  /* Logic: '<S439>/Logical Operator' incorporates:
   *  Constant: '<S446>/Constant'
   *  Constant: '<S447>/Constant'
   *  RelationalOperator: '<S446>/Compare'
   *  RelationalOperator: '<S447>/Compare'
   *  Switch: '<S443>/Switch'
   */
  rtb_Compare_fc = ((localB->pitchrollerror != 0.0F) || (localB->Saturation_g !=
    0.0F));

  /* Sum: '<S439>/Add' incorporates:
   *  Constant: '<S439>/gravity'
   *  Product: '<S439>/Product1'
   *  Reshape: '<S448>/Reshape (9) to [3x3] column-major'
   */
  for (localB->j = 0; localB->j < 3; localB->j++) {
    localB->rtb_VectorConcatenate_c[localB->j] = localB->FIR_IMUaccel[localB->j]
      - ((localB->Reshape9to3x3columnmajor[localB->j + 3] * 0.0 +
          localB->Reshape9to3x3columnmajor[localB->j] * 0.0) +
         localB->Reshape9to3x3columnmajor[localB->j + 6] * -9.81);
  }

  /* End of Sum: '<S439>/Add' */

  /* Product: '<S439>/Product' incorporates:
   *  Gain: '<S439>/gainaccinput1'
   */
  localB->Product[0] = (real32_T)rtb_Compare_fc * (real32_T)
    localB->rtb_VectorConcatenate_c[0] * (real32_T)rtb_Compare_ls;
  localB->Product[1] = (real32_T)rtb_Compare_fc * (real32_T)
    localB->rtb_VectorConcatenate_c[1] * (real32_T)rtb_Compare_ls;

  /* Outputs for Enabled SubSystem: '<S480>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S511>/Enable'
   */
  /* DataTypeConversion: '<S442>/DataTypeConversionEnable' */
  if (localB->LogicalOperator3) {
    localDW->MeasurementUpdate_MODE = true;

    /* Delay: '<S442>/MemoryX' incorporates:
     *  Constant: '<S442>/C'
     *  Product: '<S511>/C[k]*xhat[k|k-1]'
     */
    localB->DiscreteTimeIntegrator_a = localDW->MemoryX_DSTATE_l[1];
    localB->numAccum = localDW->MemoryX_DSTATE_l[0];
    rtb_sincos_o1_idx_0 = localDW->MemoryX_DSTATE_l[2];
    localB->rtb_sincos_o1_idx_1 = localDW->MemoryX_DSTATE_l[3];

    /* Reshape: '<S442>/Reshapeu' incorporates:
     *  Constant: '<S442>/D'
     *  Product: '<S511>/D[k]*u[k]'
     */
    localB->rtb_sincos_o1_idx_2 = localB->Product[0];
    localB->rtb_IntegralGain_idx_0 = localB->Product[1];
    for (localB->j = 0; localB->j < 2; localB->j++) {
      /* Sum: '<S511>/Sum' incorporates:
       *  Constant: '<S442>/C'
       *  Delay: '<S442>/MemoryX'
       *  Product: '<S511>/C[k]*xhat[k|k-1]'
       *  Product: '<S511>/D[k]*u[k]'
       *  Reshape: '<S442>/Reshapeu'
       *  Reshape: '<S442>/Reshapey'
       *  Sum: '<S511>/Add1'
       */
      localB->IntegralGain_e[localB->j] = localB->
        angularvelocitycompensation[localB->j] -
        ((((flightControlSystemIndependent_ConstP.C_Value_i[localB->j + 2] *
            localB->DiscreteTimeIntegrator_a +
            flightControlSystemIndependent_ConstP.C_Value_i[localB->j] *
            localB->numAccum) +
           flightControlSystemIndependent_ConstP.C_Value_i[localB->j + 4] *
           rtb_sincos_o1_idx_0) +
          flightControlSystemIndependent_ConstP.C_Value_i[localB->j + 6] *
          localB->rtb_sincos_o1_idx_1) + (0.0F * localB->rtb_sincos_o1_idx_2 +
          0.0F * localB->rtb_IntegralGain_idx_0));
    }

    /* Product: '<S511>/Product3' incorporates:
     *  Constant: '<S461>/KalmanGainL'
     *  DataTypeConversion: '<S503>/Conversion'
     */
    localB->DiscreteTimeIntegrator_a = localB->IntegralGain_e[1];
    localB->numAccum = localB->IntegralGain_e[0];
    for (localB->j = 0; localB->j < 4; localB->j++) {
      /* Product: '<S511>/Product3' incorporates:
       *  Constant: '<S461>/KalmanGainL'
       *  DataTypeConversion: '<S503>/Conversion'
       */
      localB->Product3_a[localB->j] = (real32_T)
        flightControlSystemIndependent_ConstP.KalmanGainL_Value[localB->j + 4] *
        localB->DiscreteTimeIntegrator_a + (real32_T)
        flightControlSystemIndependent_ConstP.KalmanGainL_Value[localB->j] *
        localB->numAccum;
    }

    srUpdateBC(localDW->MeasurementUpdate_SubsysRanBC);
  } else if (localDW->MeasurementUpdate_MODE) {
    /* Disable for Product: '<S511>/Product3' incorporates:
     *  Outport: '<S511>/L*(y[k]-yhat[k|k-1])'
     */
    localB->Product3_a[0] = 0.0F;
    localB->Product3_a[1] = 0.0F;
    localB->Product3_a[2] = 0.0F;
    localB->Product3_a[3] = 0.0F;
    localDW->MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S480>/MeasurementUpdate' */

  /* BusAssignment: '<S1>/Control Mode Update' incorporates:
   *  BusAssignment: '<S6>/Bus  Assignment'
   */
  localB->Switch_m[0] = rtu_ReferenceValueServerCmds->orient_ref[0];

  /* DataTypeConversion: '<S6>/Cast To Double' */
  localB->CastToDouble = localB->SimplyIntegrateVelocity[0];

  /* DataTypeConversion: '<S6>/Cast To Double1' */
  localB->CastToDouble1 = localB->SimplyIntegrateVelocity[1];

  /* Chart: '<S6>/Chart' */
  if (localDW->temporalCounter_i1 < 2047) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->temporalCounter_i2 < 1023) {
    localDW->temporalCounter_i2++;
  }

  if (localDW->is_active_c3_flightControlSystemIndependent == 0) {
    localDW->is_active_c3_flightControlSystemIndependent = 1U;
    localDW->is_c3_flightControlSystemIndependent =
      flightControlSystemIndependent_IN_Takeoff;
    localB->Xo = 0.0;
    localB->Yo = 0.0;
    localB->Zo = -0.9;
  } else {
    switch (localDW->is_c3_flightControlSystemIndependent) {
     case flightControlSystemIndependent_IN_Forloop:
      if (rtu_VisionbasedData == 1.0) {
        localDW->X_hold = localB->CastToDouble;
        localDW->Y_hold = localB->CastToDouble1;
        localDW->is_Forloop = flightControlSystemIndependent_IN_NO_ACTIVE_CHILD;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c3_flightControlSystemIndependent =
          flightControlSystemIndependent_IN_Stop;
      } else if ((localDW->temporalCounter_i2 >= 1000) && (localDW->i == 15.0))
      {
        localDW->is_Forloop = flightControlSystemIndependent_IN_NO_ACTIVE_CHILD;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c3_flightControlSystemIndependent =
          flightControlSystemIndependent_IN_intial;
      } else {
        switch (localDW->is_Forloop) {
         case flightControlSystemIndependent_IN_Move:
          if (localDW->temporalCounter_i1 >= 1600) {
            localB->Xo = flightControlSystemIndependent_ConstP.Chart_U[(int32_T)
              localDW->i + 13];
            localB->Yo = flightControlSystemIndependent_ConstP.Chart_U[(int32_T)
              localDW->i - 1];
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Forloop = flightControlSystemIndependent_IN_Move2;
          } else {
            localB->Xo = flightControlSystemIndependent_ConstP.Chart_U[(int32_T)
              localDW->i + 13];
            localB->Yo = flightControlSystemIndependent_ConstP.Chart_U[(int32_T)
              localDW->i - 1];
            localB->Zo = -0.9;
            if (rtu_VisionbasedData >= 1.0) {
              localB->Xo = localB->CastToDouble;
              localB->Yo = localB->CastToDouble1;
            }
          }
          break;

         case flightControlSystemIndependent_IN_Move2:
          if (localDW->temporalCounter_i1 >= 400) {
            localDW->i++;
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Forloop = flightControlSystemIndependent_IN_Start;
          } else {
            localB->Xo = localB->CastToDouble;
            localB->Yo = localB->CastToDouble1;
            localB->Zo = -0.9;
          }
          break;

         default:
          /* case IN_Start: */
          if ((localDW->temporalCounter_i1 >= 1000) && (localDW->i < 15.0)) {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Forloop = flightControlSystemIndependent_IN_Move;
          } else {
            localB->Xo = flightControlSystemIndependent_ConstP.Chart_U[(int32_T)
              localDW->i + 13];
            localB->Yo = flightControlSystemIndependent_ConstP.Chart_U[(int32_T)
              localDW->i - 1];
            localB->Zo = -0.9;
          }
          break;
        }
      }
      break;

     case flightControlSystemIndependent_IN_Stop:
      if (localDW->temporalCounter_i1 >= 2000) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c3_flightControlSystemIndependent =
          flightControlSystemIndependent_IN_intial;
      } else {
        localB->Xo = localDW->X_hold;
        localB->Yo = localDW->Y_hold;
        localB->Zo = -0.9;
      }
      break;

     case flightControlSystemIndependent_IN_Takeoff:
      localDW->i = 1.0;
      localDW->temporalCounter_i2 = 0U;
      localDW->is_c3_flightControlSystemIndependent =
        flightControlSystemIndependent_IN_Forloop;
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Forloop = flightControlSystemIndependent_IN_Start;
      break;

     case flightControlSystemIndependent_IN_intial:
      if (localDW->temporalCounter_i1 >= 1000) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c3_flightControlSystemIndependent =
          flightControlSystemIndependent_IN_land;
      } else {
        localB->Xo = 0.0;
        localB->Yo = 0.0;
        localB->Zo = -0.9;
      }
      break;

     case flightControlSystemIndependent_IN_land:
      if (localDW->temporalCounter_i1 >= 1000) {
        localDW->is_c3_flightControlSystemIndependent =
          flightControlSystemIndependent_IN_land2;
      } else {
        localB->Xo = 0.0;
        localB->Yo = 0.0;
        localB->Zo = -0.45;
      }
      break;

     default:
      /* case IN_land2: */
      localB->Xo = 0.0;
      localB->Yo = 0.0;
      localB->Zo = 0.0;
      break;
    }
  }

  /* End of Chart: '<S6>/Chart' */

  /* Sum: '<S11>/Sum1' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion'
   */
  rtb_DataTypeConversion_e_idx_0 = (real32_T)localB->Xo -
    localB->SimplyIntegrateVelocity[0];
  rtb_DataTypeConversion_e_idx_1 = (real32_T)localB->Yo -
    localB->SimplyIntegrateVelocity[1];

  /* Saturate: '<S170>/Saturation' incorporates:
   *  Gain: '<S168>/Proportional Gain'
   *  MATLAB Function: '<S11>/Position error transformation (Earth to Body frame)'
   */
  localB->rtb_sincos_o1_idx_2 = (rtb_DataTypeConversion_e_tmp *
    rtb_DataTypeConversion_e_idx_0 + rtb_sincos_o1_idx_0_tmp *
    rtb_DataTypeConversion_e_idx_1) * 0.7F;
  if (localB->rtb_sincos_o1_idx_2 > 0.5F) {
    localB->rtb_sincos_o1_idx_2 = 0.5F;
  } else if (localB->rtb_sincos_o1_idx_2 < -0.5F) {
    localB->rtb_sincos_o1_idx_2 = -0.5F;
  }

  /* Sum: '<S11>/Sum19' incorporates:
   *  Gain: '<S168>/Proportional Gain'
   */
  localB->DiscreteTimeIntegrator_a = localB->rtb_sincos_o1_idx_2 -
    localB->Reshapexhat[0];
  localB->IntegralGain_e[0] = localB->DiscreteTimeIntegrator_a;

  /* Sum: '<S226>/Sum' incorporates:
   *  DiscreteIntegrator: '<S217>/Integrator'
   *  Gain: '<S222>/Proportional Gain'
   */
  localB->numAccum = 0.2F * localB->DiscreteTimeIntegrator_a +
    localDW->Integrator_DSTATE[0];

  /* DeadZone: '<S209>/DeadZone' incorporates:
   *  Sum: '<S226>/Sum'
   */
  rtb_sincos_o1_idx_0 = localB->numAccum;

  /* Saturate: '<S224>/Saturation' */
  if (localB->numAccum > 0.34906584F) {
    localB->pitchrollerror = 0.34906584F;
  } else if (localB->numAccum < -0.34906584F) {
    localB->pitchrollerror = -0.34906584F;
  } else {
    localB->pitchrollerror = localB->numAccum;
  }

  /* DiscreteTransferFcn: '<S11>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localB->pitchrollerror = (localB->pitchrollerror - -6.95774698F *
    localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_states
    [0]) / 8.95774746F;
  localB->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_tmp[0]
    = localB->pitchrollerror;

  /* Gain: '<S11>/Gain' incorporates:
   *  DiscreteTransferFcn: '<S11>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller'
   */
  localB->rtb_IntegralGain_idx_0 = -(localB->pitchrollerror +
    localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_states
    [0]);

  /* Saturate: '<S170>/Saturation' incorporates:
   *  Gain: '<S168>/Proportional Gain'
   *  MATLAB Function: '<S11>/Position error transformation (Earth to Body frame)'
   */
  localB->rtb_sincos_o1_idx_2 = (-rtb_sincos_o1_idx_0_tmp *
    rtb_DataTypeConversion_e_idx_0 + rtb_DataTypeConversion_e_tmp *
    rtb_DataTypeConversion_e_idx_1) * 0.7F;
  if (localB->rtb_sincos_o1_idx_2 > 0.5F) {
    localB->rtb_sincos_o1_idx_2 = 0.5F;
  } else if (localB->rtb_sincos_o1_idx_2 < -0.5F) {
    localB->rtb_sincos_o1_idx_2 = -0.5F;
  }

  /* Sum: '<S11>/Sum19' incorporates:
   *  Gain: '<S168>/Proportional Gain'
   */
  localB->DiscreteTimeIntegrator_a = localB->rtb_sincos_o1_idx_2 -
    localB->Reshapexhat[1];

  /* Sum: '<S226>/Sum' incorporates:
   *  DiscreteIntegrator: '<S217>/Integrator'
   *  Gain: '<S222>/Proportional Gain'
   */
  localB->numAccum = 0.2F * localB->DiscreteTimeIntegrator_a +
    localDW->Integrator_DSTATE[1];

  /* Saturate: '<S224>/Saturation' */
  if (localB->numAccum > 0.34906584F) {
    localB->pitchrollerror = 0.34906584F;
  } else if (localB->numAccum < -0.34906584F) {
    localB->pitchrollerror = -0.34906584F;
  } else {
    localB->pitchrollerror = localB->numAccum;
  }

  /* DiscreteTransferFcn: '<S11>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localB->pitchrollerror = (localB->pitchrollerror - -6.95774698F *
    localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_states
    [1]) / 8.95774746F;
  localB->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_tmp[1]
    = localB->pitchrollerror;

  /* Sum: '<S9>/Sum1' incorporates:
   *  DiscreteTransferFcn: '<S11>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller'
   *  Gain: '<S59>/Proportional Gain'
   *  Sum: '<S9>/Sum19'
   */
  localB->rtb_IntegralGain_idx_0 = (localB->rtb_IntegralGain_idx_0 -
    localB->DataTypeConversion3[1]) * 4.0F - localB->Subtract[1];
  localB->rtb_sincos_o1_idx_1 = ((localB->pitchrollerror +
    localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_states
    [1]) - localB->DataTypeConversion3[2]) * 4.0F - localB->Subtract[0];

  /* Gain: '<S111>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S103>/Filter'
   *  Gain: '<S101>/Derivative Gain'
   *  Sum: '<S103>/SumD'
   */
  localB->pitchrollerror = (0.00012F * localB->rtb_IntegralGain_idx_0 -
    localDW->Filter_DSTATE[0]) * 70.0F;
  localB->Add_k[0] = localB->pitchrollerror;

  /* Sum: '<S117>/Sum' incorporates:
   *  DiscreteIntegrator: '<S108>/Integrator'
   *  Gain: '<S101>/Derivative Gain'
   *  Gain: '<S113>/Proportional Gain'
   */
  rtb_DataTypeConversion_e_idx_0 = (0.003F * localB->rtb_IntegralGain_idx_0 +
    localDW->Integrator_DSTATE_d[0]) + localB->pitchrollerror;

  /* DeadZone: '<S100>/DeadZone' incorporates:
   *  Sum: '<S117>/Sum'
   */
  rtb_DataTypeConversion_e_idx_1 = rtb_DataTypeConversion_e_idx_0;

  /* Saturate: '<S115>/Saturation' */
  if (rtb_DataTypeConversion_e_idx_0 > 0.02F) {
    rtb_sincos_o1_idx_0_tmp = 0.02F;
  } else if (rtb_DataTypeConversion_e_idx_0 < -0.02F) {
    rtb_sincos_o1_idx_0_tmp = -0.02F;
  } else {
    rtb_sincos_o1_idx_0_tmp = rtb_DataTypeConversion_e_idx_0;
  }

  /* Gain: '<S111>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S103>/Filter'
   *  Gain: '<S101>/Derivative Gain'
   *  Sum: '<S103>/SumD'
   */
  localB->pitchrollerror = (9.72E-5F * localB->rtb_sincos_o1_idx_1 -
    localDW->Filter_DSTATE[1]) * 70.0F;
  localB->Add_k[1] = localB->pitchrollerror;

  /* Sum: '<S117>/Sum' incorporates:
   *  DiscreteIntegrator: '<S108>/Integrator'
   *  Gain: '<S101>/Derivative Gain'
   *  Gain: '<S113>/Proportional Gain'
   */
  rtb_DataTypeConversion_e_idx_0 = (0.00243F * localB->rtb_sincos_o1_idx_1 +
    localDW->Integrator_DSTATE_d[1]) + localB->pitchrollerror;

  /* Saturate: '<S115>/Saturation' */
  if (rtb_DataTypeConversion_e_idx_0 > 0.02F) {
    rtb_DataTypeConversion_e_tmp = 0.02F;
  } else if (rtb_DataTypeConversion_e_idx_0 < -0.02F) {
    rtb_DataTypeConversion_e_tmp = -0.02F;
  } else {
    rtb_DataTypeConversion_e_tmp = rtb_DataTypeConversion_e_idx_0;
  }

  /* RelationalOperator: '<S14>/Compare' incorporates:
   *  Constant: '<S14>/Constant'
   *  UnitDelay: '<S15>/Output'
   */
  rtb_Compare_ls = (localDW->Output_DSTATE_a < 100);

  /* DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */
  if ((!rtb_Compare_ls) && (localDW->DiscreteTimeIntegrator_PrevResetState == 1))
  {
    localDW->DiscreteTimeIntegrator_DSTATE_c = 0.0F;
  }

  /* Sum: '<S8>/Sum2' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion'
   */
  localB->pitchrollerror = (real32_T)localB->Zo - localB->DataTypeConversion;

  /* Switch: '<S8>/TakeoffOrControl_Switch1' incorporates:
   *  Constant: '<S8>/w1'
   *  DiscreteIntegrator: '<S8>/Discrete-Time Integrator'
   *  Gain: '<S8>/D_z1'
   *  Gain: '<S8>/P_z1'
   *  Gain: '<S8>/takeoff_gain1'
   *  Sum: '<S8>/Sum1'
   */
  if (rtb_Compare_ls) {
    localB->rtb_sincos_o1_idx_2 = -0.278113484F;
  } else {
    localB->rtb_sincos_o1_idx_2 = (0.8F * localB->pitchrollerror +
      localDW->DiscreteTimeIntegrator_DSTATE_c) - 0.5F *
      localB->DataTypeConversion2;
  }

  /* End of Switch: '<S8>/TakeoffOrControl_Switch1' */

  /* Sum: '<S12>/Sum1' incorporates:
   *  BusAssignment: '<S6>/Bus  Assignment'
   */
  localB->Saturation_g = localB->Switch_m[0] - localB->DataTypeConversion3[0];

  /* Saturate: '<S12>/Saturation' */
  if (localB->Saturation_g > 0.52359879F) {
    localB->Saturation_g = 0.52359879F;
  } else if (localB->Saturation_g < -0.52359879F) {
    localB->Saturation_g = -0.52359879F;
  }

  /* End of Saturate: '<S12>/Saturation' */

  /* Saturate: '<S8>/SaturationThrust1' incorporates:
   *  Sum: '<S8>/Sum5'
   */
  if (localB->rtb_sincos_o1_idx_2 - 0.61803F > 1.20204329F) {
    localB->unnamed_idx_0 = 1.20204329F;
  } else if (localB->rtb_sincos_o1_idx_2 - 0.61803F < -1.20204329F) {
    localB->unnamed_idx_0 = -1.20204329F;
  } else {
    localB->unnamed_idx_0 = localB->rtb_sincos_o1_idx_2 - 0.61803F;
  }

  /* SignalConversion generated from: '<S10>/Product' incorporates:
   *  DiscreteIntegrator: '<S12>/Discrete-Time Integrator'
   *  Gain: '<S12>/D_yaw'
   *  Gain: '<S12>/P_yaw'
   *  Sum: '<S12>/Sum2'
   */
  localB->unnamed_idx_1_p = (0.004F * localB->Saturation_g +
    localDW->DiscreteTimeIntegrator_DSTATE_d) - 0.0012F * localB->Subtract[2];
  for (localB->j = 0; localB->j < 4; localB->j++) {
    /* Saturate: '<S13>/Saturation5' incorporates:
     *  Constant: '<S10>/TorqueTotalThrustToThrustPerMotor'
     *  Gain: '<S13>/ThrustToMotorCommand'
     *  Product: '<S10>/Product'
     *  Saturate: '<S115>/Saturation'
     *  Saturate: '<S8>/SaturationThrust1'
     *  Sum: '<S10>/Add'
     */
    localB->rtb_sincos_o1_idx_2 =
      (((flightControlSystemIndependent_ConstP.TorqueTotalThrustToThrustPerMotor_Value
         [localB->j + 4] * localB->unnamed_idx_1_p +
         flightControlSystemIndependent_ConstP.TorqueTotalThrustToThrustPerMotor_Value
         [localB->j] * localB->unnamed_idx_0) +
        flightControlSystemIndependent_ConstP.TorqueTotalThrustToThrustPerMotor_Value
        [localB->j + 8] * (rtb_sincos_o1_idx_0_tmp + 0.002F)) +
       flightControlSystemIndependent_ConstP.TorqueTotalThrustToThrustPerMotor_Value
       [localB->j + 12] * rtb_DataTypeConversion_e_tmp) * -1530.72681F;
    if (localB->rtb_sincos_o1_idx_2 > 500.0F) {
      localB->rtb_sincos_o1_idx_2 = 500.0F;
    } else if (localB->rtb_sincos_o1_idx_2 < 10.0F) {
      localB->rtb_sincos_o1_idx_2 = 10.0F;
    }

    /* End of Saturate: '<S13>/Saturation5' */

    /* Gain: '<S13>/MotorDirections' */
    rty_motorCmds[localB->j] =
      flightControlSystemIndependent_ConstP.MotorDirections_Gain[localB->j] *
      localB->rtb_sincos_o1_idx_2;
  }

  /* Product: '<S252>/Product' */
  localB->rtb_sincos_o1_idx_2 = localB->FIR_IMUaccel[1];
  rtb_sincos_o1_idx_0_tmp = localB->FIR_IMUaccel[0];
  for (localB->j = 0; localB->j < 3; localB->j++) {
    /* Sum: '<S252>/Sum' incorporates:
     *  Constant: '<S252>/gravity'
     *  DiscreteFir: '<S254>/FIR_IMUaccel'
     *  Math: '<S252>/Math Function'
     *  Product: '<S252>/Product'
     */
    localB->Sum[localB->j] = ((localB->MathFunction[localB->j + 3] *
      localB->rtb_sincos_o1_idx_2 + localB->MathFunction[localB->j] *
      rtb_sincos_o1_idx_0_tmp) + localB->MathFunction[localB->j + 6] *
      localB->Abs) +
      flightControlSystemIndependent_ConstP.gravity_Value_j[localB->j];
  }

  /* DataTypeConversion: '<S419>/Conversion' incorporates:
   *  Constant: '<S377>/KalmanGainL'
   *  DataTypeConversion: '<S365>/Conversion'
   */
  localB->Add_g[0] = 0.00118709437F;
  localB->Add_g[1] = -3.28681635E-5F;

  /* Outputs for Enabled SubSystem: '<S396>/MeasurementUpdate' */
  /* DataTypeConversion: '<S376>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S376>/C'
   *  Constant: '<S376>/D'
   *  DataTypeConversion: '<S419>/Conversion'
   *  Delay: '<S376>/MemoryX'
   *  Reshape: '<S376>/Reshapeu'
   *  Reshape: '<S376>/Reshapey'
   */
  flightControlSystemIndependent_MeasurementUpdate((localB->LogicalOperator != 0),
    localB->Add_g, localB->TrigonometricFunction,
    flightControlSystemIndependent_ConstP.pooled13, localDW->MemoryX_DSTATE_m,
    0.0F, localB->p, localB->Product3_g, &localDW->MeasurementUpdate_j);

  /* End of Outputs for SubSystem: '<S396>/MeasurementUpdate' */

  /* Outputs for Enabled SubSystem: '<S342>/MeasurementUpdate' */
  /* DataTypeConversion: '<S322>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S322>/C'
   *  Constant: '<S322>/D'
   *  Delay: '<S322>/MemoryX'
   *  Reshape: '<S322>/Reshapeu'
   *  Reshape: '<S322>/Reshapey'
   */
  flightControlSystemIndependent_MeasurementUpdate((localB->LogicalOperator != 0),
    localB->Add_g, localB->TrigonometricFunction1,
    flightControlSystemIndependent_ConstP.pooled13, localDW->MemoryX_DSTATE_g,
    0.0F, localB->q, localB->Product3_j, &localDW->MeasurementUpdate_n);

  /* End of Outputs for SubSystem: '<S342>/MeasurementUpdate' */

  /* Outputs for Enabled SubSystem: '<S278>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S308>/Enable'
   */
  /* DataTypeConversion: '<S256>/DataTypeConversionEnable' */
  if (localB->nicemeasurementornewupdateneeded) {
    localDW->MeasurementUpdate_MODE_c = true;

    /* Product: '<S308>/D[k]*u[k]' incorporates:
     *  Constant: '<S256>/D'
     *  Delay: '<S252>/Delay2'
     *  Reshape: '<S256>/Reshapeu'
     */
    localDW->Delay2_DSTATE = 0.0 * localB->Sum[2];

    /* Sum: '<S308>/Sum' incorporates:
     *  Constant: '<S256>/C'
     *  Delay: '<S252>/Delay2'
     *  Delay: '<S256>/MemoryX'
     *  Product: '<S308>/C[k]*xhat[k|k-1]'
     *  Reshape: '<S256>/Reshapey'
     *  Sum: '<S308>/Add1'
     */
    localB->u_h = localB->invertzaxisGain - ((0.0 * localDW->MemoryX_DSTATE[1] +
      localDW->MemoryX_DSTATE[0]) + localDW->Delay2_DSTATE);

    /* Product: '<S308>/Product3' incorporates:
     *  Constant: '<S260>/KalmanGainL'
     *  DataTypeConversion: '<S300>/Conversion'
     */
    localB->Product3[0] = 0.026590304322229086 * localB->u_h;
    localB->Product3[1] = 0.06977673607149236 * localB->u_h;
    srUpdateBC(localDW->MeasurementUpdate_SubsysRanBC_m);
  } else if (localDW->MeasurementUpdate_MODE_c) {
    /* Disable for Product: '<S308>/Product3' incorporates:
     *  Outport: '<S308>/L*(y[k]-yhat[k|k-1])'
     */
    localB->Product3[0] = 0.0;
    localB->Product3[1] = 0.0;
    localDW->MeasurementUpdate_MODE_c = false;
  }

  /* End of Outputs for SubSystem: '<S278>/MeasurementUpdate' */

  /* DeadZone: '<S100>/DeadZone' */
  if (rtb_DataTypeConversion_e_idx_1 > 0.02F) {
    rtb_DataTypeConversion_e_idx_1 -= 0.02F;

    /* Switch: '<S98>/Switch1' incorporates:
     *  Constant: '<S98>/Constant'
     */
    rtb_Switch2_0 = 1;
  } else {
    if (rtb_DataTypeConversion_e_idx_1 >= -0.02F) {
      rtb_DataTypeConversion_e_idx_1 = 0.0F;
    } else {
      rtb_DataTypeConversion_e_idx_1 -= -0.02F;
    }

    /* Switch: '<S98>/Switch1' incorporates:
     *  Constant: '<S98>/Constant2'
     */
    rtb_Switch2_0 = -1;
  }

  /* Gain: '<S105>/Integral Gain' */
  localB->rtb_IntegralGain_idx_0 *= 0.006F;

  /* Switch: '<S98>/Switch2' incorporates:
   *  Constant: '<S98>/Clamping_zero'
   *  Constant: '<S98>/Constant3'
   *  Constant: '<S98>/Constant4'
   *  RelationalOperator: '<S98>/fix for DT propagation issue1'
   */
  if (localB->rtb_IntegralGain_idx_0 > 0.0F) {
    rtb_Switch1_0 = 1;
  } else {
    rtb_Switch1_0 = -1;
  }

  /* Switch: '<S98>/Switch' incorporates:
   *  Constant: '<S98>/Clamping_zero'
   *  Constant: '<S98>/Constant1'
   *  Logic: '<S98>/AND3'
   *  RelationalOperator: '<S98>/Equal1'
   *  RelationalOperator: '<S98>/Relational Operator'
   */
  if ((rtb_DataTypeConversion_e_idx_1 != 0.0F) && (rtb_Switch2_0 ==
       rtb_Switch1_0)) {
    localB->Switch[0] = 0.0F;
  } else {
    localB->Switch[0] = localB->rtb_IntegralGain_idx_0;
  }

  /* DeadZone: '<S209>/DeadZone' */
  if (rtb_sincos_o1_idx_0 > 0.34906584F) {
    rtb_sincos_o1_idx_0 -= 0.34906584F;

    /* Switch: '<S207>/Switch1' incorporates:
     *  Constant: '<S207>/Constant'
     */
    rtb_Switch1_0 = 1;
  } else {
    if (rtb_sincos_o1_idx_0 >= -0.34906584F) {
      rtb_sincos_o1_idx_0 = 0.0F;
    } else {
      rtb_sincos_o1_idx_0 -= -0.34906584F;
    }

    /* Switch: '<S207>/Switch1' incorporates:
     *  Constant: '<S207>/Constant2'
     */
    rtb_Switch1_0 = -1;
  }

  /* Gain: '<S214>/Integral Gain' */
  localB->Abs = 0.1F * localB->IntegralGain_e[0];

  /* Switch: '<S207>/Switch2' incorporates:
   *  Constant: '<S207>/Clamping_zero'
   *  Constant: '<S207>/Constant3'
   *  Constant: '<S207>/Constant4'
   *  RelationalOperator: '<S207>/fix for DT propagation issue1'
   */
  if (localB->Abs > 0.0F) {
    rtb_Switch2_0 = 1;
  } else {
    rtb_Switch2_0 = -1;
  }

  /* Switch: '<S207>/Switch' incorporates:
   *  Constant: '<S207>/Clamping_zero'
   *  Constant: '<S207>/Constant1'
   *  Logic: '<S207>/AND3'
   *  RelationalOperator: '<S207>/Equal1'
   *  RelationalOperator: '<S207>/Relational Operator'
   */
  if ((rtb_sincos_o1_idx_0 != 0.0F) && (rtb_Switch1_0 == rtb_Switch2_0)) {
    localB->Switch_h[0] = 0.0F;
  } else {
    localB->Switch_h[0] = localB->Abs;
  }

  /* DeadZone: '<S100>/DeadZone' incorporates:
   *  Sum: '<S117>/Sum'
   */
  if (rtb_DataTypeConversion_e_idx_0 > 0.02F) {
    rtb_DataTypeConversion_e_idx_1 = rtb_DataTypeConversion_e_idx_0 - 0.02F;

    /* Switch: '<S98>/Switch1' incorporates:
     *  Constant: '<S98>/Constant'
     */
    rtb_Switch2_0 = 1;
  } else {
    if (rtb_DataTypeConversion_e_idx_0 >= -0.02F) {
      rtb_DataTypeConversion_e_idx_1 = 0.0F;
    } else {
      rtb_DataTypeConversion_e_idx_1 = rtb_DataTypeConversion_e_idx_0 - -0.02F;
    }

    /* Switch: '<S98>/Switch1' incorporates:
     *  Constant: '<S98>/Constant2'
     */
    rtb_Switch2_0 = -1;
  }

  /* Gain: '<S105>/Integral Gain' */
  localB->rtb_IntegralGain_idx_0 = 0.00486F * localB->rtb_sincos_o1_idx_1;

  /* Switch: '<S98>/Switch2' incorporates:
   *  Constant: '<S98>/Clamping_zero'
   *  Constant: '<S98>/Constant3'
   *  Constant: '<S98>/Constant4'
   *  RelationalOperator: '<S98>/fix for DT propagation issue1'
   */
  if (localB->rtb_IntegralGain_idx_0 > 0.0F) {
    rtb_Switch1_0 = 1;
  } else {
    rtb_Switch1_0 = -1;
  }

  /* Switch: '<S98>/Switch' incorporates:
   *  Constant: '<S98>/Clamping_zero'
   *  Constant: '<S98>/Constant1'
   *  Logic: '<S98>/AND3'
   *  RelationalOperator: '<S98>/Equal1'
   *  RelationalOperator: '<S98>/Relational Operator'
   */
  if ((rtb_DataTypeConversion_e_idx_1 != 0.0F) && (rtb_Switch2_0 ==
       rtb_Switch1_0)) {
    localB->Switch[1] = 0.0F;
  } else {
    localB->Switch[1] = localB->rtb_IntegralGain_idx_0;
  }

  /* DeadZone: '<S209>/DeadZone' incorporates:
   *  Sum: '<S226>/Sum'
   */
  if (localB->numAccum > 0.34906584F) {
    rtb_sincos_o1_idx_0 = localB->numAccum - 0.34906584F;

    /* Switch: '<S207>/Switch1' incorporates:
     *  Constant: '<S207>/Constant'
     */
    rtb_Switch1_0 = 1;
  } else {
    if (localB->numAccum >= -0.34906584F) {
      rtb_sincos_o1_idx_0 = 0.0F;
    } else {
      rtb_sincos_o1_idx_0 = localB->numAccum - -0.34906584F;
    }

    /* Switch: '<S207>/Switch1' incorporates:
     *  Constant: '<S207>/Constant2'
     */
    rtb_Switch1_0 = -1;
  }

  /* Gain: '<S214>/Integral Gain' incorporates:
   *  Sum: '<S11>/Sum19'
   */
  localB->Abs = 0.1F * localB->DiscreteTimeIntegrator_a;

  /* Switch: '<S207>/Switch2' incorporates:
   *  Constant: '<S207>/Clamping_zero'
   *  Constant: '<S207>/Constant3'
   *  Constant: '<S207>/Constant4'
   *  RelationalOperator: '<S207>/fix for DT propagation issue1'
   */
  if (localB->Abs > 0.0F) {
    rtb_Switch2_0 = 1;
  } else {
    rtb_Switch2_0 = -1;
  }

  /* Switch: '<S207>/Switch' incorporates:
   *  Constant: '<S207>/Clamping_zero'
   *  Constant: '<S207>/Constant1'
   *  Logic: '<S207>/AND3'
   *  RelationalOperator: '<S207>/Equal1'
   *  RelationalOperator: '<S207>/Relational Operator'
   */
  if ((rtb_sincos_o1_idx_0 != 0.0F) && (rtb_Switch1_0 == rtb_Switch2_0)) {
    localB->Switch_h[1] = 0.0F;
  } else {
    localB->Switch_h[1] = localB->Abs;
  }

  /* Switch: '<S17>/FixPt Switch' incorporates:
   *  Constant: '<S16>/FixPt Constant'
   *  Sum: '<S16>/FixPt Sum1'
   *  UnitDelay: '<S15>/Output'
   */
  localDW->Output_DSTATE_a++;

  /* Gain: '<S5>/Gain' */
  localB->Abs = rtu_Sensors->VisionSensors.opticalFlow_data[0];

  /* Abs: '<S5>/Abs2' incorporates:
   *  Sum: '<S5>/Subtract'
   */
  localB->DiscreteTimeIntegrator_a = (real32_T)fabs(localB->Abs -
    localB->Reshapexhat[0]);

  /* Abs: '<S5>/Abs4' */
  localB->Abs = (real32_T)fabs(rtu_Sensors->VisionSensors.opticalFlow_data[0]);

  /* Logic: '<S5>/Logical Operator1' incorporates:
   *  Constant: '<S239>/Constant'
   *  Constant: '<S241>/Constant'
   *  RelationalOperator: '<S239>/Compare'
   *  RelationalOperator: '<S241>/Compare'
   */
  rtb_Compare_fc = ((localB->Abs > 0.01F) && (localB->DiscreteTimeIntegrator_a >
    6.0F));

  /* Gain: '<S5>/Gain1' */
  localB->Abs = rtu_Sensors->VisionSensors.opticalFlow_data[1];

  /* Abs: '<S5>/Abs3' incorporates:
   *  Sum: '<S5>/Subtract1'
   */
  localB->DiscreteTimeIntegrator_a = (real32_T)fabs(localB->Abs -
    localB->Reshapexhat[1]);

  /* Abs: '<S5>/Abs5' */
  localB->Abs = (real32_T)fabs(rtu_Sensors->VisionSensors.opticalFlow_data[1]);

  /* Logic: '<S5>/Logical Operator2' incorporates:
   *  Constant: '<S240>/Constant'
   *  Constant: '<S242>/Constant'
   *  RelationalOperator: '<S240>/Compare'
   *  RelationalOperator: '<S242>/Compare'
   */
  rtb_LogicalOperator2_m = ((localB->DiscreteTimeIntegrator_a > 6.0F) &&
    (localB->Abs > 0.01F));

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S5>/ '
   *  Constant: '<S5>/    '
   *  DiscreteFilter: '<S257>/pressureFilter_IIR'
   *  RelationalOperator: '<S5>/GreaterThan'
   *  Sum: '<S5>/Difference between  sonar and pressure'
   *  Switch: '<S5>/         '
   *  UnitDelay: '<S243>/Output'
   */
  if (localDW->Output_DSTATE_g > 600U) {
    localB->u_h = rtu_Sensors->VisionSensors.opticalFlow_data[2];
    localB->Abs = localB->DataTypeConversion - numAccum;
  } else {
    localB->u_h = 0.0;
    localB->Abs = 0.0F;
  }

  /* End of Switch: '<S5>/Switch' */

  /* DataTypeConversion: '<S5>/   ' incorporates:
   *  Constant: '<S236>/Constant'
   *  RelationalOperator: '<S236>/Compare'
   */
  localB->u_h = (localB->u_h == -1.0);

  /* Delay: '<S5>/Delay One Step' incorporates:
   *  Delay: '<S252>/Delay2'
   */
  localDW->Delay2_DSTATE = localDW->DelayOneStep_DSTATE;

  /* Sum: '<S5>/Add' incorporates:
   *  Delay: '<S252>/Delay2'
   *  Delay: '<S5>/Delay One Step'
   *  Product: '<S5>/  '
   */
  localDW->DelayOneStep_DSTATE = localB->u_h * localDW->Delay2_DSTATE +
    localB->u_h;

  /* If: '<S5>/If' incorporates:
   *  Abs: '<S5>/Abs'
   *  Abs: '<S5>/Abs  '
   *  Abs: '<S5>/Abs1'
   *  Constant: '<S235>/Constant'
   *  Constant: '<S237>/Constant'
   *  Constant: '<S238>/Constant'
   *  Constant: '<S5>/0.5 meters'
   *  Delay: '<S5>/Delay One Step'
   *  Logic: '<S5>/Logical Operator'
   *  Logic: '<S5>/Logical Operator3'
   *  RelationalOperator: '<S235>/Compare'
   *  RelationalOperator: '<S237>/Compare'
   *  RelationalOperator: '<S238>/Compare'
   *  RelationalOperator: '<S5>/GreaterThan  '
   */
  if (((real32_T)fabs(localB->SimplyIntegrateVelocity[0]) > 10.0F) || ((real32_T)
       fabs(localB->SimplyIntegrateVelocity[1]) > 10.0F)) {
    /* Outputs for IfAction SubSystem: '<S5>/Geofencing error' incorporates:
     *  ActionPort: '<S244>/Action Port'
     */
    /* SignalConversion generated from: '<S244>/Out1' incorporates:
     *  Constant: '<S244>/Constant'
     */
    *rty_Flag = 1U;

    /* End of Outputs for SubSystem: '<S5>/Geofencing error' */

    /* Update for IfAction SubSystem: '<S5>/Geofencing error' incorporates:
     *  ActionPort: '<S244>/Action Port'
     */
    /* Update for If: '<S5>/If' */
    srUpdateBC(localDW->Geofencingerror_SubsysRanBC);

    /* End of Update for SubSystem: '<S5>/Geofencing error' */
  } else if (rtb_Compare_fc || rtb_LogicalOperator2_m) {
    /* Outputs for IfAction SubSystem: '<S5>/estimator//Optical flow error' incorporates:
     *  ActionPort: '<S248>/Action Port'
     */
    /* SignalConversion generated from: '<S248>/Out1' incorporates:
     *  Constant: '<S248>/Constant'
     */
    *rty_Flag = 99U;

    /* End of Outputs for SubSystem: '<S5>/estimator//Optical flow error' */

    /* Update for IfAction SubSystem: '<S5>/estimator//Optical flow error' incorporates:
     *  ActionPort: '<S248>/Action Port'
     */
    /* Update for If: '<S5>/If' */
    srUpdateBC(localDW->estimatorOpticalflowerror_SubsysRanBC);

    /* End of Update for SubSystem: '<S5>/estimator//Optical flow error' */
  } else if (localDW->DelayOneStep_DSTATE > 50.0) {
    /* Outputs for IfAction SubSystem: '<S5>/No optical flow ' incorporates:
     *  ActionPort: '<S245>/Action Port'
     */
    flightControlSystemIndependent_Noopticalflow(rty_Flag);

    /* End of Outputs for SubSystem: '<S5>/No optical flow ' */
  } else if ((real32_T)fabs(localB->Abs) > 0.5F) {
    /* Outputs for IfAction SubSystem: '<S5>/Ultrasound improper' incorporates:
     *  ActionPort: '<S247>/Action Port'
     */
    flightControlSystemIndependent_Noopticalflow(rty_Flag);

    /* End of Outputs for SubSystem: '<S5>/Ultrasound improper' */
  } else {
    /* Outputs for IfAction SubSystem: '<S5>/Normal condition' incorporates:
     *  ActionPort: '<S246>/Action Port'
     */
    flightControlSystemIndependent_Noopticalflow(rty_Flag);

    /* End of Outputs for SubSystem: '<S5>/Normal condition' */
  }

  /* End of If: '<S5>/If' */

  /* Switch: '<S517>/FixPt Switch' incorporates:
   *  Constant: '<S516>/FixPt Constant'
   *  Sum: '<S516>/FixPt Sum1'
   *  UnitDelay: '<S515>/Output'
   */
  localDW->Output_DSTATE_n++;

  /* Switch: '<S436>/FixPt Switch' incorporates:
   *  Constant: '<S435>/FixPt Constant'
   *  Sum: '<S435>/FixPt Sum1'
   *  UnitDelay: '<S433>/Output'
   */
  localDW->Output_DSTATE++;

  /* DataTypeConversion: '<S368>/Conversion' incorporates:
   *  Constant: '<S323>/CovarianceZ'
   *  DataTypeConversion: '<S422>/Conversion'
   */
  localB->rtb_Conversion_a_tmp[0] = 1097.38354F;
  localB->rtb_Conversion_a_tmp[1] = -30.3884659F;
  localB->rtb_Conversion_a_tmp[2] = -30.3884659F;
  localB->rtb_Conversion_a_tmp[3] = 7.22236872F;

  /* MATLAB Function: '<S371>/SqrtUsedFcn' incorporates:
   *  Constant: '<S371>/isSqrtUsed'
   *  DataTypeConversion: '<S368>/Conversion'
   */
  flightControlSystemIndependent_SqrtUsedFcn(localB->rtb_Conversion_a_tmp, false,
    localB->P_k, &localDW->sf_SqrtUsedFcn_h);

  /* MATLAB Function: '<S425>/SqrtUsedFcn' incorporates:
   *  Constant: '<S425>/isSqrtUsed'
   */
  flightControlSystemIndependent_SqrtUsedFcn(localB->rtb_Conversion_a_tmp, false,
    localB->P_k, &localDW->sf_SqrtUsedFcn_e);

  /* SignalConversion generated from: '<S438>/Product' */
  localB->unnamed_idx_0 = localB->Reshapexhat[0];
  localB->unnamed_idx_1_p = localB->Reshapexhat[1];

  /* Product: '<S438>/Product' incorporates:
   *  Math: '<S438>/Math Function'
   *  Reshape: '<S519>/Reshape (9) to [3x3] column-major'
   *  SignalConversion generated from: '<S438>/Product'
   */
  for (localB->j = 0; localB->j < 3; localB->j++) {
    localB->FIR_IMUaccel[localB->j] = (localB->VectorConcatenate[3 * localB->j +
      1] * localB->unnamed_idx_1_p + localB->VectorConcatenate[3 * localB->j] *
      localB->unnamed_idx_0) + localB->VectorConcatenate[3 * localB->j + 2] *
      localB->DataTypeConversion2;
  }

  /* End of Product: '<S438>/Product' */

  /* Update for DiscreteIntegrator: '<S438>/SimplyIntegrateVelocity' incorporates:
   *  Constant: '<S1>/controlModePosVsOrient'
   */
  localDW->SimplyIntegrateVelocity_PrevResetState = 1;

  /* Update for Delay: '<S252>/Delay2' incorporates:
   *  Reshape: '<S256>/Reshapexhat'
   */
  localDW->Delay2_DSTATE = localB->u_h_c;

  /* Update for Delay: '<S256>/MemoryX' */
  localDW->icLoad = false;

  /* Update for DiscreteIntegrator: '<S438>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[0] += 0.005F * localB->FIR_IMUaccel[0];

  /* Product: '<S278>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S256>/A'
   *  Delay: '<S256>/MemoryX'
   */
  localB->u_h = 0.005 * localDW->MemoryX_DSTATE[1] + localDW->MemoryX_DSTATE[0];

  /* Update for DiscreteIntegrator: '<S438>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[1] += 0.005F * localB->FIR_IMUaccel[1];

  /* Product: '<S278>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S256>/A'
   *  Delay: '<S256>/MemoryX'
   */
  localB->unnamed_idx_1 = 0.0 * localDW->MemoryX_DSTATE[0] +
    localDW->MemoryX_DSTATE[1];

  /* Update for Delay: '<S256>/MemoryX' incorporates:
   *  Constant: '<S256>/B'
   *  Product: '<S278>/A[k]*xhat[k|k-1]'
   *  Product: '<S278>/B[k]*u[k]'
   *  Product: '<S308>/Product3'
   *  Reshape: '<S256>/Reshapeu'
   *  Sum: '<S278>/Add'
   */
  localDW->MemoryX_DSTATE[0] = (0.0 * localB->Sum[2] + localB->u_h) +
    localB->Product3[0];

  /* Update for DiscreteFilter: '<S257>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[2] = localDW->pressureFilter_IIR_states[1];

  /* Update for DiscreteFilter: '<S257>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[2] = localDW->sonarFilter_IIR_states[1];

  /* Update for Delay: '<S256>/MemoryX' incorporates:
   *  Constant: '<S256>/B'
   *  Product: '<S278>/A[k]*xhat[k|k-1]'
   *  Product: '<S278>/B[k]*u[k]'
   *  Product: '<S308>/Product3'
   *  Reshape: '<S256>/Reshapeu'
   *  Sum: '<S278>/Add'
   */
  localDW->MemoryX_DSTATE[1] = (0.005 * localB->Sum[2] + localB->unnamed_idx_1)
    + localB->Product3[1];

  /* Update for DiscreteFilter: '<S257>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[1] = localDW->pressureFilter_IIR_states[0];

  /* Update for DiscreteFilter: '<S257>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[1] = localDW->sonarFilter_IIR_states[0];

  /* Update for DiscreteFilter: '<S257>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[0] = localB->pressureFilter_IIR;

  /* Update for DiscreteFilter: '<S257>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[0] = localB->denAccum;

  /* Update for DiscreteIntegrator: '<S320>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE += 0.005F * localB->r;

  /* Update for Delay: '<S322>/MemoryX' */
  localDW->icLoad_p = false;

  /* Product: '<S342>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S322>/A'
   *  Delay: '<S322>/MemoryX'
   */
  localB->unnamed_idx_0 = -0.005F * localDW->MemoryX_DSTATE_g[1] +
    localDW->MemoryX_DSTATE_g[0];
  localB->unnamed_idx_1_p = 0.0F * localDW->MemoryX_DSTATE_g[0] +
    localDW->MemoryX_DSTATE_g[1];

  /* Update for Delay: '<S322>/MemoryX' incorporates:
   *  Constant: '<S322>/B'
   *  Product: '<S342>/A[k]*xhat[k|k-1]'
   *  Product: '<S342>/B[k]*u[k]'
   *  Product: '<S373>/Product3'
   *  Reshape: '<S322>/Reshapeu'
   *  Sum: '<S342>/Add'
   */
  localDW->MemoryX_DSTATE_g[0] = (0.005F * localB->q + localB->unnamed_idx_0) +
    localB->Product3_j[0];
  localDW->MemoryX_DSTATE_g[1] = (0.0F * localB->q + localB->unnamed_idx_1_p) +
    localB->Product3_j[1];

  /* Update for DiscreteFir: '<S254>/FIR_IMUaccel' */
  /* Update circular buffer index */
  localDW->FIR_IMUaccel_circBuf--;
  if (localDW->FIR_IMUaccel_circBuf < 0) {
    localDW->FIR_IMUaccel_circBuf = 4;
  }

  /* Update circular buffer */
  localDW->FIR_IMUaccel_states[localDW->FIR_IMUaccel_circBuf] = localB->
    Sum1_p_k[0];
  localDW->FIR_IMUaccel_states[localDW->FIR_IMUaccel_circBuf + 5] =
    localB->Sum1_p_k[1];
  localDW->FIR_IMUaccel_states[localDW->FIR_IMUaccel_circBuf + 10] =
    localB->Sum1_p_k[2];

  /* End of Update for DiscreteFir: '<S254>/FIR_IMUaccel' */

  /* Update for Delay: '<S376>/MemoryX' */
  localDW->icLoad_k = false;

  /* Product: '<S396>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S376>/A'
   *  Delay: '<S376>/MemoryX'
   */
  localB->unnamed_idx_0 = -0.005F * localDW->MemoryX_DSTATE_m[1] +
    localDW->MemoryX_DSTATE_m[0];
  localB->unnamed_idx_1_p = 0.0F * localDW->MemoryX_DSTATE_m[0] +
    localDW->MemoryX_DSTATE_m[1];

  /* Update for Delay: '<S376>/MemoryX' incorporates:
   *  Constant: '<S376>/B'
   *  Product: '<S396>/A[k]*xhat[k|k-1]'
   *  Product: '<S396>/B[k]*u[k]'
   *  Product: '<S427>/Product3'
   *  Reshape: '<S376>/Reshapeu'
   *  Sum: '<S396>/Add'
   */
  localDW->MemoryX_DSTATE_m[0] = (0.005F * localB->p + localB->unnamed_idx_0) +
    localB->Product3_g[0];
  localDW->MemoryX_DSTATE_m[1] = (0.0F * localB->p + localB->unnamed_idx_1_p) +
    localB->Product3_g[1];

  /* Update for DiscreteTransferFcn: '<S254>/LPF Fcutoff = 40Hz1' */
  localDW->LPFFcutoff40Hz1_states = localB->LPFFcutoff40Hz1_tmp;

  /* Update for DiscreteTransferFcn: '<S254>/LPF Fcutoff = 40Hz' */
  localDW->LPFFcutoff40Hz_states = localB->LPFFcutoff40Hz_tmp;

  /* Update for DiscreteFilter: '<S254>/IIR_IMUgyro_r' */
  localDW->IIR_IMUgyro_r_states[4] = localDW->IIR_IMUgyro_r_states[3];
  localDW->IIR_IMUgyro_r_states[3] = localDW->IIR_IMUgyro_r_states[2];
  localDW->IIR_IMUgyro_r_states[2] = localDW->IIR_IMUgyro_r_states[1];
  localDW->IIR_IMUgyro_r_states[1] = localDW->IIR_IMUgyro_r_states[0];
  localDW->IIR_IMUgyro_r_states[0] = localB->denAccum_b;

  /* Update for Delay: '<S442>/MemoryX' */
  localDW->icLoad_o = false;

  /* Reshape: '<S442>/Reshapeu' incorporates:
   *  Constant: '<S442>/B'
   *  Product: '<S480>/B[k]*u[k]'
   */
  localB->rtb_sincos_o1_idx_2 = localB->Product[1];
  localB->rtb_IntegralGain_idx_0 = localB->Product[0];

  /* Delay: '<S442>/MemoryX' incorporates:
   *  Constant: '<S442>/A'
   *  Product: '<S480>/A[k]*xhat[k|k-1]'
   */
  localB->DiscreteTimeIntegrator_a = localDW->MemoryX_DSTATE_l[1];
  localB->numAccum = localDW->MemoryX_DSTATE_l[0];
  rtb_sincos_o1_idx_0 = localDW->MemoryX_DSTATE_l[2];
  localB->rtb_sincos_o1_idx_1 = localDW->MemoryX_DSTATE_l[3];
  for (localB->j = 0; localB->j < 4; localB->j++) {
    /* Product: '<S480>/B[k]*u[k]' incorporates:
     *  Constant: '<S442>/B'
     *  Reshape: '<S442>/Reshapeu'
     */
    localB->rtb_Conversion_a_tmp[localB->j] =
      flightControlSystemIndependent_ConstP.B_Value_f[localB->j + 4] *
      localB->rtb_sincos_o1_idx_2 +
      flightControlSystemIndependent_ConstP.B_Value_f[localB->j] *
      localB->rtb_IntegralGain_idx_0;

    /* Product: '<S480>/A[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S442>/A'
     *  Delay: '<S442>/MemoryX'
     */
    localB->P_k[localB->j] =
      ((flightControlSystemIndependent_ConstP.A_Value_a[localB->j + 4] *
        localB->DiscreteTimeIntegrator_a +
        flightControlSystemIndependent_ConstP.A_Value_a[localB->j] *
        localB->numAccum) +
       flightControlSystemIndependent_ConstP.A_Value_a[localB->j + 8] *
       rtb_sincos_o1_idx_0) +
      flightControlSystemIndependent_ConstP.A_Value_a[localB->j + 12] *
      localB->rtb_sincos_o1_idx_1;
  }

  /* Update for Delay: '<S442>/MemoryX' incorporates:
   *  Sum: '<S480>/Add'
   */
  localDW->MemoryX_DSTATE_l[0] = (localB->rtb_Conversion_a_tmp[0] + localB->P_k
    [0]) + localB->Product3_a[0];
  localDW->MemoryX_DSTATE_l[1] = (localB->rtb_Conversion_a_tmp[1] + localB->P_k
    [1]) + localB->Product3_a[1];
  localDW->MemoryX_DSTATE_l[2] = (localB->rtb_Conversion_a_tmp[2] + localB->P_k
    [2]) + localB->Product3_a[2];
  localDW->MemoryX_DSTATE_l[3] = (localB->rtb_Conversion_a_tmp[3] + localB->P_k
    [3]) + localB->Product3_a[3];
  for (localB->j = 0; localB->j < 2; localB->j++) {
    /* Update for DiscreteFilter: '<S441>/IIRgyroz' */
    localB->memOffset = localB->j * 5;
    localDW->IIRgyroz_states[localB->memOffset + 4] = localDW->
      IIRgyroz_states[localB->memOffset + 3];
    localDW->IIRgyroz_states[localB->memOffset + 3] = localDW->
      IIRgyroz_states[localB->memOffset + 2];
    localDW->IIRgyroz_states[localB->memOffset + 2] = localDW->
      IIRgyroz_states[localB->memOffset + 1];
    localDW->IIRgyroz_states[localB->memOffset + 1] = localDW->
      IIRgyroz_states[localB->memOffset];
    localDW->IIRgyroz_states[localB->memOffset] = localB->IIRgyroz_tmp[localB->j];

    /* Update for UnitDelay: '<S449>/UD' incorporates:
     *  Sum: '<S449>/Diff'
     *
     * Block description for '<S449>/UD':
     *
     *  Store in Global RAM
     *
     * Block description for '<S449>/Diff':
     *
     *  Add in CPU
     */
    localDW->UD_DSTATE[localB->j] = localB->Integrator_l[localB->j];

    /* Update for Delay: '<S437>/Delay' */
    localB->pressureFilter_IIR = localB->Reshapexhat[localB->j];
    localDW->Delay_DSTATE[localB->j] = localB->pressureFilter_IIR;

    /* Update for Delay: '<S7>/Delay1' */
    localDW->Delay1_DSTATE[localB->j] = localB->pressureFilter_IIR;

    /* Update for DiscreteIntegrator: '<S217>/Integrator' */
    localDW->Integrator_DSTATE[localB->j] += 0.005F * localB->Switch_h[localB->j];

    /* Update for DiscreteTransferFcn: '<S11>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
    localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_states
      [localB->j] =
      localB->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_tmp
      [localB->j];

    /* Update for DiscreteIntegrator: '<S108>/Integrator' */
    localDW->Integrator_DSTATE_d[localB->j] += 0.005F * localB->Switch[localB->j];

    /* Update for DiscreteIntegrator: '<S103>/Filter' */
    localDW->Filter_DSTATE[localB->j] += 0.005F * localB->Add_k[localB->j];
  }

  /* Update for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S8>/I_pr'
   */
  localDW->DiscreteTimeIntegrator_DSTATE_c += 0.24F * localB->pitchrollerror *
    0.005F;
  if (localDW->DiscreteTimeIntegrator_DSTATE_c > 2.0F) {
    localDW->DiscreteTimeIntegrator_DSTATE_c = 2.0F;
  } else if (localDW->DiscreteTimeIntegrator_DSTATE_c < -2.0F) {
    localDW->DiscreteTimeIntegrator_DSTATE_c = -2.0F;
  }

  localDW->DiscreteTimeIntegrator_PrevResetState = (int8_T)rtb_Compare_ls;

  /* End of Update for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S12>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S12>/I_yaw'
   */
  localDW->DiscreteTimeIntegrator_DSTATE_d += 0.002F * localB->Saturation_g *
    0.005F;

  /* Update for UnitDelay: '<S243>/Output' incorporates:
   *  Constant: '<S249>/FixPt Constant'
   *  Sum: '<S249>/FixPt Sum1'
   */
  localDW->Output_DSTATE_g++;
}

/* Model step function for TID0 */
void flightControlSystemIndependent_step0(void) /* Sample time: [0.005s, 0.0s] */
{
  {                                    /* Sample time: [0.005s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (flightControlSystemIndependent_DW.ControlSystem.Geofencingerror_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (flightControlSystemIndependent_DW.ControlSystem.estimatorOpticalflowerror_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (flightControlSystemIndependent_DW.ControlSystem.Noopticalflow.Noopticalflow_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_SubsysRanBC_m);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_SubsysRanBC_c);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_n.MeasurementUpdate_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_d.EnabledSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (flightControlSystemIndependent_DW.ControlSystem.TriggeredSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_SubsysRanBC);

  /* RateTransition: '<Root>/Rate Transition' */
  flightControlSystemIndependent_B.RateTransition =
    flightControlSystemIndependent_DW.RateTransition_Buffer[flightControlSystemIndependent_DW.RateTransition_ActiveBufIdx];

  /* Outputs for Atomic SubSystem: '<Root>/Control System' */

  /* Inport: '<Root>/AC cmd' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  flightControlSystemIndependent_ControlSystem(&cmd_inport, &sensor_inport,
    flightControlSystemIndependent_B.RateTransition, motors_outport,
    &flag_outport, &flightControlSystemIndependent_B.ControlSystem,
    &flightControlSystemIndependent_DW.ControlSystem,
    &flightControlSystemIndependent_PrevZCX.ControlSystem);

  /* End of Outputs for SubSystem: '<Root>/Control System' */

  /* External mode */
  rtExtModeUploadCheckTrigger(2);
  rtExtModeUpload(0, (real_T)flightControlSystemIndependent_M->Timing.taskTime0);

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(flightControlSystemIndependent_M)!=-1) &&
        !((rtmGetTFinal(flightControlSystemIndependent_M)-
           flightControlSystemIndependent_M->Timing.taskTime0) >
          flightControlSystemIndependent_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(flightControlSystemIndependent_M, "Simulation finished");
    }

    if (rtmGetStopRequested(flightControlSystemIndependent_M)) {
      rtmSetErrorStatus(flightControlSystemIndependent_M, "Simulation finished");
    }
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  flightControlSystemIndependent_M->Timing.taskTime0 =
    ((time_T)(++flightControlSystemIndependent_M->Timing.clockTick0)) *
    flightControlSystemIndependent_M->Timing.stepSize0;
}

/* Model step function for TID1 */
void flightControlSystemIndependent_step1(void) /* Sample time: [0.2s, 0.0s] */
{
  int32_T i;
  int32_T isredDetected;
  boolean_T exitg1;
  boolean_T redObjectDetected;

  /* Outputs for Atomic SubSystem: '<Root>/Image Processing System' */
  /* MATLABSystem: '<S2>/PARROT Image Conversion' incorporates:
   *  Inport: '<Root>/Image Data'
   */
  MW_Build_RGB(&imRGB[0],
               &flightControlSystemIndependent_B.PARROTImageConversion_o1[0],
               &flightControlSystemIndependent_B.PARROTImageConversion_o2[0],
               &flightControlSystemIndependent_B.PARROTImageConversion_o3[0]);

  /* MATLAB Function: '<S2>/red_detection' incorporates:
   *  MATLABSystem: '<S2>/PARROT Image Conversion'
   */
  redObjectDetected = false;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 19200)) {
    if ((flightControlSystemIndependent_B.PARROTImageConversion_o1[i] >= 100) &&
        (flightControlSystemIndependent_B.PARROTImageConversion_o2[i] <= 80) &&
        (flightControlSystemIndependent_B.PARROTImageConversion_o3[i] <= 80)) {
      redObjectDetected = true;
      exitg1 = true;
    } else {
      i++;
    }
  }

  if (redObjectDetected) {
    isredDetected = 1;
    for (i = 0; i < 19200; i++) {
      flightControlSystemIndependent_B.outputImage[i] =
        flightControlSystemIndependent_B.PARROTImageConversion_o1[i];
      flightControlSystemIndependent_B.outputImage[i + 19200] =
        flightControlSystemIndependent_B.PARROTImageConversion_o2[i];
      flightControlSystemIndependent_B.outputImage[i + 38400] =
        flightControlSystemIndependent_B.PARROTImageConversion_o3[i];
    }
  } else {
    isredDetected = 0;
    memset(&flightControlSystemIndependent_B.outputImage[0], 0, 57600U * sizeof
           (uint8_T));
  }

  /* End of MATLAB Function: '<S2>/red_detection' */

  /* MATLAB Function: '<S2>/MATLAB Function' */
  for (i = 0; i < 57600; i++) {
    if (isredDetected != 0) {
      flightControlSystemIndependent_DW.captured[i] =
        flightControlSystemIndependent_B.outputImage[i];
    }

    flightControlSystemIndependent_B.imgOut[i] =
      flightControlSystemIndependent_DW.captured[i];
  }

  /* End of MATLAB Function: '<S2>/MATLAB Function' */
  /* Switch: '<S2>/Switch' */
  if (isredDetected > 0) {
    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     */
    flightControlSystemIndependent_B.Switch = 1.0;
  } else {
    /* Switch: '<S2>/Switch' incorporates:
     *  Delay: '<S2>/Delay'
     */
    flightControlSystemIndependent_B.Switch =
      flightControlSystemIndependent_DW.Delay_DSTATE;
  }

  /* End of Switch: '<S2>/Switch' */
  /* Update for Delay: '<S2>/Delay' */
  flightControlSystemIndependent_DW.Delay_DSTATE =
    flightControlSystemIndependent_B.Switch;

  /* End of Outputs for SubSystem: '<Root>/Image Processing System' */

  /* Outport: '<Root>/detectionOutport' */
  flightControlSystemIndependent_Y.detectionOutport =
    flightControlSystemIndependent_B.Switch;

  /* RateTransition: '<Root>/Rate Transition' */
  flightControlSystemIndependent_DW.RateTransition_Buffer[flightControlSystemIndependent_DW.RateTransition_ActiveBufIdx
    == 0] = flightControlSystemIndependent_B.Switch;
  flightControlSystemIndependent_DW.RateTransition_ActiveBufIdx = (int8_T)
    (flightControlSystemIndependent_DW.RateTransition_ActiveBufIdx == 0);
  rtExtModeUpload(1, (real_T)
                  ((flightControlSystemIndependent_M->Timing.clockTick1) * 0.2));

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.2, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  flightControlSystemIndependent_M->Timing.clockTick1++;
}

/* Model initialize function */
void flightControlSystemIndependent_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(flightControlSystemIndependent_M, 100.0);
  flightControlSystemIndependent_M->Timing.stepSize0 = 0.005;

  /* External mode info */
  flightControlSystemIndependent_M->Sizes.checksums[0] = (144465316U);
  flightControlSystemIndependent_M->Sizes.checksums[1] = (4219378153U);
  flightControlSystemIndependent_M->Sizes.checksums[2] = (286412116U);
  flightControlSystemIndependent_M->Sizes.checksums[3] = (1287171430U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[27];
    flightControlSystemIndependent_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = (sysRanDType *)
      &flightControlSystemIndependent_DW.ControlSystem.Geofencingerror_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &flightControlSystemIndependent_DW.ControlSystem.Noopticalflow.Noopticalflow_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &flightControlSystemIndependent_DW.ControlSystem.Normalcondition.Noopticalflow_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &flightControlSystemIndependent_DW.ControlSystem.Ultrasoundimproper.Noopticalflow_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &flightControlSystemIndependent_DW.ControlSystem.estimatorOpticalflowerror_SubsysRanBC;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = (sysRanDType *)
      &flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_SubsysRanBC_m;
    systemRan[10] = (sysRanDType *)
      &flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_SubsysRanBC_c;
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = (sysRanDType *)
      &flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_n.MeasurementUpdate_SubsysRanBC;
    systemRan[13] = (sysRanDType *)
      &flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_d.EnabledSubsystem_SubsysRanBC;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = (sysRanDType *)
      &flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_j.MeasurementUpdate_SubsysRanBC;
    systemRan[16] = (sysRanDType *)
      &flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_n.EnabledSubsystem_SubsysRanBC;
    systemRan[17] = (sysRanDType *)
      &flightControlSystemIndependent_DW.ControlSystem.TriggeredSubsystem_SubsysRanBC;
    systemRan[18] = &rtAlwaysEnabled;
    systemRan[19] = (sysRanDType *)
      &flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_SubsysRanBC;
    systemRan[20] = (sysRanDType *)
      &flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_SubsysRanBC;
    systemRan[21] = &rtAlwaysEnabled;
    systemRan[22] = &rtAlwaysEnabled;
    systemRan[23] = &rtAlwaysEnabled;
    systemRan[24] = &rtAlwaysEnabled;
    systemRan[25] = &rtAlwaysEnabled;
    systemRan[26] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(flightControlSystemIndependent_M->extModeInfo,
      &flightControlSystemIndependent_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(flightControlSystemIndependent_M->extModeInfo,
                        flightControlSystemIndependent_M->Sizes.checksums);
    rteiSetTPtr(flightControlSystemIndependent_M->extModeInfo, rtmGetTPtr
                (flightControlSystemIndependent_M));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    flightControlSystemIndependent_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 33;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;
  }

  flightControlSystemIndependent_PrevZCX.ControlSystem.TriggeredSubsystem_Trig_ZCE
    = UNINITIALIZED_ZCSIG;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Control System' */
  flightControlSystemIndependent_ControlSystem_Init(&flag_outport,
    &flightControlSystemIndependent_DW.ControlSystem);

  /* End of SystemInitialize for SubSystem: '<Root>/Control System' */
}

/* Model terminate function */
void flightControlSystemIndependent_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
