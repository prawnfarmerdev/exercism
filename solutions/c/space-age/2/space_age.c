#include "space_age.h"

float age(planet_t planet, int64_t seconds) {

  seconds=seconds/31557600;

  switch (planet) {
  case MERCURY:
    return seconds * 0.2408467;
    break;
  case VENUS:
    return seconds * 0.61519726;
    break;
  case EARTH:
    return seconds * 1.0;
    break;
  case MARS:
    return seconds * 1.8808158;
    break;
  case JUPITER:
    return seconds * 11.862615;
    break;
  case SATURN:
    return seconds * 29.447498;
    break;
  case URANUS:
    return seconds * 84.016846;
    break;
  case NEPTUNE:
    return seconds * 164.79132;
    break;
  default :
    return -1.0;
  }
}
