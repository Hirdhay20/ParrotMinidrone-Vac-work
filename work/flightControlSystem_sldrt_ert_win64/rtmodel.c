/*
 *  rtmodel.c:
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

#include "rtmodel.h"

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void flightControlSystem_output(int_T tid)
{
  switch (tid) {
   case 0 :
    flightControlSystem_output0();
    break;

   case 1 :
    flightControlSystem_output1();
    break;

   default :
    /* do nothing */
    break;
  }
}

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void flightControlSystem_update(int_T tid)
{
  switch (tid) {
   case 0 :
    flightControlSystem_update0();
    break;

   case 1 :
    flightControlSystem_update1();
    break;

   default :
    /* do nothing */
    break;
  }
}
