#include "darts.h"
#include <math.h>

int score(coordinate_t z) {
    float distance = sqrtf(z.x * z.x + z.y * z.y);
  if (distance <= 1) {
    return 10;
  } else if (distance <= 5) {
    return 5;
  } else if (distance <= 10) {
    return 1;
  } else {
    return 0;
  }
}
