function checkAndSend3(~, ~)
channelID =  'your channelID';
readkey = 'your readAPIKey';
writekey = 'your WriteAPIKey';
warningthing = MException('component:mnemonic', ...
            'msg');
try
    
    redValTbl =  thingSpeakRead(channelID, 'Fields', 1, 'ReadKey', readkey, 'OutputFormat', 'table');
    redVal = redValTbl.redDetectionFlag;
    if ~isempty(redVal) && redVal == 1
        disp('Red detected - taking screenshot');
        figs = findall(0, 'Type', 'figure');
        
        if ~isempty(figs)
            img = screencapture(figs(1));
            
    
            timestamp = datetime("now", 'Format','yyyyMMdd_HHmmss');
            imgName = ['red_' char(timestamp) '.jpg'];
            imwrite(img, imgName);
    
            sendRedAlert(imgName);
    
            thingSpeakWrite(channelID, 0, 'Fields', 1, 'WriteKey',writekey);
            disp('Email sent from ThingSpeak detection. Timer Stopped');
        else
            disp('No active figure to capture screenshot');
        end
        stop(timerfindall);
        delete(timerfindall);
    

    
      
    end
catch ME
    disp('An error occured');
    disp(ME.message);
    stop(timerfindall);
    delete(timerfindall);
    
   
end
end
   
    
     




     


