/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
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
#include <ext_work.h>
#include <ext_svr.h>
#include <ext_share.h>
#include <updown.h>
#include "MW_target_hardware_resources.h"

volatile int IsrOverrun = 0;
boolean_T isRateRunning[2] = { 0, 0 };

boolean_T need2runFlags[2] = { 0, 0 };

void rt_OneStep(void)
{
  boolean_T eventFlags[2];

  /* Check base rate for overrun */
  if (isRateRunning[0]++) {
    IsrOverrun = 1;
    isRateRunning[0]--;                /* allow future iterations to succeed*/
    return;
  }

  /*
   * For a bare-board target (i.e., no operating system), the rates
   * that execute this base step are buffered locally to allow for
   * overlapping preemption.
   */
  flightControlSystemIndependent_SetEventsForThisBaseStep(eventFlags);
  flightControlSystemIndependent_step0();

  /* Get model outputs here */
  isRateRunning[0]--;
  if (eventFlags[1]) {
    if (need2runFlags[1]++) {
      IsrOverrun = 1;
      need2runFlags[1]--;              /* allow future iterations to succeed*/
      return;
    }
  }

  if (need2runFlags[1]) {
    if (isRateRunning[1]) {
      /* Yield to higher priority*/
      return;
    }

    isRateRunning[1]++;

    /* Step the model for subrate "1" */
    switch (1)
    {
     case 1 :
      flightControlSystemIndependent_step1();

      /* Get model outputs here */
      break;

     default :
      break;
    }

    need2runFlags[1]--;
    isRateRunning[1]--;
  }

  rtExtModeCheckEndTrigger();
}

#define UNUSED(x)                      x = x

volatile boolean_T stopRequested;
volatile boolean_T runModel;
int main(void)
{
  float modelBaseRate = 0.005;
  float systemClock = 416;

  /* Initialize variables */
  stopRequested = false;
  runModel = false;
  UNUSED(modelBaseRate);
  UNUSED(systemClock);
  rtmSetErrorStatus(flightControlSystemIndependent_M, 0);

  /* initialize external mode */
  rtParseArgsForExtMode(0, NULL);
  flightControlSystemIndependent_initialize();
  ;
  ;

  /* External mode */
  rtSetTFinalForExtMode(&rtmGetTFinal(flightControlSystemIndependent_M));
  rtExtModeCheckInit(2);

  {
    boolean_T rtmStopReq = false;
    rtExtModeWaitForStartPkt(flightControlSystemIndependent_M->extModeInfo, 2,
      &rtmStopReq);
    if (rtmStopReq) {
      rtmSetStopRequested(flightControlSystemIndependent_M, true);
    }
  }

  rtERTExtModeStartMsg();
  ;
  runModel =
    rtmGetErrorStatus(flightControlSystemIndependent_M) == (NULL)&&
    !rtmGetStopRequested(flightControlSystemIndependent_M);
  ;
  while (runModel) {
    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(flightControlSystemIndependent_M->extModeInfo, 2,
                       &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(flightControlSystemIndependent_M, true);
      }
    }

    rt_OneStep();
    stopRequested = !(
                      rtmGetErrorStatus(flightControlSystemIndependent_M) ==
                      (NULL)&& !rtmGetStopRequested
                      (flightControlSystemIndependent_M));
    runModel = !(stopRequested);
  }

  /* Terminate model */
  flightControlSystemIndependent_terminate();

  /* External mode shutdown */
  rtExtModeShutdown(2);
  ;
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
