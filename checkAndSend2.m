function checkAndSend2(~,~)

if evalin('base', 'exist(''out'', ''var'')')
    redStruct = evalin('base', 'out');

    if isprop(redStruct, 'isRedDetected') && redStruct.isRedDetected == 1
        if isprop(redStruct, 'RedImage')
            img = redStruct.RedImage;

            timestamp = datetime("now", 'Format','yyyyMMdd_HHmmss');
            imgName = ['red_detected_' char(timestamp) '.jpg'];
            imwrite(img, imgName);

            sendRedAlert(imgName);

            redStruct.isRedDetected = 0;
            redStruct.RedImage = zeros(120,160,3, 'uint8');
            assignin('base', 'out', redStruct);

            

            stop(timerfindall());
            delete(timerfindall());
            disp('Email sent. Timer stopped');
        else
            disp('Property ''RedImage'' not found in ''out''.');
        end
    else
        disp('Red not detected yet...');
    end
else
    disp('''out'' variable not found in base workspace');
end
end


    





        
        