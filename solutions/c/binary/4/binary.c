#include "binary.h"
#include "string.h"

int convert(const char *input) {

   int inpsize = strlen(input);
  int decimal = 0;

  for (int i = 0; i < inpsize; i++) {

    switch (input[i]) {
    case '1':
      decimal += 1ULL << (inpsize - i - 1);
      break;
    case '0':
      break;
    default:
      return -1;
    }
  }
  return decimal;
}
