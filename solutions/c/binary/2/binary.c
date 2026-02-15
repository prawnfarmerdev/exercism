#include "binary.h"
#include "math.h"
#include "string.h"

int convert(const char *input) {

  int size_t = strlen(input);
  int decimal = 0;

  for (int i = 0; i < size_t; i++) {

    switch (input[i]) {
    case '1':
      decimal += pow(2, size_t - i - 1 );
      break;
    case '0':
      break;
    default:
      return -1;
    }
  }
  return decimal;
}
