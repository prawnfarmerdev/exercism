#include "perfect_numbers.h"

kind classify_number(int number) {

  int sum = 1;

  if (number <= 0) {
    return -1;
  }
  if (number == 1) {
    return 3;
  }

    for (int d = 2; d * d <= number; d++) {
        if (number % d == 0) {
            int other = number / d;

            sum+= d;
            if (other != d && other != number) {
                sum += other;
            }
            if (sum > number) {
                return 2;
            }
        }
    }
  if (sum == number) {
    return 1;
  };
  if (sum > number) {
    return 2;
  };
  if (sum < number) {
    return 3;
  };

  return -1;
}
