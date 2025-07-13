
function sendRedAlert(imgName)

% Setup email preferences for Gmail
setpref('Internet','E_mail','Sender')
setpref('Internet', 'SMTP_Server','smtp.gmail.com');
setpref('Internet','SMTP_Username','Sender');
setpref('Internet','SMTP_Password','App password');
props = java.lang.System.getProperties;
props.setProperty('mail.smtp.auth','true');
props.setProperty('mail.smtp.socketFactory.class','javax.net.ssl.SSLSocketFactory');
props.setProperty('mail.smtp.socketFactory.port','465');
props.setProperty('mail.smtp.starttls.enable','true');
props.setProperty('mail.smtp.starttls.enable','true');
% Send the email with subject and image attachment 
sendmail('Recipient','detected red','Red object has been detected', imgName);
end
