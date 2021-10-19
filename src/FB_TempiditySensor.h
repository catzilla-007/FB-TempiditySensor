// Requires DHT_sensor_library from adafruit
// https://github.com/adafruit/DHT-sensor-library
#include <DHT.h>

#ifndef FB_TEMPIDITY_SENSOR_H
#define FB_TEMPIDITY_SENSOR_H

#define DHTTYPE DHT11

namespace FB {
  class TempiditySensor {
    public:
      TempiditySensor(int pin);
      void begin();
      float getHumidity();
      float getTemperature();

    private:
      int _pin;
      DHT * _dht;
  };
}
#endif
