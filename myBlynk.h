#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPL3ofyLHCBm"
#define BLYNK_TEMPLATE_NAME "IoT Health monitor"
#define BLYNK_AUTH_TOKEN "mco_EBlfaHHLfNRb95Ae9PwFZ6xeyWsA"

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials.
char ssid[] = "Manju_Guest";
char pass[] = "Manju@123";

void myBlynk_initialise()
{
  // Connect to Blynk server
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}
