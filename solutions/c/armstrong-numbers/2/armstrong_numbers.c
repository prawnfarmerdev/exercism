#include "armstrong_numbers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool is_armstrong_number(int candidate) {

  char *stringcandidate = malloc(20 * sizeof(char));
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
  free(stringcandidate);

  if (candidate == total) {
    return 1;
  } else {
    return 0;
  }
}
