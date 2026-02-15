#include "darts.h"
#include <math.h>

int score(coordinate_t z) {
  float highest;
  if (fabsf(z.x) > fabsf(z.y)) {
    highest = z.x;
  } else {
    highest = z.y;
  }
  if (highest <= 1) {
    return 10;
  } else if (highest <= 5) {
    return 5;
  } else if (highest <= 10) {
    return 1;
  } else {
    return 0;
  }
}
