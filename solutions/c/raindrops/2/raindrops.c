#include "raindrops.h"
#include <stdio.h>

void convert(char result[], int drops) {

  int pos = 0;
  result[0] = '\0';

  if (drops % 3 == 0) {
    pos += snprintf(result + pos, 16, "%s", "Pling");
  }
  if (drops % 5 == 0) {
    pos += snprintf(result + pos, 16, "%s", "Plang");
  }
  if (drops % 7 == 0) {

    pos = +snprintf(result + pos, 16, "%s", "Plong");
  }
  if (pos == 0) {

    pos += snprintf(result, 16, "%d", drops);
  }
}
