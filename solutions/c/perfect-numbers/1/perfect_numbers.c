#include "perfect_numbers.h"

kind classify_number(int number) {

  int divisortotal = 0;

  if (number <= 0) {
    return -1;
  }

  for (int i = 1; i < number; i++) {
    if (number % i == 0) {
      divisortotal += i;
    };
  };

  if (divisortotal == number) {
    return 1;
  };
  if (divisortotal > number) {
    return 2;
  };
  if (divisortotal < number) {
    return 3;
  };

  return -1;
}
