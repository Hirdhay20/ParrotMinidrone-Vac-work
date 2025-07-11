    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 0;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (flightControlSystemIndependent_P)
        ;%

            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 9;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (flightControlSystemIndependent_B)
        ;%
            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_B.RateTransition
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_B.Switch
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_B.outputImage
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_B.PARROTImageConversion_o1
                    section.data(2).logicalSrcIdx = 4;
                    section.data(2).dtTransOffset = 57600;

                    ;% flightControlSystemIndependent_B.PARROTImageConversion_o2
                    section.data(3).logicalSrcIdx = 5;
                    section.data(3).dtTransOffset = 76800;

                    ;% flightControlSystemIndependent_B.PARROTImageConversion_o3
                    section.data(4).logicalSrcIdx = 6;
                    section.data(4).dtTransOffset = 96000;

                    ;% flightControlSystemIndependent_B.imgOut
                    section.data(5).logicalSrcIdx = 7;
                    section.data(5).dtTransOffset = 115200;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_B.ControlSystem.invertzaxisGain
                    section.data(1).logicalSrcIdx = 8;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_B.ControlSystem.CastToDouble
                    section.data(2).logicalSrcIdx = 9;
                    section.data(2).dtTransOffset = 1;

                    ;% flightControlSystemIndependent_B.ControlSystem.CastToDouble1
                    section.data(3).logicalSrcIdx = 10;
                    section.data(3).dtTransOffset = 2;

                    ;% flightControlSystemIndependent_B.ControlSystem.Sum
                    section.data(4).logicalSrcIdx = 11;
                    section.data(4).dtTransOffset = 3;

                    ;% flightControlSystemIndependent_B.ControlSystem.Product2
                    section.data(5).logicalSrcIdx = 12;
                    section.data(5).dtTransOffset = 6;

                    ;% flightControlSystemIndependent_B.ControlSystem.Product3
                    section.data(6).logicalSrcIdx = 13;
                    section.data(6).dtTransOffset = 8;

                    ;% flightControlSystemIndependent_B.ControlSystem.Xo
                    section.data(7).logicalSrcIdx = 15;
                    section.data(7).dtTransOffset = 10;

                    ;% flightControlSystemIndependent_B.ControlSystem.Yo
                    section.data(8).logicalSrcIdx = 16;
                    section.data(8).dtTransOffset = 11;

                    ;% flightControlSystemIndependent_B.ControlSystem.Zo
                    section.data(9).logicalSrcIdx = 17;
                    section.data(9).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_B.ControlSystem.SimplyIntegrateVelocity
                    section.data(1).logicalSrcIdx = 18;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 19;
            section.data(19)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_B.ControlSystem.DataTypeConversion
                    section.data(1).logicalSrcIdx = 19;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_B.ControlSystem.TrigonometricFunction1
                    section.data(2).logicalSrcIdx = 21;
                    section.data(2).dtTransOffset = 1;

                    ;% flightControlSystemIndependent_B.ControlSystem.TrigonometricFunction
                    section.data(3).logicalSrcIdx = 22;
                    section.data(3).dtTransOffset = 2;

                    ;% flightControlSystemIndependent_B.ControlSystem.DataTypeConversion3
                    section.data(4).logicalSrcIdx = 23;
                    section.data(4).dtTransOffset = 3;

                    ;% flightControlSystemIndependent_B.ControlSystem.p
                    section.data(5).logicalSrcIdx = 24;
                    section.data(5).dtTransOffset = 6;

                    ;% flightControlSystemIndependent_B.ControlSystem.q
                    section.data(6).logicalSrcIdx = 25;
                    section.data(6).dtTransOffset = 7;

                    ;% flightControlSystemIndependent_B.ControlSystem.Subtract
                    section.data(7).logicalSrcIdx = 26;
                    section.data(7).dtTransOffset = 8;

                    ;% flightControlSystemIndependent_B.ControlSystem.angularvelocitycompensation
                    section.data(8).logicalSrcIdx = 27;
                    section.data(8).dtTransOffset = 11;

                    ;% flightControlSystemIndependent_B.ControlSystem.Reshapexhat
                    section.data(9).logicalSrcIdx = 28;
                    section.data(9).dtTransOffset = 13;

                    ;% flightControlSystemIndependent_B.ControlSystem.DataTypeConversion2
                    section.data(10).logicalSrcIdx = 29;
                    section.data(10).dtTransOffset = 17;

                    ;% flightControlSystemIndependent_B.ControlSystem.TmpSignalConversionAtToWorkspaceInport1
                    section.data(11).logicalSrcIdx = 30;
                    section.data(11).dtTransOffset = 18;

                    ;% flightControlSystemIndependent_B.ControlSystem.Product
                    section.data(12).logicalSrcIdx = 31;
                    section.data(12).dtTransOffset = 30;

                    ;% flightControlSystemIndependent_B.ControlSystem.Product2_k
                    section.data(13).logicalSrcIdx = 32;
                    section.data(13).dtTransOffset = 32;

                    ;% flightControlSystemIndependent_B.ControlSystem.Product3_a
                    section.data(14).logicalSrcIdx = 33;
                    section.data(14).dtTransOffset = 36;

                    ;% flightControlSystemIndependent_B.ControlSystem.In1
                    section.data(15).logicalSrcIdx = 35;
                    section.data(15).dtTransOffset = 40;

                    ;% flightControlSystemIndependent_B.ControlSystem.Product2_a
                    section.data(16).logicalSrcIdx = 36;
                    section.data(16).dtTransOffset = 41;

                    ;% flightControlSystemIndependent_B.ControlSystem.Product3_g
                    section.data(17).logicalSrcIdx = 37;
                    section.data(17).dtTransOffset = 43;

                    ;% flightControlSystemIndependent_B.ControlSystem.Product2_g
                    section.data(18).logicalSrcIdx = 39;
                    section.data(18).dtTransOffset = 45;

                    ;% flightControlSystemIndependent_B.ControlSystem.Product3_j
                    section.data(19).logicalSrcIdx = 40;
                    section.data(19).dtTransOffset = 47;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_B.ControlSystem.LogicalOperator
                    section.data(1).logicalSrcIdx = 43;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_B.ControlSystem.Compare
                    section.data(1).logicalSrcIdx = 44;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_B.ControlSystem.nicemeasurementornewupdateneeded
                    section.data(2).logicalSrcIdx = 45;
                    section.data(2).dtTransOffset = 1;

                    ;% flightControlSystemIndependent_B.ControlSystem.LogicalOperator3
                    section.data(3).logicalSrcIdx = 46;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            sigMap.sections(7) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%

                        ;% motors_outport
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 244;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        sigMap.sections(8) = section;
                        clear section


                        ;% flag_outport
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 245;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        sigMap.sections(9) = section;
                        clear section



        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 30;
        sectIdxOffset = 9;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (flightControlSystemIndependent_DW)
        ;%
            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_DW.RateTransition_Buffer
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ToWorkspace1_PWORK.LoggedData
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_DW.Scope_PWORK.LoggedData
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 1;

                    ;% flightControlSystemIndependent_DW.ToWorkspace_PWORK.LoggedData
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.RateTransition_ActiveBufIdx
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.captured
                    section.data(1).logicalSrcIdx = 10;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.Delay2_DSTATE
                    section.data(1).logicalSrcIdx = 16;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_DW.ControlSystem.MemoryX_DSTATE
                    section.data(2).logicalSrcIdx = 17;
                    section.data(2).dtTransOffset = 1;

                    ;% flightControlSystemIndependent_DW.ControlSystem.sonarFilter_IIR_states
                    section.data(3).logicalSrcIdx = 18;
                    section.data(3).dtTransOffset = 3;

                    ;% flightControlSystemIndependent_DW.ControlSystem.DelayOneStep_DSTATE
                    section.data(4).logicalSrcIdx = 19;
                    section.data(4).dtTransOffset = 6;

                    ;% flightControlSystemIndependent_DW.ControlSystem.i
                    section.data(5).logicalSrcIdx = 21;
                    section.data(5).dtTransOffset = 7;

                    ;% flightControlSystemIndependent_DW.ControlSystem.X_hold
                    section.data(6).logicalSrcIdx = 22;
                    section.data(6).dtTransOffset = 8;

                    ;% flightControlSystemIndependent_DW.ControlSystem.Y_hold
                    section.data(7).logicalSrcIdx = 23;
                    section.data(7).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.ToWorkspace_PWORK.LoggedData
                    section.data(1).logicalSrcIdx = 24;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 20;
            section.data(20)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.SimplyIntegrateVelocity_DSTATE
                    section.data(1).logicalSrcIdx = 25;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_DW.ControlSystem.pressureFilter_IIR_states
                    section.data(2).logicalSrcIdx = 26;
                    section.data(2).dtTransOffset = 2;

                    ;% flightControlSystemIndependent_DW.ControlSystem.DiscreteTimeIntegrator_DSTATE
                    section.data(3).logicalSrcIdx = 27;
                    section.data(3).dtTransOffset = 5;

                    ;% flightControlSystemIndependent_DW.ControlSystem.MemoryX_DSTATE_g
                    section.data(4).logicalSrcIdx = 28;
                    section.data(4).dtTransOffset = 6;

                    ;% flightControlSystemIndependent_DW.ControlSystem.FIR_IMUaccel_states
                    section.data(5).logicalSrcIdx = 29;
                    section.data(5).dtTransOffset = 8;

                    ;% flightControlSystemIndependent_DW.ControlSystem.MemoryX_DSTATE_m
                    section.data(6).logicalSrcIdx = 30;
                    section.data(6).dtTransOffset = 23;

                    ;% flightControlSystemIndependent_DW.ControlSystem.LPFFcutoff40Hz1_states
                    section.data(7).logicalSrcIdx = 31;
                    section.data(7).dtTransOffset = 25;

                    ;% flightControlSystemIndependent_DW.ControlSystem.LPFFcutoff40Hz_states
                    section.data(8).logicalSrcIdx = 32;
                    section.data(8).dtTransOffset = 26;

                    ;% flightControlSystemIndependent_DW.ControlSystem.IIR_IMUgyro_r_states
                    section.data(9).logicalSrcIdx = 33;
                    section.data(9).dtTransOffset = 27;

                    ;% flightControlSystemIndependent_DW.ControlSystem.MemoryX_DSTATE_l
                    section.data(10).logicalSrcIdx = 34;
                    section.data(10).dtTransOffset = 32;

                    ;% flightControlSystemIndependent_DW.ControlSystem.IIRgyroz_states
                    section.data(11).logicalSrcIdx = 35;
                    section.data(11).dtTransOffset = 36;

                    ;% flightControlSystemIndependent_DW.ControlSystem.UD_DSTATE
                    section.data(12).logicalSrcIdx = 36;
                    section.data(12).dtTransOffset = 46;

                    ;% flightControlSystemIndependent_DW.ControlSystem.Delay_DSTATE
                    section.data(13).logicalSrcIdx = 37;
                    section.data(13).dtTransOffset = 48;

                    ;% flightControlSystemIndependent_DW.ControlSystem.Delay1_DSTATE
                    section.data(14).logicalSrcIdx = 38;
                    section.data(14).dtTransOffset = 50;

                    ;% flightControlSystemIndependent_DW.ControlSystem.Integrator_DSTATE
                    section.data(15).logicalSrcIdx = 39;
                    section.data(15).dtTransOffset = 52;

                    ;% flightControlSystemIndependent_DW.ControlSystem.LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontroller_states
                    section.data(16).logicalSrcIdx = 40;
                    section.data(16).dtTransOffset = 54;

                    ;% flightControlSystemIndependent_DW.ControlSystem.Integrator_DSTATE_d
                    section.data(17).logicalSrcIdx = 41;
                    section.data(17).dtTransOffset = 56;

                    ;% flightControlSystemIndependent_DW.ControlSystem.Filter_DSTATE
                    section.data(18).logicalSrcIdx = 42;
                    section.data(18).dtTransOffset = 58;

                    ;% flightControlSystemIndependent_DW.ControlSystem.DiscreteTimeIntegrator_DSTATE_c
                    section.data(19).logicalSrcIdx = 43;
                    section.data(19).dtTransOffset = 60;

                    ;% flightControlSystemIndependent_DW.ControlSystem.DiscreteTimeIntegrator_DSTATE_d
                    section.data(20).logicalSrcIdx = 44;
                    section.data(20).dtTransOffset = 61;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.FIR_IMUaccel_circBuf
                    section.data(1).logicalSrcIdx = 45;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.Output_DSTATE
                    section.data(1).logicalSrcIdx = 46;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_DW.ControlSystem.Output_DSTATE_n
                    section.data(2).logicalSrcIdx = 47;
                    section.data(2).dtTransOffset = 1;

                    ;% flightControlSystemIndependent_DW.ControlSystem.Output_DSTATE_g
                    section.data(3).logicalSrcIdx = 48;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.FIR_IMUaccel_simContextBuf
                    section.data(1).logicalSrcIdx = 50;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_DW.ControlSystem.FIR_IMUaccel_simRevCoeff
                    section.data(2).logicalSrcIdx = 51;
                    section.data(2).dtTransOffset = 30;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.is_c3_flightControlSystemIndependent
                    section.data(1).logicalSrcIdx = 61;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_DW.ControlSystem.is_Forloop
                    section.data(2).logicalSrcIdx = 62;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.Output_DSTATE_a
                    section.data(1).logicalSrcIdx = 63;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_DW.ControlSystem.temporalCounter_i1
                    section.data(2).logicalSrcIdx = 64;
                    section.data(2).dtTransOffset = 1;

                    ;% flightControlSystemIndependent_DW.ControlSystem.temporalCounter_i2
                    section.data(3).logicalSrcIdx = 65;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.SimplyIntegrateVelocity_PrevResetState
                    section.data(1).logicalSrcIdx = 66;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_DW.ControlSystem.DiscreteTimeIntegrator_PrevResetState
                    section.data(2).logicalSrcIdx = 67;
                    section.data(2).dtTransOffset = 1;

                    ;% flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_SubsysRanBC
                    section.data(3).logicalSrcIdx = 68;
                    section.data(3).dtTransOffset = 2;

                    ;% flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_SubsysRanBC
                    section.data(4).logicalSrcIdx = 69;
                    section.data(4).dtTransOffset = 3;

                    ;% flightControlSystemIndependent_DW.ControlSystem.TriggeredSubsystem_SubsysRanBC
                    section.data(5).logicalSrcIdx = 70;
                    section.data(5).dtTransOffset = 4;

                    ;% flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_SubsysRanBC_c
                    section.data(6).logicalSrcIdx = 71;
                    section.data(6).dtTransOffset = 5;

                    ;% flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_SubsysRanBC_m
                    section.data(7).logicalSrcIdx = 72;
                    section.data(7).dtTransOffset = 6;

                    ;% flightControlSystemIndependent_DW.ControlSystem.estimatorOpticalflowerror_SubsysRanBC
                    section.data(8).logicalSrcIdx = 73;
                    section.data(8).dtTransOffset = 7;

                    ;% flightControlSystemIndependent_DW.ControlSystem.Geofencingerror_SubsysRanBC
                    section.data(9).logicalSrcIdx = 74;
                    section.data(9).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.is_active_c3_flightControlSystemIndependent
                    section.data(1).logicalSrcIdx = 75;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.icLoad
                    section.data(1).logicalSrcIdx = 76;
                    section.data(1).dtTransOffset = 0;

                    ;% flightControlSystemIndependent_DW.ControlSystem.icLoad_p
                    section.data(2).logicalSrcIdx = 77;
                    section.data(2).dtTransOffset = 1;

                    ;% flightControlSystemIndependent_DW.ControlSystem.icLoad_k
                    section.data(3).logicalSrcIdx = 78;
                    section.data(3).dtTransOffset = 2;

                    ;% flightControlSystemIndependent_DW.ControlSystem.icLoad_o
                    section.data(4).logicalSrcIdx = 79;
                    section.data(4).dtTransOffset = 3;

                    ;% flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_MODE
                    section.data(5).logicalSrcIdx = 83;
                    section.data(5).dtTransOffset = 4;

                    ;% flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_MODE
                    section.data(6).logicalSrcIdx = 84;
                    section.data(6).dtTransOffset = 5;

                    ;% flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_MODE_l
                    section.data(7).logicalSrcIdx = 85;
                    section.data(7).dtTransOffset = 6;

                    ;% flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_MODE_c
                    section.data(8).logicalSrcIdx = 86;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_n.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 87;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_n.EnabledSubsystem_MODE
                    section.data(1).logicalSrcIdx = 88;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_j.MeasurementUpdate_SubsysRanBC
                    section.data(1).logicalSrcIdx = 89;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(18) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_j.MeasurementUpdate_MODE
                    section.data(1).logicalSrcIdx = 90;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(19) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.sf_SqrtUsedFcn_e.sfEvent
                    section.data(1).logicalSrcIdx = 91;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(20) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.sf_SqrtUsedFcn_e.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 92;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(21) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_d.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 93;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(22) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.EnabledSubsystem_d.EnabledSubsystem_MODE
                    section.data(1).logicalSrcIdx = 94;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(23) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_n.MeasurementUpdate_SubsysRanBC
                    section.data(1).logicalSrcIdx = 95;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(24) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.MeasurementUpdate_n.MeasurementUpdate_MODE
                    section.data(1).logicalSrcIdx = 96;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(25) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.sf_SqrtUsedFcn_h.sfEvent
                    section.data(1).logicalSrcIdx = 97;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(26) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.sf_SqrtUsedFcn_h.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 98;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(27) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.Normalcondition.Noopticalflow_SubsysRanBC
                    section.data(1).logicalSrcIdx = 99;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(28) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.Ultrasoundimproper.Noopticalflow_SubsysRanBC
                    section.data(1).logicalSrcIdx = 100;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(29) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% flightControlSystemIndependent_DW.ControlSystem.Noopticalflow.Noopticalflow_SubsysRanBC
                    section.data(1).logicalSrcIdx = 101;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(30) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 144465316;
    targMap.checksum1 = 4219378153;
    targMap.checksum2 = 286412116;
    targMap.checksum3 = 1287171430;

