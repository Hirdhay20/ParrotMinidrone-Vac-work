
function sendRedAlert(imgName)


setpref('Internet','E_mail','Sender')
setpref('Internet', 'SMTP_Server','smtp.gmail.com');
setpref('Internet','SMTP_Username','Sender');
setpref('Internet','SMTP_Password','Password');
props = java.lang.System.getProperties;
props.setProperty('mail.smtp.auth','true');
props.setProperty('mail.smtp.socketFactory.class','javax.net.ssl.SSLSocketFactory');
props.setProperty('mail.smtp.socketFactory.port','465');
props.setProperty('mail.smtp.starttls.enable','true');
props.setProperty('mail.smtp.starttls.enable','true');
sendmail('Recipient','Detected red','Red object has been detected by the drone', imgName);
end
