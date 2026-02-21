#include "pangram.h"
#include "stdbool.h"
#include "stddef.h"
#include <ctype.h>

bool is_pangram(const char *sentence) {
  if (sentence == NULL)
    return false;
  bool letters[26] = {false};
  bool result = true;
  char c;

  for (int i = 0; sentence[i] != '\0'; i++) {
    c = toupper(sentence[i]);

    if (c - 'A' >= 0 && c - 'A' <= 26) {
      letters[c - 'A'] = true;
    }
  }
  for (int j = 0; j < 26; j++) {
    if (!letters[j]) {
      return false;
    }
  }

  return result;
}
