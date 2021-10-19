#include <FB_TempiditySensor.h>

namespace FB {
  TempiditySensor::TempiditySensor(int pin) {
    _dht = new DHT(pin, DHTTYPE);
  }

  void TempiditySensor::begin() {
    _dht->begin();
  }

  float TempiditySensor::getHumidity() {
    return _dht->readHumidity();
  }

  float TempiditySensor::getTemperature() {
    return _dht->readTemperature();
  }
}
