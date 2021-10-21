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
      DHT * _dht;
  };
}
#endif
