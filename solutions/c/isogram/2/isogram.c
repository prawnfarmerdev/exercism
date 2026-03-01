#include "isogram.h"
#include <ctype.h>
#include <stddef.h>

bool is_isogram(const char phrase[]) {
  if (phrase == NULL)
    return false;
  if (phrase[0] == '\0')
    return true;
  int letters[26] = {0};
  char c;

  for (int i = 0; phrase[i] != '\0'; i++) {
    c = toupper(phrase[i]);

    if (c - 'A' >= 0 && c - 'A' <= 25) {
      letters[c - 'A'] += 1;
    }
  }
  for (int j = 0; j < 26; j++) {
    if (letters[j] > 1) {
      return false;
    }
  }

  return true;
}
