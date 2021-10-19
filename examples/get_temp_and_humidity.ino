#include <FB_TempiditySensor.h>

#define TEMP_AND_HUMIDITY_PIN 2

FB::TempiditySensor tempidity(TEMP_AND_HUMIDITY_PIN);

void setup() {
  Serial.begin(9600);
  tempidity.begin();
}

void loop() {
  float humidity = tempidity.getHumidity();
  float temperature = tempidity.getTemperature();

  delay(2000);

  Serial.print(F("Humidity: "));
  Serial.print(humidity);

  Serial.print(F("% Temperature: "));
  Serial.print(temperature);
  Serial.print(" °C");

  Serial.println("");
}