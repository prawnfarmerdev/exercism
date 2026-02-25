#include "armstrong_numbers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool is_armstrong_number(int candidate) {

  int total = 0, candidatelen = 0;
  int tmp = candidate;
  int original = candidate;
  for (; tmp > 0; candidatelen++) {
    tmp = tmp / 10;
  }
  for (int i = 0; candidate > 0; i++) {
    int digit = candidate % 10;
    int power = 1;
    for (int j = 0; j < candidatelen; j++)
      power *= digit;
    total += power;
    candidate = candidate / 10;
  }

  return total == original;
}
