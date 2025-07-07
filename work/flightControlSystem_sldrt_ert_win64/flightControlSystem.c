/*
 * flightControlSystem.c
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

#include "flightControlSystem.h"
#include "rtwtypes.h"
#include "flightControlSystem_types.h"
#include "flightControlSystem_private.h"
#include <math.h>
#include <emmintrin.h>
#include <xmmintrin.h>
#include "rt_nonfinite.h"
#include <string.h>
#include "zero_crossing_types.h"
#include "flightControlSystem_dt.h"

/* Named constants for MATLAB Function: '<S370>/SqrtUsedFcn' */
#define flightControlSystem_CALL_EVENT (-1)

/* Named constants for Chart: '<S5>/Chart' */
#define flightControlSystem_IN_Forloop (1U)
#define flightControlSystem_IN_Move    (1U)
#define flightControlSystem_IN_Move2   (2U)
#define flightControlSystem_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define flightControlSystem_IN_Start   (3U)
#define flightControlSystem_IN_Stop    (2U)
#define flightControlSystem_IN_Takeoff (3U)
#define flightControlSystem_IN_intial  (4U)
#define flightControlSystem_IN_land    (5U)
#define flightControlSystem_IN_land2   (6U)

/* options for Simulink Desktop Real-Time board 0 */
static double SLDRTBoardOptions0[] = {
  1.0,
  20.0,
  77.0,
  55.0,
  52.0,
  77.0,
  67.0,
  67.0,
  81.0,
  77.0,
  56.0,
  68.0,
  54.0,
  48.0,
  65.0,
  82.0,
  53.0,
  75.0,
  97.0,
  112.0,
  105.0,
  46.0,
  116.0,
  104.0,
  105.0,
  110.0,
  103.0,
  115.0,
  112.0,
  101.0,
  97.0,
  107.0,
  46.0,
  99.0,
  111.0,
  109.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
};

/* list of Simulink Desktop Real-Time timers */
const int SLDRTTimerCount = 2;
const double SLDRTTimers[4] = {
  0.005, 0.0,
  0.2, 0.0,
};

/* list of Simulink Desktop Real-Time boards */
const int SLDRTBoardCount = 1;
SLDRTBOARD SLDRTBoards[1] = {
  { "Network_Services/ThingSpeak", 2998088U, 256, SLDRTBoardOptions0 },
};

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
real32_T motors_outport[4];            /* '<S12>/MotorDirections' */
uint8_T flag_outport;                  /* '<S4>/Merge' */

/* Block signals (default storage) */
B_flightControlSystem_T flightControlSystem_B;

/* Block states (default storage) */
DW_flightControlSystem_T flightControlSystem_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_flightControlSystem_T flightControlSystem_PrevZCX;

/* Real-time model */
static RT_MODEL_flightControlSystem_T flightControlSystem_M_;
RT_MODEL_flightControlSystem_T *const flightControlSystem_M =
  &flightControlSystem_M_;

/* Forward declaration for local functions */
static real32_T flightControlSystem_rt_powf_snf(real32_T u0, real32_T u1,
  B_ControlSystem_flightControlSystem_T *localB);
static void rate_monotonic_scheduler(void);

/* Simulink Desktop Real-Time specific functions */
time_T flightControlSystem_sldrtGetTaskTime(int_T tid)
{
  switch (tid) {
   case 0 :
    return(flightControlSystem_M->Timing.taskTime0);

   case 1 :
    return(((flightControlSystem_M->Timing.clockTick1) * 0.2));
  }

  return(0.);
}

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void flightControlSystem_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(flightControlSystem_M, 1));
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
  (flightControlSystem_M->Timing.TaskCounters.TID[1])++;
  if ((flightControlSystem_M->Timing.TaskCounters.TID[1]) > 39) {/* Sample time: [0.2s, 0.0s] */
    flightControlSystem_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for action system:
 *    '<S4>/Geofencing error'
 *    '<S4>/estimator//Optical flow error'
 *    '<S4>/No optical flow '
 *    '<S4>/Ultrasound improper'
 *    '<S4>/Normal condition'
 */
void flightControlSystem_Geofencingerror(uint8_T *rty_Out1,
  P_Geofencingerror_flightControlSystem_T *localP)
{
  /* SignalConversion generated from: '<S243>/Out1' incorporates:
   *  Constant: '<S243>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;
}

/*
 * System initialize for atomic system:
 *    '<S370>/SqrtUsedFcn'
 *    '<S424>/SqrtUsedFcn'
 */
void flightControlSystem_SqrtUsedFcn_Init(DW_SqrtUsedFcn_flightControlSystem_T
  *localDW)
{
  localDW->doneDoubleBufferReInit = false;
  localDW->sfEvent = flightControlSystem_CALL_EVENT;
}

/*
 * Output and update for atomic system:
 *    '<S370>/SqrtUsedFcn'
 *    '<S424>/SqrtUsedFcn'
 */
void flightControlSystem_SqrtUsedFcn(DW_SqrtUsedFcn_flightControlSystem_T
  *localDW)
{
  localDW->sfEvent = flightControlSystem_CALL_EVENT;
}

/*
 * System initialize for enable system:
 *    '<S341>/MeasurementUpdate'
 *    '<S395>/MeasurementUpdate'
 */
void flightControlSystem_MeasurementUpdate_Init
  (B_MeasurementUpdate_flightControlSystem_T *localB,
   P_MeasurementUpdate_flightControlSystem_T *localP)
{
  /* SystemInitialize for Product: '<S372>/Product3' incorporates:
   *  Outport: '<S372>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;
  localB->Product3[1] = localP->Lykyhatkk1_Y0;
}

/*
 * Disable for enable system:
 *    '<S341>/MeasurementUpdate'
 *    '<S395>/MeasurementUpdate'
 */
void flightControlSystem_MeasurementUpdate_Disable
  (B_MeasurementUpdate_flightControlSystem_T *localB,
   DW_MeasurementUpdate_flightControlSystem_T *localDW,
   P_MeasurementUpdate_flightControlSystem_T *localP)
{
  /* Disable for Product: '<S372>/Product3' incorporates:
   *  Outport: '<S372>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;
  localB->Product3[1] = localP->Lykyhatkk1_Y0;
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S341>/MeasurementUpdate'
 *    '<S395>/MeasurementUpdate'
 */
void flightControlSystem_MeasurementUpdate(boolean_T rtu_Enable, const real32_T
  rtu_Lk[2], real32_T rtu_yk, const real32_T rtu_Ck[2], const real32_T
  rtu_xhatkk1[2], real32_T rtu_Dk, real32_T rtu_uk,
  B_MeasurementUpdate_flightControlSystem_T *localB,
  DW_MeasurementUpdate_flightControlSystem_T *localDW,
  P_MeasurementUpdate_flightControlSystem_T *localP)
{
  real32_T rtb_Sum;

  /* Outputs for Enabled SubSystem: '<S341>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S372>/Enable'
   */
  if (rtu_Enable) {
    localDW->MeasurementUpdate_MODE = true;

    /* Sum: '<S372>/Sum' incorporates:
     *  Product: '<S372>/C[k]*xhat[k|k-1]'
     *  Product: '<S372>/D[k]*u[k]'
     *  Sum: '<S372>/Add1'
     */
    rtb_Sum = rtu_yk - ((rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[1] * rtu_xhatkk1[1])
                        + rtu_Dk * rtu_uk);

    /* Product: '<S372>/Product3' */
    localB->Product3[0] = rtu_Lk[0] * rtb_Sum;
    localB->Product3[1] = rtu_Lk[1] * rtb_Sum;
    srUpdateBC(localDW->MeasurementUpdate_SubsysRanBC);
  } else if (localDW->MeasurementUpdate_MODE) {
    flightControlSystem_MeasurementUpdate_Disable(localB, localDW, localP);
  }

  /* End of Outputs for SubSystem: '<S341>/MeasurementUpdate' */
}

/*
 * System initialize for enable system:
 *    '<S348>/Enabled Subsystem'
 *    '<S402>/Enabled Subsystem'
 */
void flightControlSystem_EnabledSubsystem_Init
  (B_EnabledSubsystem_flightControlSystem_T *localB,
   P_EnabledSubsystem_flightControlSystem_T *localP)
{
  /* SystemInitialize for Product: '<S374>/Product2' incorporates:
   *  Outport: '<S374>/deltax'
   */
  localB->Product2[0] = localP->deltax_Y0;
  localB->Product2[1] = localP->deltax_Y0;
}

/*
 * Disable for enable system:
 *    '<S348>/Enabled Subsystem'
 *    '<S402>/Enabled Subsystem'
 */
void flightControlSystem_EnabledSubsystem_Disable
  (B_EnabledSubsystem_flightControlSystem_T *localB,
   DW_EnabledSubsystem_flightControlSystem_T *localDW,
   P_EnabledSubsystem_flightControlSystem_T *localP)
{
  /* Disable for Product: '<S374>/Product2' incorporates:
   *  Outport: '<S374>/deltax'
   */
  localB->Product2[0] = localP->deltax_Y0;
  localB->Product2[1] = localP->deltax_Y0;
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S348>/Enabled Subsystem'
 *    '<S402>/Enabled Subsystem'
 */
void flightControlSystem_EnabledSubsystem(boolean_T rtu_Enable, const real32_T
  rtu_Mk[2], const real32_T rtu_Ck[2], real32_T rtu_yk, const real32_T
  rtu_xhatkk1[2], B_EnabledSubsystem_flightControlSystem_T *localB,
  DW_EnabledSubsystem_flightControlSystem_T *localDW,
  P_EnabledSubsystem_flightControlSystem_T *localP)
{
  real32_T rtb_Add1;

  /* Outputs for Enabled SubSystem: '<S348>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S374>/Enable'
   */
  if (rtu_Enable) {
    localDW->EnabledSubsystem_MODE = true;

    /* Sum: '<S374>/Add1' incorporates:
     *  Product: '<S374>/Product'
     */
    rtb_Add1 = rtu_yk - (rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[1] * rtu_xhatkk1[1]);

    /* Product: '<S374>/Product2' */
    localB->Product2[0] = rtu_Mk[0] * rtb_Add1;
    localB->Product2[1] = rtu_Mk[1] * rtb_Add1;
    srUpdateBC(localDW->EnabledSubsystem_SubsysRanBC);
  } else if (localDW->EnabledSubsystem_MODE) {
    flightControlSystem_EnabledSubsystem_Disable(localB, localDW, localP);
  }

  /* End of Outputs for SubSystem: '<S348>/Enabled Subsystem' */
}

static real32_T flightControlSystem_rt_powf_snf(real32_T u0, real32_T u1,
  B_ControlSystem_flightControlSystem_T *localB)
{
  real32_T y;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else {
    localB->f = (real32_T)fabs(u0);
    localB->f1 = (real32_T)fabs(u1);
    if (rtIsInfF(u1)) {
      if (localB->f == 1.0F) {
        y = 1.0F;
      } else if (localB->f > 1.0F) {
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
    } else if (localB->f1 == 0.0F) {
      y = 1.0F;
    } else if (localB->f1 == 1.0F) {
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
void flightControlSystem_ControlSystem_Init
  (B_ControlSystem_flightControlSystem_T *localB,
   DW_ControlSystem_flightControlSystem_T *localDW,
   P_ControlSystem_flightControlSystem_T *localP)
{
  int32_T i;

  /* InitializeConditions for DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[0] =
    localP->SimplyIntegrateVelocity_IC;
  localDW->SimplyIntegrateVelocity_DSTATE[1] =
    localP->SimplyIntegrateVelocity_IC;
  localDW->SimplyIntegrateVelocity_PrevResetState = 2;

  /* InitializeConditions for Delay: '<S251>/Delay2' */
  localDW->Delay2_DSTATE = localP->Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<S255>/MemoryX' */
  localDW->icLoad = true;

  /* InitializeConditions for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[0] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[0] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[1] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[1] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[2] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[2] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteIntegrator: '<S319>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for Delay: '<S321>/MemoryX' */
  localDW->icLoad_p = true;

  /* InitializeConditions for DiscreteFir: '<S253>/FIR_IMUaccel' */
  localDW->FIR_IMUaccel_circBuf = 0;
  for (i = 0; i < 15; i++) {
    localDW->FIR_IMUaccel_states[i] = localP->FIR_IMUaccel_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFir: '<S253>/FIR_IMUaccel' */

  /* InitializeConditions for Delay: '<S375>/MemoryX' */
  localDW->icLoad_k = true;

  /* InitializeConditions for DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz1' */
  localDW->LPFFcutoff40Hz1_states = localP->LPFFcutoff40Hz1_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz' */
  localDW->LPFFcutoff40Hz_states = localP->LPFFcutoff40Hz_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S253>/IIR_IMUgyro_r' */
  for (i = 0; i < 5; i++) {
    localDW->IIR_IMUgyro_r_states[i] = localP->IIR_IMUgyro_r_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S253>/IIR_IMUgyro_r' */

  /* InitializeConditions for Sum: '<S434>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S432>/Output'
   */
  localDW->Output_DSTATE = localP->Output_InitialCondition;

  /* InitializeConditions for Delay: '<S441>/MemoryX' */
  localDW->icLoad_o = true;

  /* InitializeConditions for Sum: '<S515>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S514>/Output'
   */
  localDW->Output_DSTATE_n = localP->Output_InitialCondition_f;

  /* InitializeConditions for DiscreteFilter: '<S440>/IIRgyroz' */
  for (i = 0; i < 10; i++) {
    localDW->IIRgyroz_states[i] = localP->IIRgyroz_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S440>/IIRgyroz' */

  /* InitializeConditions for Sum: '<S15>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S14>/Output'
   */
  localDW->Output_DSTATE_a = localP->Output_InitialCondition_fi;

  /* InitializeConditions for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_c = localP->DiscreteTimeIntegrator_IC_h;
  localDW->DiscreteTimeIntegrator_PrevResetState = 2;

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_d = localP->DiscreteTimeIntegrator_IC_b;

  /* InitializeConditions for Sum: '<S248>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S242>/Output'
   */
  localDW->Output_DSTATE_g = localP->Output_InitialCondition_h;

  /* InitializeConditions for Delay: '<S4>/Delay One Step' */
  localDW->DelayOneStep_DSTATE = localP->DelayOneStep_InitialCondition;

  /* SystemInitialize for Merge: '<S4>/Merge' */
  flag_outport = localP->Merge_InitialOutput;

  /* SystemInitialize for Chart: '<S5>/Chart' */
  localDW->temporalCounter_i2 = 0U;
  localDW->temporalCounter_i1 = 0U;
  localB->Xo = 0.0;
  localB->Yo = 0.0;
  localB->Zo = 0.0;
  localDW->i = 0.0;
  localDW->is_active_c3_flightControlSystem = 0U;
  localDW->is_c3_flightControlSystem = flightControlSystem_IN_NO_ACTIVE_CHILD;
  localDW->is_Forloop = flightControlSystem_IN_NO_ACTIVE_CHILD;

  /* InitializeConditions for UnitDelay: '<S448>/UD' */
  localDW->UD_DSTATE[0] = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S436>/Delay' */
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S6>/Delay1' */
  localDW->Delay1_DSTATE[0] = localP->Delay1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S216>/Integrator' */
  localDW->Integrator_DSTATE[0] =
    localP->Velocitycontroller_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_states
    [0] =
    localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_InitialStates;

  /* InitializeConditions for DiscreteIntegrator: '<S107>/Integrator' */
  localDW->Integrator_DSTATE_d[0] =
    localP->Angularvelocitycontrolloop_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteIntegrator: '<S102>/Filter' */
  localDW->Filter_DSTATE[0] =
    localP->Angularvelocitycontrolloop_InitialConditionForFilter;

  /* SystemInitialize for Enabled SubSystem: '<S277>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S307>/Product3' incorporates:
   *  Outport: '<S307>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S277>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S283>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S309>/Product2' incorporates:
   *  Outport: '<S309>/deltax'
   */
  localB->Product2[0] = localP->deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S283>/Enabled Subsystem' */

  /* InitializeConditions for UnitDelay: '<S448>/UD' */
  localDW->UD_DSTATE[1] = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S436>/Delay' */
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S6>/Delay1' */
  localDW->Delay1_DSTATE[1] = localP->Delay1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S216>/Integrator' */
  localDW->Integrator_DSTATE[1] =
    localP->Velocitycontroller_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_states
    [1] =
    localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_InitialStates;

  /* InitializeConditions for DiscreteIntegrator: '<S107>/Integrator' */
  localDW->Integrator_DSTATE_d[1] =
    localP->Angularvelocitycontrolloop_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteIntegrator: '<S102>/Filter' */
  localDW->Filter_DSTATE[1] =
    localP->Angularvelocitycontrolloop_InitialConditionForFilter;

  /* SystemInitialize for Enabled SubSystem: '<S277>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S307>/Product3' incorporates:
   *  Outport: '<S307>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[1] = localP->Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S277>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S283>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S309>/Product2' incorporates:
   *  Outport: '<S309>/deltax'
   */
  localB->Product2[1] = localP->deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S283>/Enabled Subsystem' */

  /* SystemInitialize for MATLAB Function: '<S370>/SqrtUsedFcn' */
  flightControlSystem_SqrtUsedFcn_Init(&localDW->sf_SqrtUsedFcn_h);

  /* SystemInitialize for Enabled SubSystem: '<S341>/MeasurementUpdate' */
  flightControlSystem_MeasurementUpdate_Init(&localB->MeasurementUpdate_n,
    &localP->MeasurementUpdate_n);

  /* End of SystemInitialize for SubSystem: '<S341>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S348>/Enabled Subsystem' */
  flightControlSystem_EnabledSubsystem_Init(&localB->EnabledSubsystem_d,
    &localP->EnabledSubsystem_d);

  /* End of SystemInitialize for SubSystem: '<S348>/Enabled Subsystem' */

  /* SystemInitialize for MATLAB Function: '<S424>/SqrtUsedFcn' */
  flightControlSystem_SqrtUsedFcn_Init(&localDW->sf_SqrtUsedFcn_e);

  /* SystemInitialize for Enabled SubSystem: '<S395>/MeasurementUpdate' */
  flightControlSystem_MeasurementUpdate_Init(&localB->MeasurementUpdate_j,
    &localP->MeasurementUpdate_j);

  /* End of SystemInitialize for SubSystem: '<S395>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S402>/Enabled Subsystem' */
  flightControlSystem_EnabledSubsystem_Init(&localB->EnabledSubsystem_n,
    &localP->EnabledSubsystem_n);

  /* End of SystemInitialize for SubSystem: '<S402>/Enabled Subsystem' */

  /* SystemInitialize for Triggered SubSystem: '<S429>/Triggered Subsystem' */
  /* SystemInitialize for SignalConversion generated from: '<S433>/In1' incorporates:
   *  Outport: '<S433>/Out1'
   */
  localB->In1 = localP->Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S429>/Triggered Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S479>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S510>/Product3' incorporates:
   *  Outport: '<S510>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3_a[0] = localP->Lykyhatkk1_Y0_c;

  /* End of SystemInitialize for SubSystem: '<S479>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S486>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S512>/Product2' incorporates:
   *  Outport: '<S512>/deltax'
   */
  localB->Product2_k[0] = localP->deltax_Y0_k;

  /* End of SystemInitialize for SubSystem: '<S486>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S479>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S510>/Product3' incorporates:
   *  Outport: '<S510>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3_a[1] = localP->Lykyhatkk1_Y0_c;

  /* End of SystemInitialize for SubSystem: '<S479>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S486>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S512>/Product2' incorporates:
   *  Outport: '<S512>/deltax'
   */
  localB->Product2_k[1] = localP->deltax_Y0_k;

  /* End of SystemInitialize for SubSystem: '<S486>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S479>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S510>/Product3' incorporates:
   *  Outport: '<S510>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3_a[2] = localP->Lykyhatkk1_Y0_c;

  /* End of SystemInitialize for SubSystem: '<S479>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S486>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S512>/Product2' incorporates:
   *  Outport: '<S512>/deltax'
   */
  localB->Product2_k[2] = localP->deltax_Y0_k;

  /* End of SystemInitialize for SubSystem: '<S486>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S479>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S510>/Product3' incorporates:
   *  Outport: '<S510>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3_a[3] = localP->Lykyhatkk1_Y0_c;

  /* End of SystemInitialize for SubSystem: '<S479>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S486>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S512>/Product2' incorporates:
   *  Outport: '<S512>/deltax'
   */
  localB->Product2_k[3] = localP->deltax_Y0_k;

  /* End of SystemInitialize for SubSystem: '<S486>/Enabled Subsystem' */
}

/* Outputs for atomic system: '<Root>/Control System' */
void flightControlSystem_ControlSystem(const CommandBus
  *rtu_ReferenceValueServerCmds, const SensorsBus *rtu_Sensors, real_T
  rtu_VisionbasedData, B_ControlSystem_flightControlSystem_T *localB,
  DW_ControlSystem_flightControlSystem_T *localDW,
  P_ControlSystem_flightControlSystem_T *localP,
  ZCE_ControlSystem_flightControlSystem_T *localZCE)
{
  __m128 tmp;
  __m128d tmp_0;

  /* DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity' incorporates:
   *  Constant: '<S1>/controlModePosVsOrient'
   */
  if (localP->controlModePosVsOrient_Value &&
      (localDW->SimplyIntegrateVelocity_PrevResetState <= 0)) {
    localDW->SimplyIntegrateVelocity_DSTATE[0] =
      localP->SimplyIntegrateVelocity_IC;
    localDW->SimplyIntegrateVelocity_DSTATE[1] =
      localP->SimplyIntegrateVelocity_IC;
  }

  /* DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity' */
  localB->SimplyIntegrateVelocity[0] = localDW->SimplyIntegrateVelocity_DSTATE[0];
  localB->SimplyIntegrateVelocity[1] = localDW->SimplyIntegrateVelocity_DSTATE[1];

  /* RelationalOperator: '<S258>/Compare' incorporates:
   *  Constant: '<S258>/Constant'
   *  Delay: '<S251>/Delay2'
   */
  localB->Compare = (localDW->Delay2_DSTATE > localP->outlierBelowFloor_const);

  /* Delay: '<S255>/MemoryX' incorporates:
   *  Constant: '<S255>/X0'
   *  DataTypeConversion: '<S255>/DataTypeConversionReset'
   *  Reshape: '<S255>/ReshapeX0'
   */
  localDW->icLoad = (localB->Compare || localDW->icLoad);
  if (localDW->icLoad) {
    localDW->MemoryX_DSTATE[0] = localP->X0_Value[0];
    localDW->MemoryX_DSTATE[1] = localP->X0_Value[1];
  }

  /* Gain: '<S251>/invertzaxisGain' */
  localB->invertzaxisGain = (real_T)localP->invertzaxisGain_Gain *
    rtu_Sensors->HALSensors.HAL_ultrasound_SI.altitude;

  /* Saturate: '<S256>/SaturationSonar' */
  if (localB->invertzaxisGain > -flightControlSystem_P.Sensors.altSensorMin) {
    localB->u_h = -flightControlSystem_P.Sensors.altSensorMin;
  } else if (localB->invertzaxisGain < localP->SaturationSonar_LowerSat) {
    localB->u_h = localP->SaturationSonar_LowerSat;
  } else {
    localB->u_h = localB->invertzaxisGain;
  }

  /* End of Saturate: '<S256>/SaturationSonar' */

  /* Abs: '<S256>/Absestdiff' incorporates:
   *  Delay: '<S251>/Delay2'
   *  Sum: '<S256>/Add'
   */
  localB->u_h = fabs(localDW->Delay2_DSTATE - localB->u_h);

  /* DataTypeConversion: '<S253>/Data Type Conversion' */
  for (localB->i = 0; localB->i < 8; localB->i++) {
    localB->DataTypeConversion_m[localB->i] = rtu_Sensors->
      SensorCalibration[localB->i];
  }

  /* End of DataTypeConversion: '<S253>/Data Type Conversion' */

  /* Sum: '<S253>/Sum2' */
  localB->pressureFilter_IIR = rtu_Sensors->HALSensors.HAL_pressure_SI.pressure
    - localB->DataTypeConversion_m[6];

  /* DiscreteFilter: '<S256>/pressureFilter_IIR' incorporates:
   *  Gain: '<S251>/prsToAltGain'
   */
  localDW->pressureFilter_IIR_tmp = (((localP->prsToAltGain_Gain *
    localB->pressureFilter_IIR - localDW->pressureFilter_IIR_states[0] *
    localP->pressureFilter_IIR_DenCoef[1]) - localDW->pressureFilter_IIR_states
    [1] * localP->pressureFilter_IIR_DenCoef[2]) -
    localDW->pressureFilter_IIR_states[2] * localP->pressureFilter_IIR_DenCoef[3])
    / localP->pressureFilter_IIR_DenCoef[0];
  localB->pressureFilter_IIR = ((localP->pressureFilter_IIR_NumCoef[0] *
    localDW->pressureFilter_IIR_tmp + localDW->pressureFilter_IIR_states[0] *
    localP->pressureFilter_IIR_NumCoef[1]) + localDW->pressureFilter_IIR_states
    [1] * localP->pressureFilter_IIR_NumCoef[2]) +
    localDW->pressureFilter_IIR_states[2] * localP->pressureFilter_IIR_NumCoef[3];

  /* Abs: '<S256>/Absestdiff1' incorporates:
   *  Delay: '<S251>/Delay2'
   *  DiscreteFilter: '<S256>/pressureFilter_IIR'
   *  Sum: '<S256>/Add1'
   */
  localB->u_h_c = fabs(localB->pressureFilter_IIR - localDW->Delay2_DSTATE);

  /* DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_tmp = (((localB->invertzaxisGain -
    localDW->sonarFilter_IIR_states[0] * localP->sonarFilter_IIR_DenCoef[1]) -
    localDW->sonarFilter_IIR_states[1] * localP->sonarFilter_IIR_DenCoef[2]) -
    localDW->sonarFilter_IIR_states[2] * localP->sonarFilter_IIR_DenCoef[3]) /
    localP->sonarFilter_IIR_DenCoef[0];

  /* Sum: '<S256>/Add2' incorporates:
   *  Delay: '<S251>/Delay2'
   *  DiscreteFilter: '<S256>/sonarFilter_IIR'
   */
  localDW->Delay2_DSTATE = (((localP->sonarFilter_IIR_NumCoef[0] *
    localDW->sonarFilter_IIR_tmp + localDW->sonarFilter_IIR_states[0] *
    localP->sonarFilter_IIR_NumCoef[1]) + localDW->sonarFilter_IIR_states[1] *
    localP->sonarFilter_IIR_NumCoef[2]) + localDW->sonarFilter_IIR_states[2] *
    localP->sonarFilter_IIR_NumCoef[3]) - localDW->Delay2_DSTATE;

  /* Abs: '<S256>/Absestdiff2' incorporates:
   *  Delay: '<S251>/Delay2'
   */
  localDW->Delay2_DSTATE = fabs(localDW->Delay2_DSTATE);

  /* Logic: '<S256>/nicemeasurementor newupdateneeded' incorporates:
   *  Constant: '<S310>/Constant'
   *  Constant: '<S311>/Constant'
   *  Constant: '<S312>/Constant'
   *  Constant: '<S313>/Constant'
   *  Delay: '<S251>/Delay2'
   *  Logic: '<S256>/NOT'
   *  Logic: '<S256>/findingoutliers'
   *  Logic: '<S256>/newupdateneeded'
   *  RelationalOperator: '<S310>/Compare'
   *  RelationalOperator: '<S311>/Compare'
   *  RelationalOperator: '<S312>/Compare'
   *  RelationalOperator: '<S313>/Compare'
   */
  localB->nicemeasurementornewupdateneeded = ((localB->u_h <=
    localP->outlierJump_const) && (localB->invertzaxisGain <
    -flightControlSystem_P.Sensors.altSensorMin) && ((!(localB->u_h_c >=
    localP->currentEstimateVeryOffFromPressure_const)) ||
    (!(localDW->Delay2_DSTATE >= localP->currentStateVeryOffsonarflt_const))));

  /* Outputs for Enabled SubSystem: '<S283>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S309>/Enable'
   */
  /* DataTypeConversion: '<S255>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S255>/C'
   *  Constant: '<S259>/KalmanGainM'
   *  DataTypeConversion: '<S300>/Conversion'
   *  Delay: '<S255>/MemoryX'
   *  Product: '<S309>/Product'
   *  Product: '<S309>/Product2'
   *  Reshape: '<S255>/Reshapey'
   *  Sum: '<S309>/Add1'
   */
  if (localB->nicemeasurementornewupdateneeded) {
    localDW->EnabledSubsystem_MODE_l = true;
    _mm_storeu_pd(&localB->Product2[0], _mm_mul_pd(_mm_loadu_pd
      (&localP->KalmanGainM_Value[0]), _mm_set1_pd(localB->invertzaxisGain -
      (localP->C_Value[0] * localDW->MemoryX_DSTATE[0] + localP->C_Value[1] *
       localDW->MemoryX_DSTATE[1]))));
    srUpdateBC(localDW->EnabledSubsystem_SubsysRanBC_c);
  } else if (localDW->EnabledSubsystem_MODE_l) {
    /* Disable for Product: '<S309>/Product2' incorporates:
     *  Outport: '<S309>/deltax'
     */
    localB->Product2[0] = localP->deltax_Y0;
    localB->Product2[1] = localP->deltax_Y0;
    localDW->EnabledSubsystem_MODE_l = false;
  }

  /* End of Outputs for SubSystem: '<S283>/Enabled Subsystem' */

  /* Sum: '<S283>/Add' incorporates:
   *  Delay: '<S255>/MemoryX'
   */
  tmp_0 = _mm_add_pd(_mm_loadu_pd(&localB->Product2[0]), _mm_loadu_pd
                     (&localDW->MemoryX_DSTATE[0]));

  /* Reshape: '<S255>/Reshapexhat' */
  _mm_storeu_pd(&localB->Reshapexhat[0], tmp_0);

  /* DataTypeConversion: '<S251>/Data Type Conversion' */
  localB->DataTypeConversion = (real32_T)localB->Reshapexhat[0];

  /* Delay: '<S321>/MemoryX' incorporates:
   *  Constant: '<S321>/X0'
   *  Reshape: '<S321>/ReshapeX0'
   */
  if (localDW->icLoad_p) {
    localDW->MemoryX_DSTATE_g[0] = localP->X0_Value_i[0];
    localDW->MemoryX_DSTATE_g[1] = localP->X0_Value_i[1];
  }

  /* Bias: '<S253>/Assuming that the  preflight calibration was done at level orientation' */
  for (localB->i = 0; localB->i <= 0; localB->i += 4) {
    tmp = _mm_loadu_ps(&localB->DataTypeConversion_m[localB->i]);
    _mm_storeu_ps(&localB->Sum1_p[localB->i], _mm_add_ps(tmp, _mm_loadu_ps
      (&localP->Assumingthatthepreflightcalibrationwasdoneatlevelorientation_Bias
       [localB->i])));
  }

  for (localB->i = 4; localB->i < 6; localB->i++) {
    localB->Sum1_p[localB->i] = localB->DataTypeConversion_m[localB->i] +
      localP->
      Assumingthatthepreflightcalibrationwasdoneatlevelorientation_Bias
      [localB->i];
  }

  /* End of Bias: '<S253>/Assuming that the  preflight calibration was done at level orientation' */

  /* Sum: '<S253>/Sum1' */
  localB->inverseIMU_gain[0] = rtu_Sensors->HALSensors.HAL_acc_SI.x -
    localB->Sum1_p[0];
  localB->inverseIMU_gain[1] = rtu_Sensors->HALSensors.HAL_acc_SI.y -
    localB->Sum1_p[1];
  localB->inverseIMU_gain[2] = rtu_Sensors->HALSensors.HAL_acc_SI.z -
    localB->Sum1_p[2];
  localB->inverseIMU_gain[3] = rtu_Sensors->HALSensors.HAL_gyro_SI.x -
    localB->Sum1_p[3];
  localB->inverseIMU_gain[4] = rtu_Sensors->HALSensors.HAL_gyro_SI.y -
    localB->Sum1_p[4];
  localB->inverseIMU_gain[5] = rtu_Sensors->HALSensors.HAL_gyro_SI.z -
    localB->Sum1_p[5];
  for (localB->j = 0; localB->j <= 0; localB->j += 4) {
    /* Gain: '<S253>/inverseIMU_gain' */
    tmp = _mm_loadu_ps(&localB->inverseIMU_gain[localB->j]);

    /* Gain: '<S253>/inverseIMU_gain' incorporates:
     *  Sum: '<S253>/Sum1'
     */
    _mm_storeu_ps(&localB->inverseIMU_gain[localB->j], _mm_mul_ps(_mm_loadu_ps
      (&localP->inverseIMU_gain_Gain[localB->j]), tmp));
  }

  for (localB->j = 4; localB->j < 6; localB->j++) {
    /* Gain: '<S253>/inverseIMU_gain' incorporates:
     *  Sum: '<S253>/Sum1'
     */
    localB->inverseIMU_gain[localB->j] *= localP->inverseIMU_gain_Gain[localB->j];
  }

  /* DiscreteFir: '<S253>/FIR_IMUaccel' */
  localB->Abs = localB->inverseIMU_gain[0] * localP->FIR_IMUaccel_Coefficients[0];
  localB->i = 1;
  localB->j = localDW->FIR_IMUaccel_circBuf;
  while (localB->j < 5) {
    localB->Abs += localDW->FIR_IMUaccel_states[localB->j] *
      localP->FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->j = 0;
  while (localB->j < localDW->FIR_IMUaccel_circBuf) {
    localB->Abs += localDW->FIR_IMUaccel_states[localB->j] *
      localP->FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->FIR_IMUaccel[0] = localB->Abs;

  /* Math: '<S320>/Math Function' incorporates:
   *  Constant: '<S320>/Constant'
   *  DiscreteFir: '<S253>/FIR_IMUaccel'
   */
  localB->rtb_Switch_p = (real32_T)floor(localP->Constant_Value_h);
  if ((localB->Abs < 0.0F) && (localP->Constant_Value_h > localB->rtb_Switch_p))
  {
    localB->rtb_Switch_c = -flightControlSystem_rt_powf_snf(-localB->Abs,
      localP->Constant_Value_h, localB);
  } else {
    localB->rtb_Switch_c = flightControlSystem_rt_powf_snf(localB->Abs,
      localP->Constant_Value_h, localB);
  }

  /* DiscreteFir: '<S253>/FIR_IMUaccel' */
  localB->Abs = localP->FIR_IMUaccel_Coefficients[0] * localB->inverseIMU_gain[1];
  localB->i = 1;
  localB->j = localDW->FIR_IMUaccel_circBuf;
  while (localB->j < 5) {
    localB->Abs += localDW->FIR_IMUaccel_states[localB->j + 5] *
      localP->FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->j = 0;
  while (localB->j < localDW->FIR_IMUaccel_circBuf) {
    localB->Abs += localDW->FIR_IMUaccel_states[localB->j + 5] *
      localP->FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->FIR_IMUaccel[1] = localB->Abs;

  /* Math: '<S320>/Math Function' incorporates:
   *  Constant: '<S320>/Constant'
   *  DiscreteFir: '<S253>/FIR_IMUaccel'
   */
  if ((localB->Abs < 0.0F) && (localP->Constant_Value_h > localB->rtb_Switch_p))
  {
    localB->Abs_b = -flightControlSystem_rt_powf_snf(-localB->Abs,
      localP->Constant_Value_h, localB);
  } else {
    localB->Abs_b = flightControlSystem_rt_powf_snf(localB->Abs,
      localP->Constant_Value_h, localB);
  }

  /* DiscreteFir: '<S253>/FIR_IMUaccel' */
  localB->Abs = localP->FIR_IMUaccel_Coefficients[0] * localB->inverseIMU_gain[2];
  localB->i = 1;
  localB->j = localDW->FIR_IMUaccel_circBuf;
  while (localB->j < 5) {
    localB->Abs += localDW->FIR_IMUaccel_states[localB->j + 10] *
      localP->FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->j = 0;
  while (localB->j < localDW->FIR_IMUaccel_circBuf) {
    localB->Abs += localDW->FIR_IMUaccel_states[localB->j + 10] *
      localP->FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->FIR_IMUaccel[2] = localB->Abs;

  /* Gain: '<S317>/Gain2' */
  localB->pitchrollerror = localP->Gain2_Gain * localB->FIR_IMUaccel[0];

  /* Trigonometry: '<S317>/Trigonometric Function1' */
  if (localB->pitchrollerror > 1.0F) {
    localB->pitchrollerror = 1.0F;
  } else if (localB->pitchrollerror < -1.0F) {
    localB->pitchrollerror = -1.0F;
  }

  /* Trigonometry: '<S317>/Trigonometric Function1' */
  localB->TrigonometricFunction1 = (real32_T)asin(localB->pitchrollerror);

  /* Math: '<S320>/Math Function' incorporates:
   *  Constant: '<S320>/Constant'
   *  DiscreteFir: '<S253>/FIR_IMUaccel'
   */
  if ((localB->Abs < 0.0F) && (localP->Constant_Value_h > localB->rtb_Switch_p))
  {
    localB->pitchrollerror = -flightControlSystem_rt_powf_snf(-localB->Abs,
      localP->Constant_Value_h, localB);
  } else {
    localB->pitchrollerror = flightControlSystem_rt_powf_snf(localB->Abs,
      localP->Constant_Value_h, localB);
  }

  /* Sqrt: '<S320>/Sqrt' incorporates:
   *  Math: '<S320>/Math Function'
   *  Sum: '<S320>/Sum of Elements'
   */
  localB->pitchrollerror = (real32_T)sqrt((localB->rtb_Switch_c + localB->Abs_b)
    + localB->pitchrollerror);

  /* Logic: '<S252>/Logical Operator' incorporates:
   *  Constant: '<S315>/Constant'
   *  Constant: '<S316>/Constant'
   *  RelationalOperator: '<S315>/Compare'
   *  RelationalOperator: '<S316>/Compare'
   */
  localB->LogicalOperator = (int16_T)((localB->pitchrollerror >
    localP->CompareToConstant_const) && (localB->pitchrollerror <
    localP->CompareToConstant1_const));

  /* DataTypeConversion: '<S365>/Conversion' incorporates:
   *  Constant: '<S322>/KalmanGainM'
   */
  localB->Conversion_g[0] = (real32_T)localP->KalmanGainM_Value_l[0];
  localB->Conversion_g[1] = (real32_T)localP->KalmanGainM_Value_l[1];

  /* Outputs for Enabled SubSystem: '<S348>/Enabled Subsystem' */
  /* DataTypeConversion: '<S321>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S321>/C'
   *  Delay: '<S321>/MemoryX'
   *  Reshape: '<S321>/Reshapey'
   */
  flightControlSystem_EnabledSubsystem((localB->LogicalOperator != 0),
    localB->Conversion_g, localP->C_Value_h, localB->TrigonometricFunction1,
    localDW->MemoryX_DSTATE_g, &localB->EnabledSubsystem_d,
    &localDW->EnabledSubsystem_d, &localP->EnabledSubsystem_d);

  /* End of Outputs for SubSystem: '<S348>/Enabled Subsystem' */

  /* Delay: '<S375>/MemoryX' incorporates:
   *  Constant: '<S375>/X0'
   *  Reshape: '<S375>/ReshapeX0'
   */
  if (localDW->icLoad_k) {
    localDW->MemoryX_DSTATE_m[0] = localP->X0_Value_iy[0];
    localDW->MemoryX_DSTATE_m[1] = localP->X0_Value_iy[1];
  }

  /* Trigonometry: '<S318>/Trigonometric Function' incorporates:
   *  DiscreteFir: '<S253>/FIR_IMUaccel'
   *  Product: '<S318>/Divide'
   */
  localB->TrigonometricFunction = (real32_T)atan(localB->FIR_IMUaccel[1] /
    localB->Abs);

  /* DataTypeConversion: '<S419>/Conversion' incorporates:
   *  Constant: '<S376>/KalmanGainM'
   */
  localB->Conversion_g[0] = (real32_T)localP->KalmanGainM_Value_a[0];
  localB->Conversion_g[1] = (real32_T)localP->KalmanGainM_Value_a[1];

  /* Outputs for Enabled SubSystem: '<S402>/Enabled Subsystem' */
  /* DataTypeConversion: '<S375>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S375>/C'
   *  Delay: '<S375>/MemoryX'
   *  Reshape: '<S375>/Reshapey'
   */
  flightControlSystem_EnabledSubsystem((localB->LogicalOperator != 0),
    localB->Conversion_g, localP->C_Value_i, localB->TrigonometricFunction,
    localDW->MemoryX_DSTATE_m, &localB->EnabledSubsystem_n,
    &localDW->EnabledSubsystem_n, &localP->EnabledSubsystem_n);

  /* End of Outputs for SubSystem: '<S402>/Enabled Subsystem' */

  /* DataTypeConversion: '<S252>/Data Type Conversion3' incorporates:
   *  Delay: '<S321>/MemoryX'
   *  Delay: '<S375>/MemoryX'
   *  DiscreteIntegrator: '<S319>/Discrete-Time Integrator'
   *  Sum: '<S348>/Add'
   *  Sum: '<S402>/Add'
   */
  localB->DataTypeConversion3[0] = localDW->DiscreteTimeIntegrator_DSTATE;
  localB->DataTypeConversion3[1] = localB->EnabledSubsystem_d.Product2[0] +
    localDW->MemoryX_DSTATE_g[0];
  localB->DataTypeConversion3[2] = localB->EnabledSubsystem_n.Product2[0] +
    localDW->MemoryX_DSTATE_m[0];

  /* DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz1' */
  localDW->LPFFcutoff40Hz1_tmp = (localB->inverseIMU_gain[3] -
    localP->LPFFcutoff40Hz1_DenCoef[1] * localDW->LPFFcutoff40Hz1_states) /
    localP->LPFFcutoff40Hz1_DenCoef[0];

  /* DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz1' */
  localB->p = localP->LPFFcutoff40Hz1_NumCoef[0] * localDW->LPFFcutoff40Hz1_tmp
    + localP->LPFFcutoff40Hz1_NumCoef[1] * localDW->LPFFcutoff40Hz1_states;

  /* DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz' */
  localDW->LPFFcutoff40Hz_tmp = (localB->inverseIMU_gain[4] -
    localP->LPFFcutoff40Hz_DenCoef[1] * localDW->LPFFcutoff40Hz_states) /
    localP->LPFFcutoff40Hz_DenCoef[0];

  /* DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz' */
  localB->q = localP->LPFFcutoff40Hz_NumCoef[0] * localDW->LPFFcutoff40Hz_tmp +
    localP->LPFFcutoff40Hz_NumCoef[1] * localDW->LPFFcutoff40Hz_states;

  /* DiscreteFilter: '<S253>/IIR_IMUgyro_r' */
  localB->pitchrollerror = localB->inverseIMU_gain[5];
  for (localB->j = 0; localB->j < 5; localB->j++) {
    localB->pitchrollerror -= localP->IIR_IMUgyro_r_DenCoef[localB->j + 1] *
      localDW->IIR_IMUgyro_r_states[localB->j];
  }

  localDW->IIR_IMUgyro_r_tmp = localB->pitchrollerror /
    localP->IIR_IMUgyro_r_DenCoef[0];
  localB->rtb_sincos_o1_idx_0 = localP->IIR_IMUgyro_r_NumCoef[0] *
    localDW->IIR_IMUgyro_r_tmp;
  for (localB->j = 0; localB->j < 5; localB->j++) {
    localB->rtb_sincos_o1_idx_0 += localP->IIR_IMUgyro_r_NumCoef[localB->j + 1] *
      localDW->IIR_IMUgyro_r_states[localB->j];
  }

  /* RelationalOperator: '<S431>/Compare' incorporates:
   *  Constant: '<S431>/Constant'
   *  UnitDelay: '<S432>/Output'
   */
  localB->Compare_jk = (localDW->Output_DSTATE ==
                        localP->CompareToConstant_const_l);

  /* Outputs for Triggered SubSystem: '<S429>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S433>/Trigger'
   */
  if (((localZCE->TriggeredSubsystem_Trig_ZCE == POS_ZCSIG) != (int32_T)
       localB->Compare_jk) && (localZCE->TriggeredSubsystem_Trig_ZCE !=
       UNINITIALIZED_ZCSIG)) {
    /* SignalConversion generated from: '<S433>/In1' */
    localB->In1 = rtu_Sensors->HALSensors.HAL_gyro_SI.temperature;
    localDW->TriggeredSubsystem_SubsysRanBC = 4;
  }

  localZCE->TriggeredSubsystem_Trig_ZCE = localB->Compare_jk;

  /* End of Outputs for SubSystem: '<S429>/Triggered Subsystem' */

  /* Sum: '<S429>/Subtract' */
  localB->pitchrollerror = rtu_Sensors->HALSensors.HAL_gyro_SI.temperature -
    localB->In1;

  /* ManualSwitch: '<S429>/Disable temperature compensation' incorporates:
   *  Constant: '<S429>/Constant'
   *  Gain: '<S429>/Gain'
   */
  if (localP->Disabletemperaturecompensation_CurrentSetting == 1) {
    localB->u_h = localP->Gain_Gain * localB->pitchrollerror;
  } else {
    localB->u_h = localP->Constant_Value;
  }

  /* End of ManualSwitch: '<S429>/Disable temperature compensation' */

  /* Sum: '<S429>/Subtract1' incorporates:
   *  DataTypeConversion: '<S429>/Data Type Conversion1'
   *  DiscreteFilter: '<S253>/IIR_IMUgyro_r'
   */
  localB->r = localB->rtb_sincos_o1_idx_0 - (real32_T)localB->u_h;

  /* Sum: '<S252>/Subtract' incorporates:
   *  Constant: '<S319>/Constant'
   *  Delay: '<S321>/MemoryX'
   *  Delay: '<S375>/MemoryX'
   *  Sum: '<S348>/Add'
   *  Sum: '<S402>/Add'
   */
  localB->Subtract[0] = localB->p - (localB->EnabledSubsystem_n.Product2[1] +
    localDW->MemoryX_DSTATE_m[1]);
  localB->Subtract[1] = localB->q - (localB->EnabledSubsystem_d.Product2[1] +
    localDW->MemoryX_DSTATE_g[1]);
  localB->Subtract[2] = localB->r - localP->Constant_Value_j;

  /* Delay: '<S441>/MemoryX' incorporates:
   *  Constant: '<S441>/X0'
   *  Reshape: '<S441>/ReshapeX0'
   */
  if (localDW->icLoad_o) {
    localDW->MemoryX_DSTATE_l[0] = localP->X0_Value_c[0];
    localDW->MemoryX_DSTATE_l[1] = localP->X0_Value_c[1];
    localDW->MemoryX_DSTATE_l[2] = localP->X0_Value_c[2];
    localDW->MemoryX_DSTATE_l[3] = localP->X0_Value_c[3];
  }

  /* RelationalOperator: '<S513>/Compare' incorporates:
   *  Constant: '<S513>/Constant'
   *  UnitDelay: '<S514>/Output'
   */
  localB->Compare_jk = (localDW->Output_DSTATE_n <
                        localP->CompareToConstant_const_h);

  /* Gain: '<S442>/Gain' */
  localB->pitchrollerror = localP->Gain_Gain_p * localB->DataTypeConversion;

  /* Product: '<S442>/ ' */
  localB->rtb_Switch_c = rtu_Sensors->VisionSensors.opticalFlow_data[0] *
    localB->pitchrollerror;

  /* Switch: '<S442>/Switch' incorporates:
   *  Gain: '<S442>/opticalFlowErrorCorrect'
   */
  if (localB->Compare_jk) {
    localB->Abs_b = rtu_Sensors->VisionSensors.opticalFlow_data[0];
  } else {
    localB->Abs_b = localP->opticalFlowErrorCorrect_Gain * localB->rtb_Switch_c;
  }

  localB->Switch_k[0] = localB->Abs_b;

  /* Product: '<S442>/ ' */
  localB->rtb_Switch_c = rtu_Sensors->VisionSensors.opticalFlow_data[1] *
    localB->pitchrollerror;

  /* Switch: '<S442>/Switch' incorporates:
   *  Gain: '<S442>/opticalFlowErrorCorrect'
   */
  if (localB->Compare_jk) {
    localB->rtb_Switch_p = rtu_Sensors->VisionSensors.opticalFlow_data[1];
  } else {
    localB->rtb_Switch_p = localP->opticalFlowErrorCorrect_Gain *
      localB->rtb_Switch_c;
  }

  localB->Switch_k[1] = localB->rtb_Switch_p;

  /* Product: '<S442>/ ' */
  localB->rtb_Switch_c = rtu_Sensors->VisionSensors.opticalFlow_data[2] *
    localB->pitchrollerror;

  /* Switch: '<S442>/Switch' incorporates:
   *  Gain: '<S442>/opticalFlowErrorCorrect'
   */
  if (localB->Compare_jk) {
    localB->Switch_k[2] = rtu_Sensors->VisionSensors.opticalFlow_data[2];
  } else {
    localB->Switch_k[2] = localP->opticalFlowErrorCorrect_Gain *
      localB->rtb_Switch_c;
  }

  /* Abs: '<S439>/Abs' */
  localB->pitchrollerror = (real32_T)fabs(localB->DataTypeConversion);

  /* DataTypeConversion: '<S439>/Data Type Conversion' incorporates:
   *  Gain: '<S439>/Gain1'
   *  Product: '<S439>/prod'
   */
  localB->Integrator_l[0] = localB->pitchrollerror * localB->Subtract[1] *
    localP->Gain1_Gain;
  localB->Integrator_l[1] = localB->pitchrollerror * localB->Subtract[0];

  /* SignalConversion generated from: '<S440>/IIRgyroz' */
  localB->Conversion_g[0] = localB->p;
  localB->Conversion_g[1] = localB->q;
  for (localB->i = 0; localB->i < 2; localB->i++) {
    /* Sum: '<S436>/angular velocity compensation' */
    localB->rtb_Switch_c = localB->Switch_k[localB->i];

    /* Sum: '<S436>/angular velocity compensation' */
    localB->angularvelocitycompensation[localB->i] = localB->rtb_Switch_c +
      localB->Integrator_l[localB->i];

    /* DiscreteFilter: '<S440>/IIRgyroz' */
    localB->memOffset = localB->i * 5;
    localB->pitchrollerror = localB->Conversion_g[localB->i];
    for (localB->j = 0; localB->j < 5; localB->j++) {
      localB->pitchrollerror -= localP->IIRgyroz_DenCoef[localB->j + 1] *
        localDW->IIRgyroz_states[localB->memOffset + localB->j];
    }

    localB->pitchrollerror /= localP->IIRgyroz_DenCoef[0];
    localDW->IIRgyroz_tmp[localB->i] = localB->pitchrollerror;
    localB->rtb_sincos_o1_idx_0 = localP->IIRgyroz_NumCoef[0] *
      localB->pitchrollerror;
    for (localB->j = 0; localB->j < 5; localB->j++) {
      localB->rtb_sincos_o1_idx_0 += localP->IIRgyroz_NumCoef[localB->j + 1] *
        localDW->IIRgyroz_states[localB->memOffset + localB->j];
    }

    /* SampleTimeMath: '<S448>/TSamp' incorporates:
     *  DiscreteFilter: '<S440>/IIRgyroz'
     *
     * About '<S448>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     *   */
    localB->pitchrollerror = localB->rtb_sincos_o1_idx_0 * localP->TSamp_WtEt;
    localB->TSamp[localB->i] = localB->pitchrollerror;

    /* Sum: '<S448>/Diff' incorporates:
     *  UnitDelay: '<S448>/UD'
     */
    localB->Conversion_g[localB->i] = localB->pitchrollerror -
      localDW->UD_DSTATE[localB->i];

    /* Sum: '<S440>/Add' incorporates:
     *  Delay: '<S436>/Delay'
     */
    localB->Integrator_l[localB->i] = localB->rtb_Switch_c -
      localDW->Delay_DSTATE[localB->i];
  }

  /* Abs: '<S440>/Abs' incorporates:
   *  Abs: '<S440>/Abs4'
   */
  localB->pitchrollerror = (real32_T)fabs(localB->p);

  /* Abs: '<S440>/Abs1' incorporates:
   *  Abs: '<S440>/Abs5'
   */
  localB->rtb_Switch_c = (real32_T)fabs(localB->q);

  /* Logic: '<S440>/Logical Operator3' incorporates:
   *  Abs: '<S440>/Abs'
   *  Abs: '<S440>/Abs1'
   *  Abs: '<S440>/Abs2'
   *  Abs: '<S440>/Abs3'
   *  Abs: '<S440>/Abs6'
   *  Abs: '<S440>/Abs7'
   *  Abs: '<S440>/Abs8'
   *  Abs: '<S440>/Abs9'
   *  Constant: '<S449>/Constant'
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
   *  Logic: '<S440>/Logical Operator'
   *  Logic: '<S440>/Logical Operator1'
   *  Logic: '<S440>/Logical Operator2'
   *  RelationalOperator: '<S449>/Compare'
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
   */
  localB->LogicalOperator3 = (((((real32_T)fabs(localB->DataTypeConversion3[1]) <=
    localP->maxp_const) && ((real32_T)fabs(localB->DataTypeConversion3[2]) <=
    localP->maxq_const) && (localB->pitchrollerror <= localP->maxw1_const) &&
    (localB->rtb_Switch_c <= localP->maxw2_const) && ((real32_T)fabs
    (localB->Conversion_g[0]) <= localP->maxdw1_const) && ((real32_T)fabs
    (localB->Conversion_g[1]) <= localP->maxdw2_const)) ||
    ((localB->pitchrollerror <= localP->maxp2_const) && (localB->rtb_Switch_c <=
    localP->maxq2_const))) && ((real32_T)fabs(localB->Integrator_l[0]) <=
    localP->maxw3_const) && ((real32_T)fabs(localB->Integrator_l[1]) <=
    localP->maxw4_const) && (localB->DataTypeConversion <=
    localP->minHeightforOF_const));

  /* Outputs for Enabled SubSystem: '<S486>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S512>/Enable'
   */
  /* DataTypeConversion: '<S441>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S441>/C'
   *  Constant: '<S460>/KalmanGainM'
   *  DataTypeConversion: '<S503>/Conversion'
   *  Delay: '<S441>/MemoryX'
   *  Product: '<S512>/Product'
   *  Product: '<S512>/Product2'
   *  Reshape: '<S441>/Reshapey'
   *  Sum: '<S512>/Add1'
   */
  if (localB->LogicalOperator3) {
    localDW->EnabledSubsystem_MODE = true;

    /* Delay: '<S441>/MemoryX' incorporates:
     *  Constant: '<S441>/C'
     *  Product: '<S512>/Product'
     */
    localB->pitchrollerror = localDW->MemoryX_DSTATE_l[1];
    localB->rtb_Switch_c = localDW->MemoryX_DSTATE_l[0];
    localB->rtb_sincos_o1_idx_0 = localDW->MemoryX_DSTATE_l[2];
    localB->rtb_sincos_o1_idx_1 = localDW->MemoryX_DSTATE_l[3];
    for (localB->j = 0; localB->j < 2; localB->j++) {
      localB->Conversion_g[localB->j] = localB->
        angularvelocitycompensation[localB->j] - (((localP->C_Value_i2[localB->j
        + 2] * localB->pitchrollerror + localP->C_Value_i2[localB->j] *
        localB->rtb_Switch_c) + localP->C_Value_i2[localB->j + 4] *
        localB->rtb_sincos_o1_idx_0) + localP->C_Value_i2[localB->j + 6] *
        localB->rtb_sincos_o1_idx_1);
    }

    /* Product: '<S512>/Product2' incorporates:
     *  Constant: '<S441>/C'
     *  Constant: '<S460>/KalmanGainM'
     *  DataTypeConversion: '<S503>/Conversion'
     *  Delay: '<S441>/MemoryX'
     *  Product: '<S512>/Product'
     *  Reshape: '<S441>/Reshapey'
     *  Sum: '<S512>/Add1'
     */
    localB->pitchrollerror = localB->Conversion_g[1];
    localB->rtb_Switch_c = localB->Conversion_g[0];
    for (localB->j = 0; localB->j <= 0; localB->j += 4) {
      _mm_storeu_ps(&localB->Product2_k[localB->j], _mm_add_ps(_mm_mul_ps
        (_mm_set_ps((real32_T)localP->KalmanGainM_Value_i[localB->j + 7],
                    (real32_T)localP->KalmanGainM_Value_i[localB->j + 6],
                    (real32_T)localP->KalmanGainM_Value_i[localB->j + 5],
                    (real32_T)localP->KalmanGainM_Value_i[localB->j + 4]),
         _mm_set1_ps(localB->pitchrollerror)), _mm_mul_ps(_mm_set_ps((real32_T)
        localP->KalmanGainM_Value_i[localB->j + 3], (real32_T)
        localP->KalmanGainM_Value_i[localB->j + 2], (real32_T)
        localP->KalmanGainM_Value_i[localB->j + 1], (real32_T)
        localP->KalmanGainM_Value_i[localB->j]), _mm_set1_ps
        (localB->rtb_Switch_c))));
    }

    srUpdateBC(localDW->EnabledSubsystem_SubsysRanBC);
  } else if (localDW->EnabledSubsystem_MODE) {
    /* Disable for Product: '<S512>/Product2' incorporates:
     *  Outport: '<S512>/deltax'
     */
    localB->Product2_k[0] = localP->deltax_Y0_k;
    localB->Product2_k[1] = localP->deltax_Y0_k;
    localB->Product2_k[2] = localP->deltax_Y0_k;
    localB->Product2_k[3] = localP->deltax_Y0_k;
    localDW->EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S486>/Enabled Subsystem' */

  /* Sum: '<S486>/Add' incorporates:
   *  Delay: '<S441>/MemoryX'
   */
  tmp = _mm_add_ps(_mm_loadu_ps(&localB->Product2_k[0]), _mm_loadu_ps
                   (&localDW->MemoryX_DSTATE_l[0]));

  /* Reshape: '<S441>/Reshapexhat' */
  _mm_storeu_ps(&localB->Reshapexhat_d[0], tmp);

  /* Trigonometry: '<S257>/sincos' incorporates:
   *  MATLAB Function: '<S10>/Position error transformation (Earth to Body frame)'
   *  Trigonometry: '<S517>/sincos'
   */
  localB->rtb_sincos_o1_idx_0_tmp = (real32_T)sin(localB->DataTypeConversion3[0]);
  localB->rtb_DataTypeConversion_e_tmp = (real32_T)cos
    (localB->DataTypeConversion3[0]);
  localB->rtb_sincos_o1_idx_0 = (real32_T)sin(localB->DataTypeConversion3[1]);
  localB->rtb_sincos_o1_idx_1 = (real32_T)cos(localB->DataTypeConversion3[1]);
  localB->rtb_sincos_o1_idx_2 = (real32_T)sin(localB->DataTypeConversion3[2]);
  localB->rtb_DataTypeConversion_e_tmp_f = (real32_T)cos
    (localB->DataTypeConversion3[2]);

  /* Fcn: '<S257>/Fcn11' incorporates:
   *  Trigonometry: '<S257>/sincos'
   */
  localB->VectorConcatenate[0] = localB->rtb_DataTypeConversion_e_tmp *
    localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S257>/Fcn21' incorporates:
   *  Fcn: '<S257>/Fcn22'
   *  Trigonometry: '<S257>/sincos'
   */
  localB->pitchrollerror = localB->rtb_sincos_o1_idx_0 *
    localB->rtb_sincos_o1_idx_2;
  localB->VectorConcatenate[1] = localB->pitchrollerror *
    localB->rtb_DataTypeConversion_e_tmp - localB->rtb_sincos_o1_idx_0_tmp *
    localB->rtb_DataTypeConversion_e_tmp_f;

  /* Fcn: '<S257>/Fcn31' incorporates:
   *  Fcn: '<S257>/Fcn32'
   *  Trigonometry: '<S257>/sincos'
   */
  localB->rtb_Switch_c = localB->rtb_sincos_o1_idx_0 *
    localB->rtb_DataTypeConversion_e_tmp_f;
  localB->VectorConcatenate[2] = localB->rtb_Switch_c *
    localB->rtb_DataTypeConversion_e_tmp + localB->rtb_sincos_o1_idx_0_tmp *
    localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S257>/Fcn12' incorporates:
   *  Trigonometry: '<S257>/sincos'
   */
  localB->VectorConcatenate[3] = localB->rtb_sincos_o1_idx_0_tmp *
    localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S257>/Fcn22' incorporates:
   *  Trigonometry: '<S257>/sincos'
   */
  localB->VectorConcatenate[4] = localB->pitchrollerror *
    localB->rtb_sincos_o1_idx_0_tmp + localB->rtb_DataTypeConversion_e_tmp *
    localB->rtb_DataTypeConversion_e_tmp_f;

  /* Fcn: '<S257>/Fcn32' incorporates:
   *  Trigonometry: '<S257>/sincos'
   */
  localB->VectorConcatenate[5] = localB->rtb_Switch_c *
    localB->rtb_sincos_o1_idx_0_tmp - localB->rtb_DataTypeConversion_e_tmp *
    localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S257>/Fcn13' incorporates:
   *  Trigonometry: '<S257>/sincos'
   */
  localB->VectorConcatenate[6] = -localB->rtb_sincos_o1_idx_0;

  /* Fcn: '<S257>/Fcn23' incorporates:
   *  Trigonometry: '<S257>/sincos'
   */
  localB->VectorConcatenate[7] = localB->rtb_sincos_o1_idx_1 *
    localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S257>/Fcn33' incorporates:
   *  Trigonometry: '<S257>/sincos'
   */
  localB->VectorConcatenate[8] = localB->rtb_sincos_o1_idx_1 *
    localB->rtb_DataTypeConversion_e_tmp_f;

  /* SignalConversion generated from: '<S251>/Product1' incorporates:
   *  Delay: '<S6>/Delay1'
   */
  localB->u_h = localDW->Delay1_DSTATE[0];
  localB->u_h_c = localDW->Delay1_DSTATE[1];
  localB->unnamed_idx_2 = localB->Reshapexhat[1];

  /* Product: '<S251>/Product1' incorporates:
   *  Reshape: '<S314>/Reshape (9) to [3x3] column-major'
   */
  for (localB->j = 0; localB->j <= 0; localB->j += 2) {
    _mm_storeu_pd(&localB->rtb_VectorConcatenate_c[localB->j], _mm_add_pd
                  (_mm_add_pd(_mm_mul_pd(_mm_set_pd(localB->
      VectorConcatenate[localB->j + 4], localB->VectorConcatenate[localB->j + 3]),
      _mm_set1_pd(localB->u_h_c)), _mm_mul_pd(_mm_set_pd
      (localB->VectorConcatenate[localB->j + 1], localB->
       VectorConcatenate[localB->j]), _mm_set1_pd(localB->u_h))), _mm_mul_pd
                   (_mm_set_pd(localB->VectorConcatenate[localB->j + 7],
      localB->VectorConcatenate[localB->j + 6]), _mm_set1_pd
                    (localB->unnamed_idx_2))));
  }

  for (localB->j = 2; localB->j < 3; localB->j++) {
    localB->rtb_VectorConcatenate_c[localB->j] = (localB->
      VectorConcatenate[localB->j + 3] * localB->u_h_c +
      localB->VectorConcatenate[localB->j] * localB->u_h) +
      localB->VectorConcatenate[localB->j + 6] * localB->unnamed_idx_2;
  }

  /* End of Product: '<S251>/Product1' */

  /* DataTypeConversion: '<S251>/Data Type Conversion2' */
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
  localB->TmpSignalConversionAtToWorkspaceInport1[6] = localB->Reshapexhat_d[0];
  localB->TmpSignalConversionAtToWorkspaceInport1[7] = localB->Reshapexhat_d[1];
  localB->TmpSignalConversionAtToWorkspaceInport1[8] =
    localB->DataTypeConversion2;
  localB->TmpSignalConversionAtToWorkspaceInport1[9] = localB->Subtract[0];
  localB->TmpSignalConversionAtToWorkspaceInport1[10] = localB->Subtract[1];
  localB->TmpSignalConversionAtToWorkspaceInport1[11] = localB->Subtract[2];
  for (localB->j = 0; localB->j < 3; localB->j++) {
    /* Math: '<S251>/Math Function' incorporates:
     *  Reshape: '<S314>/Reshape (9) to [3x3] column-major'
     */
    localB->MathFunction[3 * localB->j] = localB->VectorConcatenate[localB->j];
    localB->MathFunction[3 * localB->j + 1] = localB->VectorConcatenate
      [localB->j + 3];
    localB->MathFunction[3 * localB->j + 2] = localB->VectorConcatenate
      [localB->j + 6];

    /* Trigonometry: '<S444>/sincos' */
    localB->DataTypeConversion_e[localB->j] = (real32_T)sin
      (localB->DataTypeConversion3[localB->j]);
    localB->sincos_o2[localB->j] = (real32_T)cos(localB->
      DataTypeConversion3[localB->j]);
  }

  /* Fcn: '<S444>/Fcn11' */
  localB->VectorConcatenate[0] = localB->sincos_o2[0] * localB->sincos_o2[1];

  /* Fcn: '<S444>/Fcn21' incorporates:
   *  Fcn: '<S444>/Fcn22'
   */
  localB->pitchrollerror = localB->DataTypeConversion_e[1] *
    localB->DataTypeConversion_e[2];
  localB->VectorConcatenate[1] = localB->pitchrollerror * localB->sincos_o2[0] -
    localB->DataTypeConversion_e[0] * localB->sincos_o2[2];

  /* Fcn: '<S444>/Fcn31' incorporates:
   *  Fcn: '<S444>/Fcn32'
   */
  localB->rtb_Switch_c = localB->DataTypeConversion_e[1] * localB->sincos_o2[2];
  localB->VectorConcatenate[2] = localB->rtb_Switch_c * localB->sincos_o2[0] +
    localB->DataTypeConversion_e[0] * localB->DataTypeConversion_e[2];

  /* Fcn: '<S444>/Fcn12' */
  localB->VectorConcatenate[3] = localB->DataTypeConversion_e[0] *
    localB->sincos_o2[1];

  /* Fcn: '<S444>/Fcn22' */
  localB->VectorConcatenate[4] = localB->pitchrollerror *
    localB->DataTypeConversion_e[0] + localB->sincos_o2[0] * localB->sincos_o2[2];

  /* Fcn: '<S444>/Fcn32' */
  localB->VectorConcatenate[5] = localB->rtb_Switch_c *
    localB->DataTypeConversion_e[0] - localB->sincos_o2[0] *
    localB->DataTypeConversion_e[2];

  /* Fcn: '<S444>/Fcn13' */
  localB->VectorConcatenate[6] = -localB->DataTypeConversion_e[1];

  /* Fcn: '<S444>/Fcn23' */
  localB->VectorConcatenate[7] = localB->sincos_o2[1] *
    localB->DataTypeConversion_e[2];

  /* Fcn: '<S444>/Fcn33' */
  localB->VectorConcatenate[8] = localB->sincos_o2[1] * localB->sincos_o2[2];

  /* Reshape: '<S447>/Reshape (9) to [3x3] column-major' */
  for (localB->i = 0; localB->i < 9; localB->i++) {
    localB->Reshape9to3x3columnmajor[localB->i] = localB->
      VectorConcatenate[localB->i];
  }

  /* End of Reshape: '<S447>/Reshape (9) to [3x3] column-major' */

  /* Fcn: '<S517>/Fcn11' */
  localB->VectorConcatenate[0] = localB->rtb_DataTypeConversion_e_tmp *
    localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S517>/Fcn21' incorporates:
   *  Fcn: '<S517>/Fcn22'
   */
  localB->pitchrollerror = localB->rtb_sincos_o1_idx_0 *
    localB->rtb_sincos_o1_idx_2;
  localB->VectorConcatenate[1] = localB->pitchrollerror *
    localB->rtb_DataTypeConversion_e_tmp - localB->rtb_sincos_o1_idx_0_tmp *
    localB->rtb_DataTypeConversion_e_tmp_f;

  /* Fcn: '<S517>/Fcn31' incorporates:
   *  Fcn: '<S517>/Fcn32'
   */
  localB->rtb_Switch_c = localB->rtb_sincos_o1_idx_0 *
    localB->rtb_DataTypeConversion_e_tmp_f;
  localB->VectorConcatenate[2] = localB->rtb_Switch_c *
    localB->rtb_DataTypeConversion_e_tmp + localB->rtb_sincos_o1_idx_0_tmp *
    localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S517>/Fcn12' */
  localB->VectorConcatenate[3] = localB->rtb_sincos_o1_idx_0_tmp *
    localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S517>/Fcn22' */
  localB->VectorConcatenate[4] = localB->pitchrollerror *
    localB->rtb_sincos_o1_idx_0_tmp + localB->rtb_DataTypeConversion_e_tmp *
    localB->rtb_DataTypeConversion_e_tmp_f;

  /* Fcn: '<S517>/Fcn32' */
  localB->VectorConcatenate[5] = localB->rtb_Switch_c *
    localB->rtb_sincos_o1_idx_0_tmp - localB->rtb_DataTypeConversion_e_tmp *
    localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S517>/Fcn13' */
  localB->VectorConcatenate[6] = -localB->rtb_sincos_o1_idx_0;

  /* Fcn: '<S517>/Fcn23' */
  localB->VectorConcatenate[7] = localB->rtb_sincos_o1_idx_1 *
    localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S517>/Fcn33' */
  localB->VectorConcatenate[8] = localB->rtb_sincos_o1_idx_1 *
    localB->rtb_DataTypeConversion_e_tmp_f;

  /* RelationalOperator: '<S443>/Compare' incorporates:
   *  Constant: '<S443>/Constant'
   */
  localB->Compare_jk = (localB->DataTypeConversion <=
                        localP->DeactivateAccelerationIfOFisnotusedduetolowaltitude_const);

  /* Logic: '<S438>/Logical Operator' incorporates:
   *  Constant: '<S445>/Constant'
   *  Constant: '<S446>/Constant'
   *  RelationalOperator: '<S445>/Compare'
   *  RelationalOperator: '<S446>/Compare'
   *  Switch: '<S442>/Switch'
   */
  localB->Compare_jkn = ((localB->Abs_b !=
    localP->donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_const) ||
    (localB->rtb_Switch_p !=
     localP->donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_const));

  /* Product: '<S438>/Product1' incorporates:
   *  Constant: '<S438>/gravity'
   */
  localB->u_h = localP->gravity_Value[1];
  localB->u_h_c = localP->gravity_Value[0];
  localB->unnamed_idx_2 = localP->gravity_Value[2];

  /* Sum: '<S438>/Add' incorporates:
   *  Constant: '<S438>/gravity'
   *  Product: '<S438>/Product1'
   *  Reshape: '<S447>/Reshape (9) to [3x3] column-major'
   */
  for (localB->j = 0; localB->j <= 0; localB->j += 2) {
    _mm_storeu_pd(&localB->rtb_VectorConcatenate_c[localB->j], _mm_sub_pd
                  (_mm_set_pd(localB->FIR_IMUaccel[localB->j + 1],
      localB->FIR_IMUaccel[localB->j]), _mm_add_pd(_mm_add_pd(_mm_mul_pd
      (_mm_set_pd(localB->Reshape9to3x3columnmajor[localB->j + 4],
                  localB->Reshape9to3x3columnmajor[localB->j + 3]), _mm_set1_pd
       (localB->u_h)), _mm_mul_pd(_mm_set_pd(localB->
      Reshape9to3x3columnmajor[localB->j + 1], localB->
      Reshape9to3x3columnmajor[localB->j]), _mm_set1_pd(localB->u_h_c))),
      _mm_mul_pd(_mm_set_pd(localB->Reshape9to3x3columnmajor[localB->j + 7],
      localB->Reshape9to3x3columnmajor[localB->j + 6]), _mm_set1_pd
                 (localB->unnamed_idx_2)))));
  }

  for (localB->j = 2; localB->j < 3; localB->j++) {
    localB->rtb_VectorConcatenate_c[localB->j] = localB->FIR_IMUaccel[localB->j]
      - ((localB->Reshape9to3x3columnmajor[localB->j + 3] * localB->u_h +
          localB->Reshape9to3x3columnmajor[localB->j] * localB->u_h_c) +
         localB->Reshape9to3x3columnmajor[localB->j + 6] * localB->unnamed_idx_2);
  }

  /* End of Sum: '<S438>/Add' */

  /* Product: '<S438>/Product' incorporates:
   *  Gain: '<S438>/gainaccinput1'
   */
  localB->Product[0] = (real32_T)(localP->gainaccinput1_Gain *
    localB->rtb_VectorConcatenate_c[0]) * (real32_T)localB->Compare_jkn *
    (real32_T)localB->Compare_jk;
  localB->Product[1] = (real32_T)(localP->gainaccinput1_Gain *
    localB->rtb_VectorConcatenate_c[1]) * (real32_T)localB->Compare_jkn *
    (real32_T)localB->Compare_jk;

  /* Outputs for Enabled SubSystem: '<S479>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S510>/Enable'
   */
  /* DataTypeConversion: '<S441>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S441>/C'
   *  Constant: '<S441>/D'
   *  Constant: '<S460>/KalmanGainL'
   *  DataTypeConversion: '<S502>/Conversion'
   *  Delay: '<S441>/MemoryX'
   *  Product: '<S510>/C[k]*xhat[k|k-1]'
   *  Product: '<S510>/D[k]*u[k]'
   *  Product: '<S510>/Product3'
   *  Reshape: '<S441>/Reshapeu'
   *  Reshape: '<S441>/Reshapey'
   *  Sum: '<S510>/Add1'
   *  Sum: '<S510>/Sum'
   */
  if (localB->LogicalOperator3) {
    localDW->MeasurementUpdate_MODE = true;

    /* Delay: '<S441>/MemoryX' incorporates:
     *  Constant: '<S441>/C'
     *  Product: '<S510>/C[k]*xhat[k|k-1]'
     */
    localB->pitchrollerror = localDW->MemoryX_DSTATE_l[1];
    localB->rtb_Switch_c = localDW->MemoryX_DSTATE_l[0];
    localB->rtb_sincos_o1_idx_0 = localDW->MemoryX_DSTATE_l[2];
    localB->rtb_sincos_o1_idx_1 = localDW->MemoryX_DSTATE_l[3];

    /* Reshape: '<S441>/Reshapeu' incorporates:
     *  Constant: '<S441>/D'
     *  Product: '<S510>/D[k]*u[k]'
     */
    localB->Abs_b = localB->Product[1];
    localB->rtb_Switch_p = localB->Product[0];
    for (localB->j = 0; localB->j < 2; localB->j++) {
      localB->Conversion_g[localB->j] = localB->
        angularvelocitycompensation[localB->j] - ((((localP->C_Value_i2
        [localB->j + 2] * localB->pitchrollerror + localP->C_Value_i2[localB->j]
        * localB->rtb_Switch_c) + localP->C_Value_i2[localB->j + 4] *
        localB->rtb_sincos_o1_idx_0) + localP->C_Value_i2[localB->j + 6] *
        localB->rtb_sincos_o1_idx_1) + (localP->D_Value_h[localB->j + 2] *
        localB->Abs_b + localP->D_Value_h[localB->j] * localB->rtb_Switch_p));
    }

    /* Product: '<S510>/Product3' incorporates:
     *  Constant: '<S441>/C'
     *  Constant: '<S441>/D'
     *  Constant: '<S460>/KalmanGainL'
     *  DataTypeConversion: '<S502>/Conversion'
     *  Delay: '<S441>/MemoryX'
     *  Product: '<S510>/C[k]*xhat[k|k-1]'
     *  Product: '<S510>/D[k]*u[k]'
     *  Reshape: '<S441>/Reshapeu'
     *  Reshape: '<S441>/Reshapey'
     *  Sum: '<S510>/Add1'
     *  Sum: '<S510>/Sum'
     */
    localB->pitchrollerror = localB->Conversion_g[1];
    localB->rtb_Switch_c = localB->Conversion_g[0];
    for (localB->j = 0; localB->j <= 0; localB->j += 4) {
      _mm_storeu_ps(&localB->Product3_a[localB->j], _mm_add_ps(_mm_mul_ps
        (_mm_set_ps((real32_T)localP->KalmanGainL_Value[localB->j + 7],
                    (real32_T)localP->KalmanGainL_Value[localB->j + 6],
                    (real32_T)localP->KalmanGainL_Value[localB->j + 5],
                    (real32_T)localP->KalmanGainL_Value[localB->j + 4]),
         _mm_set1_ps(localB->pitchrollerror)), _mm_mul_ps(_mm_set_ps((real32_T)
        localP->KalmanGainL_Value[localB->j + 3], (real32_T)
        localP->KalmanGainL_Value[localB->j + 2], (real32_T)
        localP->KalmanGainL_Value[localB->j + 1], (real32_T)
        localP->KalmanGainL_Value[localB->j]), _mm_set1_ps(localB->rtb_Switch_c))));
    }

    srUpdateBC(localDW->MeasurementUpdate_SubsysRanBC);
  } else if (localDW->MeasurementUpdate_MODE) {
    /* Disable for Product: '<S510>/Product3' incorporates:
     *  Outport: '<S510>/L*(y[k]-yhat[k|k-1])'
     */
    localB->Product3_a[0] = localP->Lykyhatkk1_Y0_c;
    localB->Product3_a[1] = localP->Lykyhatkk1_Y0_c;
    localB->Product3_a[2] = localP->Lykyhatkk1_Y0_c;
    localB->Product3_a[3] = localP->Lykyhatkk1_Y0_c;
    localDW->MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S479>/MeasurementUpdate' */

  /* Delay: '<S441>/MemoryX' incorporates:
   *  Constant: '<S441>/A'
   *  Product: '<S479>/A[k]*xhat[k|k-1]'
   */
  localB->pitchrollerror = localDW->MemoryX_DSTATE_l[1];
  localB->rtb_Switch_c = localDW->MemoryX_DSTATE_l[0];
  localB->rtb_sincos_o1_idx_0 = localDW->MemoryX_DSTATE_l[2];
  localB->rtb_sincos_o1_idx_1 = localDW->MemoryX_DSTATE_l[3];

  /* Reshape: '<S441>/Reshapeu' incorporates:
   *  Constant: '<S441>/B'
   *  Product: '<S479>/B[k]*u[k]'
   */
  localB->Abs_b = localB->Product[1];
  localB->rtb_Switch_p = localB->Product[0];
  for (localB->j = 0; localB->j <= 0; localB->j += 4) {
    /* Sum: '<S479>/Add' incorporates:
     *  Reshape: '<S479>/Reshape'
     */
    tmp = _mm_loadu_ps(&localB->Product3_a[localB->j]);

    /* Reshape: '<S479>/Reshape' incorporates:
     *  Constant: '<S441>/A'
     *  Constant: '<S441>/B'
     *  Delay: '<S441>/MemoryX'
     *  Product: '<S479>/A[k]*xhat[k|k-1]'
     *  Product: '<S479>/B[k]*u[k]'
     *  Reshape: '<S441>/Reshapeu'
     *  Sum: '<S479>/Add'
     */
    _mm_storeu_ps(&localB->Reshape_k[localB->j], _mm_add_ps(_mm_add_ps
      (_mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_loadu_ps
      (&localP->A_Value_a[localB->j + 4]), _mm_set1_ps(localB->pitchrollerror)),
      _mm_mul_ps(_mm_loadu_ps(&localP->A_Value_a[localB->j]), _mm_set1_ps
                 (localB->rtb_Switch_c))), _mm_mul_ps(_mm_loadu_ps
      (&localP->A_Value_a[localB->j + 8]), _mm_set1_ps
      (localB->rtb_sincos_o1_idx_0))), _mm_mul_ps(_mm_loadu_ps
      (&localP->A_Value_a[localB->j + 12]), _mm_set1_ps
      (localB->rtb_sincos_o1_idx_1))), _mm_add_ps(_mm_mul_ps(_mm_loadu_ps
      (&localP->B_Value_f[localB->j + 4]), _mm_set1_ps(localB->Abs_b)),
      _mm_mul_ps(_mm_loadu_ps(&localP->B_Value_f[localB->j]), _mm_set1_ps
                 (localB->rtb_Switch_p)))), tmp));
  }

  /* BusAssignment: '<S1>/Control Mode Update' incorporates:
   *  BusAssignment: '<S5>/Bus  Assignment'
   */
  localB->Switch_k[0] = rtu_ReferenceValueServerCmds->orient_ref[0];
  localB->Switch_k[1] = rtu_ReferenceValueServerCmds->orient_ref[1];
  localB->Switch_k[2] = rtu_ReferenceValueServerCmds->orient_ref[2];

  /* DataTypeConversion: '<S5>/Cast To Double' */
  localB->CastToDouble = localB->SimplyIntegrateVelocity[0];

  /* DataTypeConversion: '<S5>/Cast To Double1' */
  localB->CastToDouble1 = localB->SimplyIntegrateVelocity[1];

  /* Chart: '<S5>/Chart' */
  if (localDW->temporalCounter_i1 < 2047) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->temporalCounter_i2 < 1023) {
    localDW->temporalCounter_i2++;
  }

  if (localDW->is_active_c3_flightControlSystem == 0) {
    localDW->is_active_c3_flightControlSystem = 1U;
    localDW->is_c3_flightControlSystem = flightControlSystem_IN_Takeoff;
    localB->Xo = 0.0;
    localB->Yo = 0.0;
    localB->Zo = -0.9;
  } else {
    switch (localDW->is_c3_flightControlSystem) {
     case flightControlSystem_IN_Forloop:
      if (rtu_VisionbasedData == 1.0) {
        localDW->is_Forloop = flightControlSystem_IN_NO_ACTIVE_CHILD;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c3_flightControlSystem = flightControlSystem_IN_Stop;
      } else if ((localDW->temporalCounter_i2 >= 1000) && (localDW->i == 15.0))
      {
        localDW->is_Forloop = flightControlSystem_IN_NO_ACTIVE_CHILD;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c3_flightControlSystem = flightControlSystem_IN_intial;
      } else {
        switch (localDW->is_Forloop) {
         case flightControlSystem_IN_Move:
          if (localDW->temporalCounter_i1 >= 1600) {
            localB->Xo = flightControlSystem_P.U[(int32_T)localDW->i + 13];
            localB->Yo = flightControlSystem_P.U[(int32_T)localDW->i - 1];
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Forloop = flightControlSystem_IN_Move2;
          } else {
            localB->Xo = flightControlSystem_P.U[(int32_T)localDW->i + 13];
            localB->Yo = flightControlSystem_P.U[(int32_T)localDW->i - 1];
            localB->Zo = -0.9;
            if (rtu_VisionbasedData >= 1.0) {
              localB->Xo = localB->CastToDouble;
              localB->Yo = localB->CastToDouble1;
            }
          }
          break;

         case flightControlSystem_IN_Move2:
          if (localDW->temporalCounter_i1 >= 400) {
            localDW->i++;
            localDW->is_Forloop = flightControlSystem_IN_Start;
          } else {
            localB->Xo = localB->CastToDouble;
            localB->Yo = localB->CastToDouble1;
            localB->Zo = -0.9;
          }
          break;

         default:
          /* case IN_Start: */
          if (localDW->i < 15.0) {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Forloop = flightControlSystem_IN_Move;
          } else {
            localB->Xo = flightControlSystem_P.U[(int32_T)localDW->i + 13];
            localB->Yo = flightControlSystem_P.U[(int32_T)localDW->i - 1];
            localB->Zo = -0.9;
          }
          break;
        }
      }
      break;

     case flightControlSystem_IN_Stop:
      if (localDW->temporalCounter_i1 >= 2000) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c3_flightControlSystem = flightControlSystem_IN_intial;
      } else {
        localB->Xo = localB->CastToDouble;
        localB->Yo = localB->CastToDouble1;
        localB->Zo = -0.9;
      }
      break;

     case flightControlSystem_IN_Takeoff:
      localDW->i = 1.0;
      localDW->temporalCounter_i2 = 0U;
      localDW->is_c3_flightControlSystem = flightControlSystem_IN_Forloop;
      localDW->is_Forloop = flightControlSystem_IN_Start;
      break;

     case flightControlSystem_IN_intial:
      if (localDW->temporalCounter_i1 >= 1000) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c3_flightControlSystem = flightControlSystem_IN_land;
      } else {
        localB->Xo = 0.0;
        localB->Yo = 0.0;
        localB->Zo = -0.9;
      }
      break;

     case flightControlSystem_IN_land:
      if (localDW->temporalCounter_i1 >= 1000) {
        localDW->is_c3_flightControlSystem = flightControlSystem_IN_land2;
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

  /* End of Chart: '<S5>/Chart' */

  /* Sum: '<S10>/Sum1' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   */
  localB->rtb_sincos_o1_idx_2 = (real32_T)localB->Xo -
    localB->SimplyIntegrateVelocity[0];
  localB->rtb_DataTypeConversion_e_tmp_f = (real32_T)localB->Yo -
    localB->SimplyIntegrateVelocity[1];

  /* Saturate: '<S169>/Saturation' incorporates:
   *  Gain: '<S167>/Proportional Gain'
   *  MATLAB Function: '<S10>/Position error transformation (Earth to Body frame)'
   */
  localB->SaturationThrust1 = (localB->rtb_DataTypeConversion_e_tmp *
    localB->rtb_sincos_o1_idx_2 + localB->rtb_sincos_o1_idx_0_tmp *
    localB->rtb_DataTypeConversion_e_tmp_f) * localP->Positioncontroller_P;
  if (localB->SaturationThrust1 >
      localP->Positioncontroller_UpperSaturationLimit) {
    localB->SaturationThrust1 = localP->Positioncontroller_UpperSaturationLimit;
  } else if (localB->SaturationThrust1 <
             localP->Positioncontroller_LowerSaturationLimit) {
    localB->SaturationThrust1 = localP->Positioncontroller_LowerSaturationLimit;
  }

  /* Sum: '<S10>/Sum19' incorporates:
   *  Gain: '<S167>/Proportional Gain'
   */
  localB->Abs_b = localB->SaturationThrust1 - localB->Reshapexhat_d[0];
  localB->Conversion_g[0] = localB->Abs_b;

  /* Sum: '<S225>/Sum' incorporates:
   *  DiscreteIntegrator: '<S216>/Integrator'
   *  Gain: '<S221>/Proportional Gain'
   */
  localB->rtb_Switch_p = localP->Velocitycontroller_P * localB->Abs_b +
    localDW->Integrator_DSTATE[0];
  localB->Integrator_l[0] = localB->rtb_Switch_p;

  /* Saturate: '<S223>/Saturation' */
  if (localB->rtb_Switch_p > localP->Velocitycontroller_UpperSaturationLimit) {
    /* Saturate: '<S223>/Saturation' */
    localB->rtb_Switch_c = localP->Velocitycontroller_UpperSaturationLimit;
  } else if (localB->rtb_Switch_p <
             localP->Velocitycontroller_LowerSaturationLimit) {
    /* Saturate: '<S223>/Saturation' */
    localB->rtb_Switch_c = localP->Velocitycontroller_LowerSaturationLimit;
  } else {
    /* Saturate: '<S223>/Saturation' */
    localB->rtb_Switch_c = localB->rtb_Switch_p;
  }

  /* DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localB->rtb_Switch_c = (localB->rtb_Switch_c -
    localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_states
    [0] *
    localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_DenCoef
    [1]) /
    localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_DenCoef
    [0];
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_tmp
    [0] = localB->rtb_Switch_c;

  /* Gain: '<S10>/Gain' incorporates:
   *  DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller'
   */
  localB->rtb_sincos_o1_idx_0 =
    (localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_NumCoef
     [0] * localB->rtb_Switch_c +
     localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_states
     [0] *
     localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_NumCoef
     [1]) * localP->Gain_Gain_c[0];

  /* Saturate: '<S169>/Saturation' incorporates:
   *  Gain: '<S167>/Proportional Gain'
   *  MATLAB Function: '<S10>/Position error transformation (Earth to Body frame)'
   */
  localB->SaturationThrust1 = (-localB->rtb_sincos_o1_idx_0_tmp *
    localB->rtb_sincos_o1_idx_2 + localB->rtb_DataTypeConversion_e_tmp *
    localB->rtb_DataTypeConversion_e_tmp_f) * localP->Positioncontroller_P;
  if (localB->SaturationThrust1 >
      localP->Positioncontroller_UpperSaturationLimit) {
    localB->SaturationThrust1 = localP->Positioncontroller_UpperSaturationLimit;
  } else if (localB->SaturationThrust1 <
             localP->Positioncontroller_LowerSaturationLimit) {
    localB->SaturationThrust1 = localP->Positioncontroller_LowerSaturationLimit;
  }

  /* Sum: '<S10>/Sum19' incorporates:
   *  Gain: '<S167>/Proportional Gain'
   */
  localB->Abs_b = localB->SaturationThrust1 - localB->Reshapexhat_d[1];

  /* Sum: '<S225>/Sum' incorporates:
   *  DiscreteIntegrator: '<S216>/Integrator'
   *  Gain: '<S221>/Proportional Gain'
   */
  localB->rtb_Switch_p = localP->Velocitycontroller_P * localB->Abs_b +
    localDW->Integrator_DSTATE[1];

  /* Saturate: '<S223>/Saturation' */
  if (localB->rtb_Switch_p > localP->Velocitycontroller_UpperSaturationLimit) {
    /* Saturate: '<S223>/Saturation' */
    localB->rtb_Switch_c = localP->Velocitycontroller_UpperSaturationLimit;
  } else if (localB->rtb_Switch_p <
             localP->Velocitycontroller_LowerSaturationLimit) {
    /* Saturate: '<S223>/Saturation' */
    localB->rtb_Switch_c = localP->Velocitycontroller_LowerSaturationLimit;
  } else {
    /* Saturate: '<S223>/Saturation' */
    localB->rtb_Switch_c = localB->rtb_Switch_p;
  }

  /* DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localB->rtb_Switch_c = (localB->rtb_Switch_c -
    localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_DenCoef
    [1] *
    localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_states
    [1]) /
    localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_DenCoef
    [0];
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_tmp
    [1] = localB->rtb_Switch_c;

  /* Gain: '<S10>/Gain' incorporates:
   *  DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller'
   */
  localB->rtb_sincos_o1_idx_1 =
    (localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_NumCoef
     [0] * localB->rtb_Switch_c +
     localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_NumCoef
     [1] *
     localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_states
     [1]) * localP->Gain_Gain_c[1];

  /* Switch: '<S3>/Switch_refAtt' incorporates:
   *  BusAssignment: '<S1>/Control Mode Update'
   *  BusAssignment: '<S5>/Bus  Assignment'
   *  Constant: '<S1>/controlModePosVsOrient'
   */
  if (!localP->controlModePosVsOrient_Value) {
    localB->rtb_sincos_o1_idx_0 = localB->Switch_k[1];
    localB->rtb_sincos_o1_idx_1 = localB->Switch_k[2];
  }

  /* End of Switch: '<S3>/Switch_refAtt' */

  /* Sum: '<S8>/Sum1' incorporates:
   *  Gain: '<S58>/Proportional Gain'
   *  Sum: '<S8>/Sum19'
   */
  localB->rtb_sincos_o1_idx_0 = (localB->rtb_sincos_o1_idx_0 -
    localB->DataTypeConversion3[1]) * localP->Anglecontrolloop_P -
    localB->Subtract[1];
  localB->rtb_sincos_o1_idx_1 = (localB->rtb_sincos_o1_idx_1 -
    localB->DataTypeConversion3[2]) * localP->Anglecontrolloop_P -
    localB->Subtract[0];

  /* Gain: '<S110>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S102>/Filter'
   *  Gain: '<S100>/Derivative Gain'
   *  Sum: '<S102>/SumD'
   */
  localB->pitchrollerror = (localP->Angularvelocitycontrolloop_D[0] *
    localB->rtb_sincos_o1_idx_0 - localDW->Filter_DSTATE[0]) *
    localP->Angularvelocitycontrolloop_N[0];
  localB->FilterCoefficient[0] = localB->pitchrollerror;

  /* Sum: '<S116>/Sum' incorporates:
   *  DiscreteIntegrator: '<S107>/Integrator'
   *  Gain: '<S100>/Derivative Gain'
   *  Gain: '<S112>/Proportional Gain'
   */
  localB->rtb_Switch_c = (localP->Angularvelocitycontrolloop_P[0] *
    localB->rtb_sincos_o1_idx_0 + localDW->Integrator_DSTATE_d[0]) +
    localB->pitchrollerror;

  /* DeadZone: '<S99>/DeadZone' incorporates:
   *  Sum: '<S116>/Sum'
   */
  localB->rtb_DataTypeConversion_e_tmp_f = localB->rtb_Switch_c;

  /* Saturate: '<S114>/Saturation' */
  if (localB->rtb_Switch_c >
      localP->Angularvelocitycontrolloop_UpperSaturationLimit) {
    localB->rtb_sincos_o1_idx_0_tmp =
      localP->Angularvelocitycontrolloop_UpperSaturationLimit;
  } else if (localB->rtb_Switch_c <
             localP->Angularvelocitycontrolloop_LowerSaturationLimit) {
    localB->rtb_sincos_o1_idx_0_tmp =
      localP->Angularvelocitycontrolloop_LowerSaturationLimit;
  } else {
    localB->rtb_sincos_o1_idx_0_tmp = localB->rtb_Switch_c;
  }

  /* Gain: '<S110>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S102>/Filter'
   *  Gain: '<S100>/Derivative Gain'
   *  Sum: '<S102>/SumD'
   */
  localB->pitchrollerror = (localP->Angularvelocitycontrolloop_D[1] *
    localB->rtb_sincos_o1_idx_1 - localDW->Filter_DSTATE[1]) *
    localP->Angularvelocitycontrolloop_N[1];
  localB->FilterCoefficient[1] = localB->pitchrollerror;

  /* Sum: '<S116>/Sum' incorporates:
   *  DiscreteIntegrator: '<S107>/Integrator'
   *  Gain: '<S100>/Derivative Gain'
   *  Gain: '<S112>/Proportional Gain'
   */
  localB->rtb_Switch_c = (localP->Angularvelocitycontrolloop_P[1] *
    localB->rtb_sincos_o1_idx_1 + localDW->Integrator_DSTATE_d[1]) +
    localB->pitchrollerror;

  /* Saturate: '<S114>/Saturation' */
  if (localB->rtb_Switch_c >
      localP->Angularvelocitycontrolloop_UpperSaturationLimit) {
    localB->rtb_DataTypeConversion_e_tmp =
      localP->Angularvelocitycontrolloop_UpperSaturationLimit;
  } else if (localB->rtb_Switch_c <
             localP->Angularvelocitycontrolloop_LowerSaturationLimit) {
    localB->rtb_DataTypeConversion_e_tmp =
      localP->Angularvelocitycontrolloop_LowerSaturationLimit;
  } else {
    localB->rtb_DataTypeConversion_e_tmp = localB->rtb_Switch_c;
  }

  /* RelationalOperator: '<S13>/Compare' incorporates:
   *  Constant: '<S13>/Constant'
   *  UnitDelay: '<S14>/Output'
   */
  localB->Compare_c = (localDW->Output_DSTATE_a <
                       localP->CompareToConstant_const_c);

  /* DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  if ((!localB->Compare_c) && (localDW->DiscreteTimeIntegrator_PrevResetState ==
       1)) {
    localDW->DiscreteTimeIntegrator_DSTATE_c =
      localP->DiscreteTimeIntegrator_IC_h;
  }

  /* Sum: '<S7>/Sum2' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   */
  localB->pitchrollerror = (real32_T)localB->Zo - localB->DataTypeConversion;

  /* Switch: '<S7>/TakeoffOrControl_Switch1' incorporates:
   *  Constant: '<S7>/w1'
   *  DiscreteIntegrator: '<S7>/Discrete-Time Integrator'
   *  Gain: '<S7>/D_z1'
   *  Gain: '<S7>/P_z1'
   *  Gain: '<S7>/takeoff_gain1'
   *  Sum: '<S7>/Sum1'
   */
  if (localB->Compare_c) {
    localB->SaturationThrust1 = localP->takeoff_gain1_Gain * localP->w1_Value;
  } else {
    localB->SaturationThrust1 = (localP->P_z1_Gain * localB->pitchrollerror +
      localDW->DiscreteTimeIntegrator_DSTATE_c) - localP->D_z1_Gain *
      localB->DataTypeConversion2;
  }

  /* End of Switch: '<S7>/TakeoffOrControl_Switch1' */

  /* ManualSwitch: '<S9>/Manual Switch' incorporates:
   *  Constant: '<S9>/Pitch correction'
   *  Constant: '<S9>/zero correction'
   */
  if (localP->ManualSwitch_CurrentSetting == 1) {
    localB->Add_i = localP->Pitchcorrection_Value;
  } else {
    localB->Add_i = localP->zerocorrection_Value;
  }

  /* End of ManualSwitch: '<S9>/Manual Switch' */

  /* Sum: '<S11>/Sum1' incorporates:
   *  BusAssignment: '<S5>/Bus  Assignment'
   */
  localB->rtb_sincos_o1_idx_2 = localB->Switch_k[0] -
    localB->DataTypeConversion3[0];

  /* Saturate: '<S11>/Saturation' */
  if (localB->rtb_sincos_o1_idx_2 > localP->Saturation_UpperSat) {
    localB->rtb_sincos_o1_idx_2 = localP->Saturation_UpperSat;
  } else if (localB->rtb_sincos_o1_idx_2 < localP->Saturation_LowerSat) {
    localB->rtb_sincos_o1_idx_2 = localP->Saturation_LowerSat;
  }

  /* End of Saturate: '<S11>/Saturation' */

  /* Sum: '<S7>/Sum5' incorporates:
   *  Constant: '<S7>/w1'
   */
  localB->SaturationThrust1 += localP->w1_Value;

  /* Saturate: '<S7>/SaturationThrust1' */
  if (localB->SaturationThrust1 > localP->SaturationThrust1_UpperSat) {
    localB->SaturationThrust1 = localP->SaturationThrust1_UpperSat;
  } else if (localB->SaturationThrust1 < localP->SaturationThrust1_LowerSat) {
    localB->SaturationThrust1 = localP->SaturationThrust1_LowerSat;
  }

  /* SignalConversion generated from: '<S9>/Product' incorporates:
   *  DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
   *  Gain: '<S11>/D_yaw'
   *  Gain: '<S11>/P_yaw'
   *  Saturate: '<S114>/Saturation'
   *  Sum: '<S11>/Sum2'
   *  Sum: '<S9>/Add'
   */
  localB->unnamed_idx_1 = (localP->P_yaw_Gain * localB->rtb_sincos_o1_idx_2 +
    localDW->DiscreteTimeIntegrator_DSTATE_d) - localP->D_yaw_Gain *
    localB->Subtract[2];
  localB->rtb_sincos_o1_idx_0_tmp += localB->Add_i;
  for (localB->j = 0; localB->j < 4; localB->j++) {
    /* Saturate: '<S12>/Saturation5' incorporates:
     *  Constant: '<S9>/TorqueTotalThrustToThrustPerMotor'
     *  Gain: '<S12>/ThrustToMotorCommand'
     *  Product: '<S9>/Product'
     *  Saturate: '<S114>/Saturation'
     *  Saturate: '<S7>/SaturationThrust1'
     */
    localB->Add_i = (((localP->TorqueTotalThrustToThrustPerMotor_Value[localB->j
                       + 4] * localB->unnamed_idx_1 +
                       localP->TorqueTotalThrustToThrustPerMotor_Value[localB->j]
                       * localB->SaturationThrust1) +
                      localP->TorqueTotalThrustToThrustPerMotor_Value[localB->j
                      + 8] * localB->rtb_sincos_o1_idx_0_tmp) +
                     localP->TorqueTotalThrustToThrustPerMotor_Value[localB->j +
                     12] * localB->rtb_DataTypeConversion_e_tmp) *
      localP->ThrustToMotorCommand_Gain;
    if (localB->Add_i > localP->Saturation5_UpperSat) {
      localB->Add_i = localP->Saturation5_UpperSat;
    } else if (localB->Add_i < localP->Saturation5_LowerSat) {
      localB->Add_i = localP->Saturation5_LowerSat;
    }

    /* End of Saturate: '<S12>/Saturation5' */

    /* Gain: '<S12>/MotorDirections' */
    motors_outport[localB->j] = localP->MotorDirections_Gain[localB->j] *
      localB->Add_i;
  }

  /* SignalConversion generated from: '<S437>/Product' */
  localB->SaturationThrust1 = localB->Reshapexhat_d[0];
  localB->unnamed_idx_1 = localB->Reshapexhat_d[1];

  /* Product: '<S251>/Product' */
  localB->rtb_DataTypeConversion_e_tmp = localB->FIR_IMUaccel[1];
  localB->rtb_sincos_o1_idx_0_tmp = localB->FIR_IMUaccel[0];
  for (localB->j = 0; localB->j < 3; localB->j++) {
    /* Product: '<S437>/Product' incorporates:
     *  Math: '<S437>/Math Function'
     *  Reshape: '<S518>/Reshape (9) to [3x3] column-major'
     *  SignalConversion generated from: '<S437>/Product'
     */
    localB->Product_k[localB->j] = (localB->VectorConcatenate[3 * localB->j + 1]
      * localB->unnamed_idx_1 + localB->VectorConcatenate[3 * localB->j] *
      localB->SaturationThrust1) + localB->VectorConcatenate[3 * localB->j + 2] *
      localB->DataTypeConversion2;

    /* Sum: '<S251>/Sum' incorporates:
     *  Constant: '<S251>/gravity'
     *  DiscreteFir: '<S253>/FIR_IMUaccel'
     *  Math: '<S251>/Math Function'
     *  Product: '<S251>/Product'
     */
    localB->Sum[localB->j] = ((localB->MathFunction[localB->j + 3] *
      localB->rtb_DataTypeConversion_e_tmp + localB->MathFunction[localB->j] *
      localB->rtb_sincos_o1_idx_0_tmp) + localB->MathFunction[localB->j + 6] *
      localB->Abs) + localP->gravity_Value_j[localB->j];
  }

  /* DataTypeConversion: '<S418>/Conversion' incorporates:
   *  Constant: '<S376>/KalmanGainL'
   */
  localB->Add_g[0] = (real32_T)localP->KalmanGainL_Value_p[0];
  localB->Add_g[1] = (real32_T)localP->KalmanGainL_Value_p[1];

  /* Outputs for Enabled SubSystem: '<S395>/MeasurementUpdate' */
  /* DataTypeConversion: '<S375>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S375>/C'
   *  Constant: '<S375>/D'
   *  Delay: '<S375>/MemoryX'
   *  Reshape: '<S375>/Reshapeu'
   *  Reshape: '<S375>/Reshapey'
   */
  flightControlSystem_MeasurementUpdate((localB->LogicalOperator != 0),
    localB->Add_g, localB->TrigonometricFunction, localP->C_Value_i,
    localDW->MemoryX_DSTATE_m, localP->D_Value_k, localB->p,
    &localB->MeasurementUpdate_j, &localDW->MeasurementUpdate_j,
    &localP->MeasurementUpdate_j);

  /* End of Outputs for SubSystem: '<S395>/MeasurementUpdate' */

  /* Reshape: '<S395>/Reshape' incorporates:
   *  Constant: '<S375>/A'
   *  Constant: '<S375>/B'
   *  Delay: '<S375>/MemoryX'
   *  Product: '<S395>/A[k]*xhat[k|k-1]'
   *  Product: '<S395>/B[k]*u[k]'
   *  Product: '<S426>/Product3'
   *  Reshape: '<S375>/Reshapeu'
   *  Sum: '<S395>/Add'
   */
  localB->Reshape_f[0] = ((localP->A_Value_ah[0] * localDW->MemoryX_DSTATE_m[0]
    + localDW->MemoryX_DSTATE_m[1] * localP->A_Value_ah[2]) + localP->B_Value_g
    [0] * localB->p) + localB->MeasurementUpdate_j.Product3[0];

  /* DataTypeConversion: '<S364>/Conversion' incorporates:
   *  Constant: '<S322>/KalmanGainL'
   */
  localB->Add_g[0] = (real32_T)localP->KalmanGainL_Value_l[0];

  /* Reshape: '<S395>/Reshape' incorporates:
   *  Constant: '<S375>/A'
   *  Constant: '<S375>/B'
   *  Delay: '<S375>/MemoryX'
   *  Product: '<S395>/A[k]*xhat[k|k-1]'
   *  Product: '<S395>/B[k]*u[k]'
   *  Product: '<S426>/Product3'
   *  Reshape: '<S375>/Reshapeu'
   *  Sum: '<S395>/Add'
   */
  localB->Reshape_f[1] = ((localDW->MemoryX_DSTATE_m[0] * localP->A_Value_ah[1]
    + localDW->MemoryX_DSTATE_m[1] * localP->A_Value_ah[3]) + localP->B_Value_g
    [1] * localB->p) + localB->MeasurementUpdate_j.Product3[1];

  /* DataTypeConversion: '<S364>/Conversion' incorporates:
   *  Constant: '<S322>/KalmanGainL'
   */
  localB->Add_g[1] = (real32_T)localP->KalmanGainL_Value_l[1];

  /* Outputs for Enabled SubSystem: '<S341>/MeasurementUpdate' */
  /* DataTypeConversion: '<S321>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S321>/C'
   *  Constant: '<S321>/D'
   *  Delay: '<S321>/MemoryX'
   *  Reshape: '<S321>/Reshapeu'
   *  Reshape: '<S321>/Reshapey'
   */
  flightControlSystem_MeasurementUpdate((localB->LogicalOperator != 0),
    localB->Add_g, localB->TrigonometricFunction1, localP->C_Value_h,
    localDW->MemoryX_DSTATE_g, localP->D_Value_kg, localB->q,
    &localB->MeasurementUpdate_n, &localDW->MeasurementUpdate_n,
    &localP->MeasurementUpdate_n);

  /* End of Outputs for SubSystem: '<S341>/MeasurementUpdate' */

  /* Reshape: '<S341>/Reshape' incorporates:
   *  Constant: '<S321>/A'
   *  Constant: '<S321>/B'
   *  Delay: '<S321>/MemoryX'
   *  Product: '<S341>/A[k]*xhat[k|k-1]'
   *  Product: '<S341>/B[k]*u[k]'
   *  Product: '<S372>/Product3'
   *  Reshape: '<S321>/Reshapeu'
   *  Sum: '<S341>/Add'
   */
  localB->Reshape_p[0] = ((localP->A_Value_k[0] * localDW->MemoryX_DSTATE_g[0] +
    localDW->MemoryX_DSTATE_g[1] * localP->A_Value_k[2]) + localP->B_Value_o[0] *
    localB->q) + localB->MeasurementUpdate_n.Product3[0];
  localB->Reshape_p[1] = ((localDW->MemoryX_DSTATE_g[0] * localP->A_Value_k[1] +
    localDW->MemoryX_DSTATE_g[1] * localP->A_Value_k[3]) + localP->B_Value_o[1] *
    localB->q) + localB->MeasurementUpdate_n.Product3[1];

  /* Outputs for Enabled SubSystem: '<S277>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S307>/Enable'
   */
  /* DataTypeConversion: '<S255>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S255>/C'
   *  Constant: '<S259>/KalmanGainL'
   *  DataTypeConversion: '<S299>/Conversion'
   *  Delay: '<S251>/Delay2'
   *  Delay: '<S255>/MemoryX'
   *  Product: '<S307>/C[k]*xhat[k|k-1]'
   *  Product: '<S307>/Product3'
   *  Reshape: '<S255>/Reshapey'
   *  Sum: '<S307>/Add1'
   *  Sum: '<S307>/Sum'
   */
  if (localB->nicemeasurementornewupdateneeded) {
    localDW->MeasurementUpdate_MODE_c = true;

    /* Product: '<S307>/D[k]*u[k]' incorporates:
     *  Constant: '<S255>/D'
     *  Delay: '<S251>/Delay2'
     *  Reshape: '<S255>/Reshapeu'
     */
    localDW->Delay2_DSTATE = localP->D_Value * localB->Sum[2];
    _mm_storeu_pd(&localB->Product3[0], _mm_mul_pd(_mm_loadu_pd
      (&localP->KalmanGainL_Value_b[0]), _mm_set1_pd(localB->invertzaxisGain -
      ((localP->C_Value[0] * localDW->MemoryX_DSTATE[0] + localP->C_Value[1] *
        localDW->MemoryX_DSTATE[1]) + localDW->Delay2_DSTATE))));
    srUpdateBC(localDW->MeasurementUpdate_SubsysRanBC_m);
  } else if (localDW->MeasurementUpdate_MODE_c) {
    /* Disable for Product: '<S307>/Product3' incorporates:
     *  Outport: '<S307>/L*(y[k]-yhat[k|k-1])'
     */
    localB->Product3[0] = localP->Lykyhatkk1_Y0;
    localB->Product3[1] = localP->Lykyhatkk1_Y0;
    localDW->MeasurementUpdate_MODE_c = false;
  }

  /* End of Outputs for SubSystem: '<S277>/MeasurementUpdate' */

  /* Reshape: '<S277>/Reshape' incorporates:
   *  Constant: '<S255>/A'
   *  Constant: '<S255>/B'
   *  Delay: '<S255>/MemoryX'
   *  Product: '<S277>/A[k]*xhat[k|k-1]'
   *  Product: '<S277>/B[k]*u[k]'
   *  Product: '<S307>/Product3'
   *  Reshape: '<S255>/Reshapeu'
   *  Sum: '<S277>/Add'
   */
  localB->Reshape[0] = ((localP->A_Value[0] * localDW->MemoryX_DSTATE[0] +
    localDW->MemoryX_DSTATE[1] * localP->A_Value[2]) + localP->B_Value[0] *
                        localB->Sum[2]) + localB->Product3[0];

  /* DeadZone: '<S99>/DeadZone' */
  if (localB->rtb_DataTypeConversion_e_tmp_f >
      localP->Angularvelocitycontrolloop_UpperSaturationLimit) {
    localB->rtb_DataTypeConversion_e_tmp_f -=
      localP->Angularvelocitycontrolloop_UpperSaturationLimit;
  } else if (localB->rtb_DataTypeConversion_e_tmp_f >=
             localP->Angularvelocitycontrolloop_LowerSaturationLimit) {
    localB->rtb_DataTypeConversion_e_tmp_f = 0.0F;
  } else {
    localB->rtb_DataTypeConversion_e_tmp_f -=
      localP->Angularvelocitycontrolloop_LowerSaturationLimit;
  }

  /* Switch: '<S97>/Switch1' incorporates:
   *  Constant: '<S97>/Clamping_zero'
   *  Constant: '<S97>/Constant'
   *  Constant: '<S97>/Constant2'
   *  RelationalOperator: '<S97>/fix for DT propagation issue'
   */
  if (localB->rtb_DataTypeConversion_e_tmp_f > localP->Clamping_zero_Value) {
    localB->rtb_Switch2_g = localP->Constant_Value_km;
  } else {
    localB->rtb_Switch2_g = localP->Constant2_Value;
  }

  /* Gain: '<S104>/Integral Gain' */
  localB->Abs = localP->Angularvelocitycontrolloop_I[0] *
    localB->rtb_sincos_o1_idx_0;

  /* Switch: '<S97>/Switch2' incorporates:
   *  Constant: '<S97>/Clamping_zero'
   *  Constant: '<S97>/Constant3'
   *  Constant: '<S97>/Constant4'
   *  RelationalOperator: '<S97>/fix for DT propagation issue1'
   */
  if (localB->Abs > localP->Clamping_zero_Value) {
    localB->rtb_Switch1_g = localP->Constant3_Value;
  } else {
    localB->rtb_Switch1_g = localP->Constant4_Value;
  }

  /* Switch: '<S97>/Switch' incorporates:
   *  Constant: '<S97>/Clamping_zero'
   *  Constant: '<S97>/Constant1'
   *  Logic: '<S97>/AND3'
   *  RelationalOperator: '<S97>/Equal1'
   *  RelationalOperator: '<S97>/Relational Operator'
   */
  if ((localP->Clamping_zero_Value != localB->rtb_DataTypeConversion_e_tmp_f) &&
      (localB->rtb_Switch2_g == localB->rtb_Switch1_g)) {
    localB->Switch[0] = localP->Constant1_Value;
  } else {
    localB->Switch[0] = localB->Abs;
  }

  /* DeadZone: '<S208>/DeadZone' */
  if (localB->Integrator_l[0] > localP->Velocitycontroller_UpperSaturationLimit)
  {
    localB->Abs = localB->Integrator_l[0] -
      localP->Velocitycontroller_UpperSaturationLimit;
  } else if (localB->Integrator_l[0] >=
             localP->Velocitycontroller_LowerSaturationLimit) {
    localB->Abs = 0.0F;
  } else {
    localB->Abs = localB->Integrator_l[0] -
      localP->Velocitycontroller_LowerSaturationLimit;
  }

  /* Switch: '<S206>/Switch1' incorporates:
   *  Constant: '<S206>/Clamping_zero'
   *  Constant: '<S206>/Constant'
   *  Constant: '<S206>/Constant2'
   *  RelationalOperator: '<S206>/fix for DT propagation issue'
   */
  if (localB->Abs > localP->Clamping_zero_Value_m) {
    localB->rtb_Switch1_g = localP->Constant_Value_p;
  } else {
    localB->rtb_Switch1_g = localP->Constant2_Value_f;
  }

  /* Gain: '<S213>/Integral Gain' */
  localB->rtb_sincos_o1_idx_0 = localP->Velocitycontroller_I *
    localB->Conversion_g[0];

  /* Switch: '<S206>/Switch2' incorporates:
   *  Constant: '<S206>/Clamping_zero'
   *  Constant: '<S206>/Constant3'
   *  Constant: '<S206>/Constant4'
   *  RelationalOperator: '<S206>/fix for DT propagation issue1'
   */
  if (localB->rtb_sincos_o1_idx_0 > localP->Clamping_zero_Value_m) {
    localB->rtb_Switch2_g = localP->Constant3_Value_d;
  } else {
    localB->rtb_Switch2_g = localP->Constant4_Value_p;
  }

  /* Switch: '<S206>/Switch' incorporates:
   *  Constant: '<S206>/Clamping_zero'
   *  Constant: '<S206>/Constant1'
   *  Logic: '<S206>/AND3'
   *  RelationalOperator: '<S206>/Equal1'
   *  RelationalOperator: '<S206>/Relational Operator'
   */
  if ((localP->Clamping_zero_Value_m != localB->Abs) && (localB->rtb_Switch1_g ==
       localB->rtb_Switch2_g)) {
    localB->Switch_h[0] = localP->Constant1_Value_c;
  } else {
    localB->Switch_h[0] = localB->rtb_sincos_o1_idx_0;
  }

  /* Reshape: '<S277>/Reshape' incorporates:
   *  Constant: '<S255>/A'
   *  Constant: '<S255>/B'
   *  Delay: '<S255>/MemoryX'
   *  Product: '<S277>/A[k]*xhat[k|k-1]'
   *  Product: '<S277>/B[k]*u[k]'
   *  Product: '<S307>/Product3'
   *  Reshape: '<S255>/Reshapeu'
   *  Sum: '<S277>/Add'
   */
  localB->Reshape[1] = ((localDW->MemoryX_DSTATE[0] * localP->A_Value[1] +
    localDW->MemoryX_DSTATE[1] * localP->A_Value[3]) + localP->B_Value[1] *
                        localB->Sum[2]) + localB->Product3[1];

  /* DeadZone: '<S99>/DeadZone' incorporates:
   *  Sum: '<S116>/Sum'
   */
  if (localB->rtb_Switch_c >
      localP->Angularvelocitycontrolloop_UpperSaturationLimit) {
    localB->rtb_DataTypeConversion_e_tmp_f = localB->rtb_Switch_c -
      localP->Angularvelocitycontrolloop_UpperSaturationLimit;
  } else if (localB->rtb_Switch_c >=
             localP->Angularvelocitycontrolloop_LowerSaturationLimit) {
    localB->rtb_DataTypeConversion_e_tmp_f = 0.0F;
  } else {
    localB->rtb_DataTypeConversion_e_tmp_f = localB->rtb_Switch_c -
      localP->Angularvelocitycontrolloop_LowerSaturationLimit;
  }

  /* Switch: '<S97>/Switch1' incorporates:
   *  Constant: '<S97>/Clamping_zero'
   *  Constant: '<S97>/Constant'
   *  Constant: '<S97>/Constant2'
   *  RelationalOperator: '<S97>/fix for DT propagation issue'
   */
  if (localB->rtb_DataTypeConversion_e_tmp_f > localP->Clamping_zero_Value) {
    localB->rtb_Switch2_g = localP->Constant_Value_km;
  } else {
    localB->rtb_Switch2_g = localP->Constant2_Value;
  }

  /* Gain: '<S104>/Integral Gain' */
  localB->Abs = localP->Angularvelocitycontrolloop_I[1] *
    localB->rtb_sincos_o1_idx_1;

  /* Switch: '<S97>/Switch2' incorporates:
   *  Constant: '<S97>/Clamping_zero'
   *  Constant: '<S97>/Constant3'
   *  Constant: '<S97>/Constant4'
   *  RelationalOperator: '<S97>/fix for DT propagation issue1'
   */
  if (localB->Abs > localP->Clamping_zero_Value) {
    localB->rtb_Switch1_g = localP->Constant3_Value;
  } else {
    localB->rtb_Switch1_g = localP->Constant4_Value;
  }

  /* Switch: '<S97>/Switch' incorporates:
   *  Constant: '<S97>/Clamping_zero'
   *  Constant: '<S97>/Constant1'
   *  Logic: '<S97>/AND3'
   *  RelationalOperator: '<S97>/Equal1'
   *  RelationalOperator: '<S97>/Relational Operator'
   */
  if ((localP->Clamping_zero_Value != localB->rtb_DataTypeConversion_e_tmp_f) &&
      (localB->rtb_Switch2_g == localB->rtb_Switch1_g)) {
    localB->Switch[1] = localP->Constant1_Value;
  } else {
    localB->Switch[1] = localB->Abs;
  }

  /* DeadZone: '<S208>/DeadZone' incorporates:
   *  Sum: '<S225>/Sum'
   */
  if (localB->rtb_Switch_p > localP->Velocitycontroller_UpperSaturationLimit) {
    localB->Abs = localB->rtb_Switch_p -
      localP->Velocitycontroller_UpperSaturationLimit;
  } else if (localB->rtb_Switch_p >=
             localP->Velocitycontroller_LowerSaturationLimit) {
    localB->Abs = 0.0F;
  } else {
    localB->Abs = localB->rtb_Switch_p -
      localP->Velocitycontroller_LowerSaturationLimit;
  }

  /* Switch: '<S206>/Switch1' incorporates:
   *  Constant: '<S206>/Clamping_zero'
   *  Constant: '<S206>/Constant'
   *  Constant: '<S206>/Constant2'
   *  RelationalOperator: '<S206>/fix for DT propagation issue'
   */
  if (localB->Abs > localP->Clamping_zero_Value_m) {
    localB->rtb_Switch1_g = localP->Constant_Value_p;
  } else {
    localB->rtb_Switch1_g = localP->Constant2_Value_f;
  }

  /* Gain: '<S213>/Integral Gain' incorporates:
   *  Sum: '<S10>/Sum19'
   */
  localB->rtb_sincos_o1_idx_0 = localP->Velocitycontroller_I * localB->Abs_b;

  /* Switch: '<S206>/Switch2' incorporates:
   *  Constant: '<S206>/Clamping_zero'
   *  Constant: '<S206>/Constant3'
   *  Constant: '<S206>/Constant4'
   *  RelationalOperator: '<S206>/fix for DT propagation issue1'
   */
  if (localB->rtb_sincos_o1_idx_0 > localP->Clamping_zero_Value_m) {
    localB->rtb_Switch2_g = localP->Constant3_Value_d;
  } else {
    localB->rtb_Switch2_g = localP->Constant4_Value_p;
  }

  /* Switch: '<S206>/Switch' incorporates:
   *  Constant: '<S206>/Clamping_zero'
   *  Constant: '<S206>/Constant1'
   *  Logic: '<S206>/AND3'
   *  RelationalOperator: '<S206>/Equal1'
   *  RelationalOperator: '<S206>/Relational Operator'
   */
  if ((localP->Clamping_zero_Value_m != localB->Abs) && (localB->rtb_Switch1_g ==
       localB->rtb_Switch2_g)) {
    localB->Switch_h[1] = localP->Constant1_Value_c;
  } else {
    localB->Switch_h[1] = localB->rtb_sincos_o1_idx_0;
  }

  /* Gain: '<S11>/I_yaw' */
  localB->I_yaw = localP->I_yaw_Gain * localB->rtb_sincos_o1_idx_2;

  /* Gain: '<S7>/I_pr' */
  localB->I_pr = localP->I_pr_Gain * localB->pitchrollerror;

  /* Sum: '<S15>/FixPt Sum1' incorporates:
   *  Constant: '<S15>/FixPt Constant'
   *  UnitDelay: '<S14>/Output'
   */
  localDW->Output_DSTATE_a += localP->FixPtConstant_Value_g;

  /* Switch: '<S16>/FixPt Switch' */
  if (localDW->Output_DSTATE_a > localP->WrapToZero_Threshold_c) {
    /* Sum: '<S15>/FixPt Sum1' incorporates:
     *  Constant: '<S16>/Constant'
     */
    localDW->Output_DSTATE_a = localP->Constant_Value_k;
  }

  /* End of Switch: '<S16>/FixPt Switch' */

  /* Gain: '<S4>/Gain' */
  localB->Abs = localP->Gain_Gain_o *
    rtu_Sensors->VisionSensors.opticalFlow_data[0];

  /* Abs: '<S4>/Abs2' incorporates:
   *  Sum: '<S4>/Subtract'
   */
  localB->Abs_b = (real32_T)fabs(localB->Abs - localB->Reshapexhat_d[0]);

  /* Abs: '<S4>/Abs4' */
  localB->Abs = (real32_T)fabs(rtu_Sensors->VisionSensors.opticalFlow_data[0]);

  /* Logic: '<S4>/Logical Operator1' incorporates:
   *  Constant: '<S238>/Constant'
   *  Constant: '<S240>/Constant'
   *  RelationalOperator: '<S238>/Compare'
   *  RelationalOperator: '<S240>/Compare'
   */
  localB->Compare_jk = ((localB->Abs > localP->CompareToConstant4_const) &&
                        (localB->Abs_b > localP->CompareToConstant2_const));

  /* Gain: '<S4>/Gain1' */
  localB->Abs = localP->Gain1_Gain_p *
    rtu_Sensors->VisionSensors.opticalFlow_data[1];

  /* Abs: '<S4>/Abs3' incorporates:
   *  Sum: '<S4>/Subtract1'
   */
  localB->Abs_b = (real32_T)fabs(localB->Abs - localB->Reshapexhat_d[1]);

  /* Abs: '<S4>/Abs5' */
  localB->Abs = (real32_T)fabs(rtu_Sensors->VisionSensors.opticalFlow_data[1]);

  /* Logic: '<S4>/Logical Operator2' incorporates:
   *  Constant: '<S239>/Constant'
   *  Constant: '<S241>/Constant'
   *  RelationalOperator: '<S239>/Compare'
   *  RelationalOperator: '<S241>/Compare'
   */
  localB->Compare_jkn = ((localB->Abs_b > localP->CompareToConstant3_const) &&
    (localB->Abs > localP->CompareToConstant5_const));

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S4>/ '
   *  Constant: '<S4>/    '
   *  Constant: '<S4>/Wait  3 Seconds'
   *  DiscreteFilter: '<S256>/pressureFilter_IIR'
   *  RelationalOperator: '<S4>/GreaterThan'
   *  Sum: '<S4>/Difference between  sonar and pressure'
   *  Switch: '<S4>/         '
   *  UnitDelay: '<S242>/Output'
   */
  if (localDW->Output_DSTATE_g > localP->Wait3Seconds_Value) {
    localB->u_h = rtu_Sensors->VisionSensors.opticalFlow_data[2];
    localB->Abs = localB->DataTypeConversion - localB->pressureFilter_IIR;
  } else {
    localB->u_h = localP->_Value;
    localB->Abs = localP->_Value_i;
  }

  /* End of Switch: '<S4>/Switch' */

  /* DataTypeConversion: '<S4>/   ' incorporates:
   *  Constant: '<S235>/Constant'
   *  RelationalOperator: '<S235>/Compare'
   */
  localB->u_h = (localB->u_h == localP->Checkerrorcondition_const);

  /* Sum: '<S4>/Add' incorporates:
   *  Delay: '<S4>/Delay One Step'
   *  Product: '<S4>/  '
   */
  localDW->DelayOneStep_DSTATE = localB->u_h * localDW->DelayOneStep_DSTATE +
    localB->u_h;

  /* If: '<S4>/If' incorporates:
   *  Abs: '<S4>/Abs'
   *  Abs: '<S4>/Abs  '
   *  Abs: '<S4>/Abs1'
   *  Constant: '<S234>/Constant'
   *  Constant: '<S236>/Constant'
   *  Constant: '<S237>/Constant'
   *  Constant: '<S4>/0.5 meters'
   *  Delay: '<S4>/Delay One Step'
   *  Logic: '<S4>/Logical Operator'
   *  Logic: '<S4>/Logical Operator3'
   *  RelationalOperator: '<S234>/Compare'
   *  RelationalOperator: '<S236>/Compare'
   *  RelationalOperator: '<S237>/Compare'
   *  RelationalOperator: '<S4>/GreaterThan  '
   */
  if (((real32_T)fabs(localB->SimplyIntegrateVelocity[0]) >
       localP->CompareToConstant_const_j) || ((real32_T)fabs
       (localB->SimplyIntegrateVelocity[1]) > localP->CompareToConstant1_const_e))
  {
    /* Outputs for IfAction SubSystem: '<S4>/Geofencing error' incorporates:
     *  ActionPort: '<S243>/Action Port'
     */
    flightControlSystem_Geofencingerror(&flag_outport, &localP->Geofencingerror);

    /* End of Outputs for SubSystem: '<S4>/Geofencing error' */
  } else if (localB->Compare_jk || localB->Compare_jkn) {
    /* Outputs for IfAction SubSystem: '<S4>/estimator//Optical flow error' incorporates:
     *  ActionPort: '<S247>/Action Port'
     */
    flightControlSystem_Geofencingerror(&flag_outport,
      &localP->estimatorOpticalflowerror);

    /* End of Outputs for SubSystem: '<S4>/estimator//Optical flow error' */
  } else if (localDW->DelayOneStep_DSTATE > localP->u0continuousOFerrors_const)
  {
    /* Outputs for IfAction SubSystem: '<S4>/No optical flow ' incorporates:
     *  ActionPort: '<S244>/Action Port'
     */
    flightControlSystem_Geofencingerror(&flag_outport, &localP->Noopticalflow);

    /* End of Outputs for SubSystem: '<S4>/No optical flow ' */
  } else if ((real32_T)fabs(localB->Abs) > localP->u5meters_Value) {
    /* Outputs for IfAction SubSystem: '<S4>/Ultrasound improper' incorporates:
     *  ActionPort: '<S246>/Action Port'
     */
    flightControlSystem_Geofencingerror(&flag_outport,
      &localP->Ultrasoundimproper);

    /* End of Outputs for SubSystem: '<S4>/Ultrasound improper' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/Normal condition' incorporates:
     *  ActionPort: '<S245>/Action Port'
     */
    flightControlSystem_Geofencingerror(&flag_outport, &localP->Normalcondition);

    /* End of Outputs for SubSystem: '<S4>/Normal condition' */
  }

  /* End of If: '<S4>/If' */

  /* Sum: '<S248>/FixPt Sum1' incorporates:
   *  Constant: '<S248>/FixPt Constant'
   *  UnitDelay: '<S242>/Output'
   */
  localDW->Output_DSTATE_g += localP->FixPtConstant_Value;

  /* Switch: '<S249>/FixPt Switch' */
  if (localDW->Output_DSTATE_g > localP->WrapToZero_Threshold) {
    /* Sum: '<S248>/FixPt Sum1' incorporates:
     *  Constant: '<S249>/Constant'
     */
    localDW->Output_DSTATE_g = localP->Constant_Value_a;
  }

  /* End of Switch: '<S249>/FixPt Switch' */

  /* Sum: '<S515>/FixPt Sum1' incorporates:
   *  Constant: '<S515>/FixPt Constant'
   *  UnitDelay: '<S514>/Output'
   */
  localDW->Output_DSTATE_n += localP->FixPtConstant_Value_p;

  /* Switch: '<S516>/FixPt Switch' */
  if (localDW->Output_DSTATE_n > localP->WrapToZero_Threshold_k) {
    /* Sum: '<S515>/FixPt Sum1' incorporates:
     *  Constant: '<S516>/Constant'
     */
    localDW->Output_DSTATE_n = localP->Constant_Value_e;
  }

  /* End of Switch: '<S516>/FixPt Switch' */

  /* Sum: '<S434>/FixPt Sum1' incorporates:
   *  Constant: '<S434>/FixPt Constant'
   *  UnitDelay: '<S432>/Output'
   */
  localDW->Output_DSTATE += localP->FixPtConstant_Value_m;

  /* Switch: '<S435>/FixPt Switch' */
  if (localDW->Output_DSTATE > localP->WrapToZero_Threshold_e) {
    /* Sum: '<S434>/FixPt Sum1' incorporates:
     *  Constant: '<S435>/Constant'
     */
    localDW->Output_DSTATE = localP->Constant_Value_jy;
  }

  /* End of Switch: '<S435>/FixPt Switch' */

  /* DataTypeConversion: '<S367>/Conversion' incorporates:
   *  Constant: '<S322>/CovarianceZ'
   */
  localB->Conversion_a[0] = (real32_T)localP->CovarianceZ_Value_bp[0];
  localB->Conversion_a[1] = (real32_T)localP->CovarianceZ_Value_bp[1];
  localB->Conversion_a[2] = (real32_T)localP->CovarianceZ_Value_bp[2];
  localB->Conversion_a[3] = (real32_T)localP->CovarianceZ_Value_bp[3];

  /* MATLAB Function: '<S370>/SqrtUsedFcn' incorporates:
   *  Constant: '<S370>/isSqrtUsed'
   */
  flightControlSystem_SqrtUsedFcn(&localDW->sf_SqrtUsedFcn_h);

  /* DataTypeConversion: '<S421>/Conversion' incorporates:
   *  Constant: '<S376>/CovarianceZ'
   */
  localB->Conversion_a[0] = (real32_T)localP->CovarianceZ_Value_m[0];
  localB->Conversion_a[1] = (real32_T)localP->CovarianceZ_Value_m[1];
  localB->Conversion_a[2] = (real32_T)localP->CovarianceZ_Value_m[2];
  localB->Conversion_a[3] = (real32_T)localP->CovarianceZ_Value_m[3];

  /* MATLAB Function: '<S424>/SqrtUsedFcn' incorporates:
   *  Constant: '<S424>/isSqrtUsed'
   */
  flightControlSystem_SqrtUsedFcn(&localDW->sf_SqrtUsedFcn_e);
}

/* Update for atomic system: '<Root>/Control System' */
void flightControlSystem_ControlSystem_Update
  (B_ControlSystem_flightControlSystem_T *localB,
   DW_ControlSystem_flightControlSystem_T *localDW,
   P_ControlSystem_flightControlSystem_T *localP)
{
  int32_T k;
  int32_T memOffset;
  real32_T Reshapexhat_d;

  /* Update for DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity' incorporates:
   *  Constant: '<S1>/controlModePosVsOrient'
   */
  localDW->SimplyIntegrateVelocity_PrevResetState = (int8_T)
    localP->controlModePosVsOrient_Value;

  /* Update for Delay: '<S251>/Delay2' */
  localDW->Delay2_DSTATE = localB->Reshapexhat[0];

  /* Update for Delay: '<S255>/MemoryX' */
  localDW->icLoad = false;

  /* Update for DiscreteIntegrator: '<S319>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE +=
    localP->DiscreteTimeIntegrator_gainval * localB->r;

  /* Update for Delay: '<S321>/MemoryX' */
  localDW->icLoad_p = false;

  /* Update for DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[0] +=
    localP->SimplyIntegrateVelocity_gainval * localB->Product_k[0];

  /* Update for Delay: '<S255>/MemoryX' */
  localDW->MemoryX_DSTATE[0] = localB->Reshape[0];

  /* Update for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[2] = localDW->pressureFilter_IIR_states[1];

  /* Update for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[2] = localDW->sonarFilter_IIR_states[1];

  /* Update for Delay: '<S321>/MemoryX' */
  localDW->MemoryX_DSTATE_g[0] = localB->Reshape_p[0];

  /* Update for DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[1] +=
    localP->SimplyIntegrateVelocity_gainval * localB->Product_k[1];

  /* Update for Delay: '<S255>/MemoryX' */
  localDW->MemoryX_DSTATE[1] = localB->Reshape[1];

  /* Update for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[1] = localDW->pressureFilter_IIR_states[0];

  /* Update for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[1] = localDW->sonarFilter_IIR_states[0];

  /* Update for Delay: '<S321>/MemoryX' */
  localDW->MemoryX_DSTATE_g[1] = localB->Reshape_p[1];

  /* Update for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[0] = localDW->pressureFilter_IIR_tmp;

  /* Update for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[0] = localDW->sonarFilter_IIR_tmp;

  /* Update for DiscreteFir: '<S253>/FIR_IMUaccel' */
  /* Update circular buffer index */
  localDW->FIR_IMUaccel_circBuf--;
  if (localDW->FIR_IMUaccel_circBuf < 0) {
    localDW->FIR_IMUaccel_circBuf = 4;
  }

  /* Update circular buffer */
  localDW->FIR_IMUaccel_states[localDW->FIR_IMUaccel_circBuf] =
    localB->inverseIMU_gain[0];
  localDW->FIR_IMUaccel_states[localDW->FIR_IMUaccel_circBuf + 5] =
    localB->inverseIMU_gain[1];
  localDW->FIR_IMUaccel_states[localDW->FIR_IMUaccel_circBuf + 10] =
    localB->inverseIMU_gain[2];

  /* End of Update for DiscreteFir: '<S253>/FIR_IMUaccel' */

  /* Update for Delay: '<S375>/MemoryX' */
  localDW->icLoad_k = false;
  localDW->MemoryX_DSTATE_m[0] = localB->Reshape_f[0];
  localDW->MemoryX_DSTATE_m[1] = localB->Reshape_f[1];

  /* Update for DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz1' */
  localDW->LPFFcutoff40Hz1_states = localDW->LPFFcutoff40Hz1_tmp;

  /* Update for DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz' */
  localDW->LPFFcutoff40Hz_states = localDW->LPFFcutoff40Hz_tmp;

  /* Update for Delay: '<S441>/MemoryX' */
  localDW->icLoad_o = false;

  /* Update for DiscreteFilter: '<S253>/IIR_IMUgyro_r' */
  localDW->IIR_IMUgyro_r_states[4] = localDW->IIR_IMUgyro_r_states[3];

  /* Update for Delay: '<S441>/MemoryX' */
  localDW->MemoryX_DSTATE_l[0] = localB->Reshape_k[0];

  /* Update for DiscreteFilter: '<S253>/IIR_IMUgyro_r' */
  localDW->IIR_IMUgyro_r_states[3] = localDW->IIR_IMUgyro_r_states[2];

  /* Update for Delay: '<S441>/MemoryX' */
  localDW->MemoryX_DSTATE_l[1] = localB->Reshape_k[1];

  /* Update for DiscreteFilter: '<S253>/IIR_IMUgyro_r' */
  localDW->IIR_IMUgyro_r_states[2] = localDW->IIR_IMUgyro_r_states[1];

  /* Update for Delay: '<S441>/MemoryX' */
  localDW->MemoryX_DSTATE_l[2] = localB->Reshape_k[2];

  /* Update for DiscreteFilter: '<S253>/IIR_IMUgyro_r' */
  localDW->IIR_IMUgyro_r_states[1] = localDW->IIR_IMUgyro_r_states[0];

  /* Update for Delay: '<S441>/MemoryX' */
  localDW->MemoryX_DSTATE_l[3] = localB->Reshape_k[3];

  /* Update for DiscreteFilter: '<S253>/IIR_IMUgyro_r' */
  localDW->IIR_IMUgyro_r_states[0] = localDW->IIR_IMUgyro_r_tmp;
  for (k = 0; k < 2; k++) {
    /* Update for DiscreteFilter: '<S440>/IIRgyroz' */
    memOffset = k * 5;
    localDW->IIRgyroz_states[memOffset + 4] = localDW->IIRgyroz_states[memOffset
      + 3];
    localDW->IIRgyroz_states[memOffset + 3] = localDW->IIRgyroz_states[memOffset
      + 2];
    localDW->IIRgyroz_states[memOffset + 2] = localDW->IIRgyroz_states[memOffset
      + 1];
    localDW->IIRgyroz_states[memOffset + 1] = localDW->IIRgyroz_states[memOffset];
    localDW->IIRgyroz_states[memOffset] = localDW->IIRgyroz_tmp[k];

    /* Update for UnitDelay: '<S448>/UD' */
    localDW->UD_DSTATE[k] = localB->TSamp[k];

    /* Update for Delay: '<S436>/Delay' */
    Reshapexhat_d = localB->Reshapexhat_d[k];
    localDW->Delay_DSTATE[k] = Reshapexhat_d;

    /* Update for Delay: '<S6>/Delay1' */
    localDW->Delay1_DSTATE[k] = Reshapexhat_d;

    /* Update for DiscreteIntegrator: '<S216>/Integrator' */
    localDW->Integrator_DSTATE[k] += localP->Integrator_gainval *
      localB->Switch_h[k];

    /* Update for DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
    localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_states
      [k] =
      localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_tmp
      [k];

    /* Update for DiscreteIntegrator: '<S107>/Integrator' */
    localDW->Integrator_DSTATE_d[k] += localP->Integrator_gainval_i *
      localB->Switch[k];

    /* Update for DiscreteIntegrator: '<S102>/Filter' */
    localDW->Filter_DSTATE[k] += localP->Filter_gainval *
      localB->FilterCoefficient[k];
  }

  /* Update for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_c +=
    localP->DiscreteTimeIntegrator_gainval_n * localB->I_pr;
  if (localDW->DiscreteTimeIntegrator_DSTATE_c >
      localP->DiscreteTimeIntegrator_UpperSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_c =
      localP->DiscreteTimeIntegrator_UpperSat;
  } else if (localDW->DiscreteTimeIntegrator_DSTATE_c <
             localP->DiscreteTimeIntegrator_LowerSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_c =
      localP->DiscreteTimeIntegrator_LowerSat;
  }

  localDW->DiscreteTimeIntegrator_PrevResetState = (int8_T)localB->Compare_c;

  /* End of Update for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_d +=
    localP->DiscreteTimeIntegrator_gainval_d * localB->I_yaw;
}

/* Model output function for TID0 */
void flightControlSystem_output0(void) /* Sample time: [0.005s, 0.0s] */
{
  {                                    /* Sample time: [0.005s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (flightControlSystem_DW.ControlSystem.Geofencingerror.Geofencingerror_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(flightControlSystem_DW.ControlSystem.MeasurementUpdate_SubsysRanBC_m);

  /* Reset subsysRan breadcrumbs */
  srClearBC(flightControlSystem_DW.ControlSystem.EnabledSubsystem_SubsysRanBC_c);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (flightControlSystem_DW.ControlSystem.MeasurementUpdate_n.MeasurementUpdate_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (flightControlSystem_DW.ControlSystem.EnabledSubsystem_d.EnabledSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(flightControlSystem_DW.ControlSystem.TriggeredSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(flightControlSystem_DW.ControlSystem.MeasurementUpdate_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(flightControlSystem_DW.ControlSystem.EnabledSubsystem_SubsysRanBC);

  /* RateTransition: '<Root>/Rate Transition' */
  flightControlSystem_B.RateTransition =
    flightControlSystem_DW.RateTransition_Buffer[flightControlSystem_DW.RateTransition_ActiveBufIdx];

  /* Outputs for Atomic SubSystem: '<Root>/Control System' */

  /* Inport: '<Root>/AC cmd' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  flightControlSystem_ControlSystem(&cmd_inport, &sensor_inport,
    flightControlSystem_B.RateTransition, &flightControlSystem_B.ControlSystem,
    &flightControlSystem_DW.ControlSystem, &flightControlSystem_P.ControlSystem,
    &flightControlSystem_PrevZCX.ControlSystem);

  /* End of Outputs for SubSystem: '<Root>/Control System' */
}

/* Model update function for TID0 */
void flightControlSystem_update0(void) /* Sample time: [0.005s, 0.0s] */
{
  /* Update for Atomic SubSystem: '<Root>/Control System' */
  flightControlSystem_ControlSystem_Update(&flightControlSystem_B.ControlSystem,
    &flightControlSystem_DW.ControlSystem, &flightControlSystem_P.ControlSystem);

  /* End of Update for SubSystem: '<Root>/Control System' */

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(flightControlSystem_M)!=-1) &&
        !((rtmGetTFinal(flightControlSystem_M)-
           flightControlSystem_M->Timing.taskTime0) >
          flightControlSystem_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(flightControlSystem_M, "Simulation finished");
    }

    if (rtmGetStopRequested(flightControlSystem_M)) {
      rtmSetErrorStatus(flightControlSystem_M, "Simulation finished");
    }
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  flightControlSystem_M->Timing.taskTime0 =
    ((time_T)(++flightControlSystem_M->Timing.clockTick0)) *
    flightControlSystem_M->Timing.stepSize0;
}

/* Model output function for TID1 */
void flightControlSystem_output1(void) /* Sample time: [0.2s, 0.0s] */
{
  int32_T i;
  int32_T isredDetected;
  boolean_T exitg1;
  boolean_T redObjectDetected;

  /* Outputs for Atomic SubSystem: '<Root>/Image Processing System' */
  /* MATLABSystem: '<S2>/PARROT Image Conversion' incorporates:
   *  Inport: '<Root>/Image Data'
   */
  MW_Build_RGB(&imRGB[0], &flightControlSystem_B.PARROTImageConversion_o1[0],
               &flightControlSystem_B.PARROTImageConversion_o2[0],
               &flightControlSystem_B.PARROTImageConversion_o3[0]);

  /* MATLAB Function: '<S2>/red_detection' incorporates:
   *  MATLABSystem: '<S2>/PARROT Image Conversion'
   */
  for (i = 0; i < 19200; i++) {
    flightControlSystem_B.x[i] =
      ((flightControlSystem_B.PARROTImageConversion_o1[i] >= 100) &&
       (flightControlSystem_B.PARROTImageConversion_o2[i] <= 80) &&
       (flightControlSystem_B.PARROTImageConversion_o3[i] <= 80));
  }

  redObjectDetected = false;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 19200)) {
    if (flightControlSystem_B.x[i]) {
      redObjectDetected = true;
      exitg1 = true;
    } else {
      i++;
    }
  }

  if (redObjectDetected) {
    isredDetected = 1;
    for (i = 0; i < 19200; i++) {
      flightControlSystem_B.outputImage[i] =
        flightControlSystem_B.PARROTImageConversion_o1[i];
      flightControlSystem_B.outputImage[i + 19200] =
        flightControlSystem_B.PARROTImageConversion_o2[i];
      flightControlSystem_B.outputImage[i + 38400] =
        flightControlSystem_B.PARROTImageConversion_o3[i];
    }
  } else {
    isredDetected = 0;
    memset(&flightControlSystem_B.outputImage[0], 0, 57600U * sizeof(uint8_T));
  }

  /* End of MATLAB Function: '<S2>/red_detection' */

  /* MATLAB Function: '<S2>/MATLAB Function' */
  for (i = 0; i < 57600; i++) {
    if (isredDetected != 0) {
      flightControlSystem_DW.captured[i] = flightControlSystem_B.outputImage[i];
    }

    flightControlSystem_B.imgOut[i] = flightControlSystem_DW.captured[i];
  }

  /* End of MATLAB Function: '<S2>/MATLAB Function' */
  /* Switch: '<S2>/Switch' */
  if (isredDetected > flightControlSystem_P.Switch_Threshold) {
    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     */
    flightControlSystem_B.Switch = flightControlSystem_P.Constant_Value;
  } else {
    /* Switch: '<S2>/Switch' incorporates:
     *  Delay: '<S2>/Delay'
     */
    flightControlSystem_B.Switch = flightControlSystem_DW.Delay_DSTATE;
  }

  /* End of Switch: '<S2>/Switch' */
  /* S-Function (sldrtoo): '<S2>/ThingSpeak Output' */
  /* S-Function Block: <S2>/ThingSpeak Output */
  {
    {
      OTHERIOPARM parm;
      parm.n = 1;
      parm.parm = &flightControlSystem_P.ThingSpeakOutput_OptParam;
      RTBIO_DriverIO(0, OTHEROUTPUT, IOWRITE, 1,
                     &flightControlSystem_P.ThingSpeakOutput_ChannelFields,
                     ((real_T*) (&flightControlSystem_B.Switch)), &parm);
    }
  }

  /* RateTransition: '<Root>/Rate Transition' */
  flightControlSystem_DW.RateTransition_Buffer[flightControlSystem_DW.RateTransition_ActiveBufIdx
    == 0] = flightControlSystem_B.Switch;
  flightControlSystem_DW.RateTransition_ActiveBufIdx = (int8_T)
    (flightControlSystem_DW.RateTransition_ActiveBufIdx == 0);
}

/* Model update function for TID1 */
void flightControlSystem_update1(void) /* Sample time: [0.2s, 0.0s] */
{
  /* Update for Atomic SubSystem: '<Root>/Image Processing System' */
  /* Update for Delay: '<S2>/Delay' */
  flightControlSystem_DW.Delay_DSTATE = flightControlSystem_B.Switch;

  /* End of Update for SubSystem: '<Root>/Image Processing System' */

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.2, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  flightControlSystem_M->Timing.clockTick1++;
}

/* Model initialize function */
void flightControlSystem_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  flightControlSystem_P.ControlSystem.SaturationSonar_LowerSat = rtMinusInf;

  /* initialize real-time model */
  (void) memset((void *)flightControlSystem_M, 0,
                sizeof(RT_MODEL_flightControlSystem_T));
  rtmSetTFinal(flightControlSystem_M, 100.0);
  flightControlSystem_M->Timing.stepSize0 = 0.005;

  /* External mode info */
  flightControlSystem_M->Sizes.checksums[0] = (1526835094U);
  flightControlSystem_M->Sizes.checksums[1] = (932960745U);
  flightControlSystem_M->Sizes.checksums[2] = (3859526587U);
  flightControlSystem_M->Sizes.checksums[3] = (1477640641U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[26];
    flightControlSystem_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = (sysRanDType *)
      &flightControlSystem_DW.ControlSystem.Geofencingerror.Geofencingerror_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &flightControlSystem_DW.ControlSystem.Noopticalflow.Geofencingerror_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &flightControlSystem_DW.ControlSystem.Normalcondition.Geofencingerror_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &flightControlSystem_DW.ControlSystem.Ultrasoundimproper.Geofencingerror_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &flightControlSystem_DW.ControlSystem.estimatorOpticalflowerror.Geofencingerror_SubsysRanBC;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = (sysRanDType *)
      &flightControlSystem_DW.ControlSystem.MeasurementUpdate_SubsysRanBC_m;
    systemRan[10] = (sysRanDType *)
      &flightControlSystem_DW.ControlSystem.EnabledSubsystem_SubsysRanBC_c;
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = (sysRanDType *)
      &flightControlSystem_DW.ControlSystem.MeasurementUpdate_n.MeasurementUpdate_SubsysRanBC;
    systemRan[13] = (sysRanDType *)
      &flightControlSystem_DW.ControlSystem.EnabledSubsystem_d.EnabledSubsystem_SubsysRanBC;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = (sysRanDType *)
      &flightControlSystem_DW.ControlSystem.MeasurementUpdate_j.MeasurementUpdate_SubsysRanBC;
    systemRan[16] = (sysRanDType *)
      &flightControlSystem_DW.ControlSystem.EnabledSubsystem_n.EnabledSubsystem_SubsysRanBC;
    systemRan[17] = (sysRanDType *)
      &flightControlSystem_DW.ControlSystem.TriggeredSubsystem_SubsysRanBC;
    systemRan[18] = &rtAlwaysEnabled;
    systemRan[19] = (sysRanDType *)
      &flightControlSystem_DW.ControlSystem.MeasurementUpdate_SubsysRanBC;
    systemRan[20] = (sysRanDType *)
      &flightControlSystem_DW.ControlSystem.EnabledSubsystem_SubsysRanBC;
    systemRan[21] = &rtAlwaysEnabled;
    systemRan[22] = &rtAlwaysEnabled;
    systemRan[23] = &rtAlwaysEnabled;
    systemRan[24] = &rtAlwaysEnabled;
    systemRan[25] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(flightControlSystem_M->extModeInfo,
      &flightControlSystem_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(flightControlSystem_M->extModeInfo,
                        flightControlSystem_M->Sizes.checksums);
    rteiSetTPtr(flightControlSystem_M->extModeInfo, rtmGetTPtr
                (flightControlSystem_M));
  }

  /* block I/O */
  (void) memset(((void *) &flightControlSystem_B), 0,
                sizeof(B_flightControlSystem_T));

  /* exported global signals */
  motors_outport[0] = 0.0F;
  motors_outport[1] = 0.0F;
  motors_outport[2] = 0.0F;
  motors_outport[3] = 0.0F;
  flag_outport = 0U;

  /* states (dwork) */
  (void) memset((void *)&flightControlSystem_DW, 0,
                sizeof(DW_flightControlSystem_T));

  /* external inputs */
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    flightControlSystem_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 50;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  flightControlSystem_PrevZCX.ControlSystem.TriggeredSubsystem_Trig_ZCE =
    UNINITIALIZED_ZCSIG;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  flightControlSystem_DW.RateTransition_Buffer[0] =
    flightControlSystem_P.RateTransition_InitialCondition;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Control System' */
  flightControlSystem_ControlSystem_Init(&flightControlSystem_B.ControlSystem,
    &flightControlSystem_DW.ControlSystem, &flightControlSystem_P.ControlSystem);

  /* End of SystemInitialize for SubSystem: '<Root>/Control System' */

  /* Start for S-Function (sldrtoo): '<S2>/ThingSpeak Output' */

  /* S-Function Block: <S2>/ThingSpeak Output */

  /* no initial value should be set */

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightControlSystem_DW.Delay_DSTATE =
    flightControlSystem_P.Delay_InitialCondition;

  /* SystemInitialize for MATLAB Function: '<S2>/MATLAB Function' */
  memset(&flightControlSystem_DW.captured[0], 0, 57600U * sizeof(uint8_T));

  /* End of SystemInitialize for SubSystem: '<Root>/Image Processing System' */
}

/* Model terminate function */
void flightControlSystem_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Image Processing System' */

  /* Terminate for S-Function (sldrtoo): '<S2>/ThingSpeak Output' */

  /* S-Function Block: <S2>/ThingSpeak Output */

  /* no final value should be set */

  /* End of Terminate for SubSystem: '<Root>/Image Processing System' */
}
