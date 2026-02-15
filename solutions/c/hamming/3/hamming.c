#include "hamming.h"
#include "string.h"

int compute(const char *lhs, const char *rhs) {
  int ctr = 0;

  if (strlen(rhs) != strlen(lhs)) {
    return -1;
  }

  for (long unsigned int i = 0; i < strlen(lhs); i++) {
    if (lhs[i] != rhs[i]) {
      ctr++;
    }
  }

  return ctr;
}
