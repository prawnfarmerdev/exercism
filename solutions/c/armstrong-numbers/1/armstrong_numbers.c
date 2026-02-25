#include "armstrong_numbers.h"
#include <stdio.h>
#include <string.h>

bool is_armstrong_number(int candidate) {
  char stringcandidate[10];
  sprintf(stringcandidate, "%d", candidate);
  int sizeofcandidate = strlen(stringcandidate);
  int total = 0;
  for (int i = 0; i < sizeofcandidate; i++) {
    int digit = stringcandidate[i] - '0';
    int power = 1;
    for (int j = 0; j < sizeofcandidate; j++) {
      power *= digit;
    }

    total += power;
  }

  if (candidate == total) {
    return 1;
  } else {
    return 0;
  }
}
