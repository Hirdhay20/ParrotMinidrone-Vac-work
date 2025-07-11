/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystemIndependent_data.c
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

/* Constant parameters (default storage) */
const ConstP_flightControlSystemIndependent_T
  flightControlSystemIndependent_ConstP = {
  /* Expression: U
   * Referenced by: '<S6>/Chart'
   */
  { 0.0, 0.0, 3.0, 3.0, 0.5, 0.5, 2.5, 2.5, 1.0, 1.0, 2.0, 2.0, 1.5, 1.5, 0.0,
    3.0, 3.0, 0.0, 0.0, 2.5, 2.5, 0.5, 0.5, 2.0, 2.0, 1.0, 1.0, 1.5 },

  /* Expression: pInitialization.M
   * Referenced by: '<S461>/KalmanGainM'
   */
  { 0.066408162001371535, 0.0, -0.021605460397771489, 0.0, 0.0,
    0.066408162001371535, 0.0, -0.021605460397771489 },

  /* Expression: pInitialization.L
   * Referenced by: '<S461>/KalmanGainL'
   */
  { 0.066516189303360354, 5.23402355848703E-19, -0.021605460397771867,
    -4.8628553107267881E-19, 4.3622439914025307E-18, 0.066516189303360354,
    -4.5659075919712689E-17, -0.021605460397771864 },

  /* Expression: [0 0 g]
   * Referenced by: '<S252>/gravity'
   */
  { 0.0, 0.0, 9.81 },

  /* Computed Parameter: TorqueTotalThrustToThrustPerMotor_Value
   * Referenced by: '<S10>/TorqueTotalThrustToThrustPerMotor'
   */
  { 0.25F, 0.25F, 0.25F, 0.25F, 103.573624F, -103.573624F, 103.573624F,
    -103.573624F, -5.66592F, -5.66592F, 5.66592F, 5.66592F, -5.66592F, 5.66592F,
    5.66592F, -5.66592F },

  /* Computed Parameter: A_Value_a
   * Referenced by: '<S442>/A'
   */
  { 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, -0.005F, 0.0F, 1.0F, 0.0F,
    0.0F, -0.005F, 0.0F, 1.0F },

  /* Computed Parameter: Assumingthatthepreflightcalibrationwasdoneatlevelorientation_Bias
   * Referenced by: '<S254>/Assuming that the  preflight calibration was done at level orientation'
   */
  { 0.0F, 0.0F, 9.81F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: inverseIMU_gain_Gain
   * Referenced by: '<S254>/inverseIMU_gain'
   */
  { 0.994075298F, 0.996184587F, 1.00549F, 1.00139189F, 0.993601203F, 1.00003F },

  /* Computed Parameter: FIR_IMUaccel_Coefficients
   * Referenced by: '<S254>/FIR_IMUaccel'
   */
  { 0.0264077242F, 0.140531361F, 0.33306092F, 0.33306092F, 0.140531361F,
    0.0264077242F },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S322>/C'
   *   '<S376>/C'
   */
  { 1.0F, 0.0F },

  /* Pooled Parameter (Expression: Estimator.IMU.filterGyroNum)
   * Referenced by:
   *   '<S254>/IIR_IMUgyro_r'
   *   '<S441>/IIRgyroz'
   */
  { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
    0.282124132F },

  /* Pooled Parameter (Expression: Estimator.IMU.filterGyroDen)
   * Referenced by:
   *   '<S254>/IIR_IMUgyro_r'
   *   '<S441>/IIRgyroz'
   */
  { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

  /* Computed Parameter: C_Value_i
   * Referenced by: '<S442>/C'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: B_Value_f
   * Referenced by: '<S442>/B'
   */
  { 0.005F, 0.0F, 0.0F, 0.0F, 0.0F, 0.005F, 0.0F, 0.0F },

  /* Computed Parameter: MotorDirections_Gain
   * Referenced by: '<S13>/MotorDirections'
   */
  { 1.0F, -1.0F, 1.0F, -1.0F }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
