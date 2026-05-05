#include "myBMP180.h"
#include "myMAX30102.h"
#include "myBlynk.h"
#include "myEmail.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  myBlynk_initialise();
  myEmail_initialise();
  myBMP180_initialise();
  myMAX30102_initialise();
}

void loop() {
  // put your main code here, to run repeatedly:
  myBMP180_read();
  Blynk.virtualWrite(V0, temperature);
  Blynk.virtualWrite(V1, pressure);
  myMAX30102_read();
  Blynk.virtualWrite(V3, averageBPM);
  Blynk.virtualWrite(V4, currentSPO2);

  float gsrData = analogRead(A0)*3.3/1023.0;
  Serial.print("Stress level = ");
  Serial.println(gsrData);
  Blynk.virtualWrite(V2, gsrData);

  if ((temperature > 40) || (averageBPM > 200))
  {
    sendEmail();
    while(1);
  }
  delay(2000);

}
