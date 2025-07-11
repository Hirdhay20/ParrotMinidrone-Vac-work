
function sendRedAlert(imgName)

% Setup email preferences for Gmail
setpref('Internet','E_mail','monkeydavids105@gmail.com')
setpref('Internet', 'SMTP_Server','smtp.gmail.com');
setpref('Internet','SMTP_Username','monkeydavids105@gmail.com');
setpref('Internet','SMTP_Password','egoj ybyo mgmb wjaq');
props = java.lang.System.getProperties;
props.setProperty('mail.smtp.auth','true');
props.setProperty('mail.smtp.socketFactory.class','javax.net.ssl.SSLSocketFactory');
props.setProperty('mail.smtp.socketFactory.port','465');
props.setProperty('mail.smtp.starttls.enable','true');
props.setProperty('mail.smtp.starttls.enable','true');
% Send the email with subject and image attachment 
sendmail('monkeydavids105@gmail.com','detected red','Red object has been detected', imgName);
end