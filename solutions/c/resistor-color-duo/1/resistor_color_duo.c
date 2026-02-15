#include "resistor_color_duo.h"
#include <stddef.h>
#include <stdio.h>

int color_code(resistor_band_t bands[]) {

  int value = bands[0] * 10 + bands[1];
  return value;
}
