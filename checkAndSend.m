function checkAndSend(~,~)

if evalin('base', 'exist(''out'', ''var'')')
    simOut = evalin('base', 'out');

    varsAvailable = simOut.who;
    if any(strcmp(varsAvailable, 'RedImage')) && any(strcmp(varsAvailable, 'isRedDetected'))

        redImg = simOut.RedImage;
        isRed = simOut.isRedDetected;

        if isRed == 1

            timestamp = datetime('now', 'Format', 'yyyyMMdd_HHmmss');
            imgName = ['red_detected_' char(timestamp) '.jpg'];
            imwrite(redImg, imgName);
            fprintf('Red object detected! Image saved as: %s\n', imgName);

            sendRedAlert(imgName);

            stop(timerfindall);
            delete(timerfindall);
            disp('Email sent. Timer stopped');
        else
            disp('Red not detected yet...');
        end
    else
        disp('RedImage or isRedDetected not found in simOut');
    end
else
    disp('Simulation output "out" not found in base workspace');
end
end


          






       

        

                   

                 

       











            


