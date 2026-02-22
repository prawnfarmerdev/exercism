#include "pangram.h"
#include "stdbool.h"
#include "stddef.h"

bool is_pangram(const char *sentence) {
  if (sentence == NULL)
    return false;
  bool letters[26] = {false};
  bool result = true;

  for (int i = 0; sentence[i] != '\0'; i++) {

    char c = sentence[i];
    switch (c) {
    case 'a':
    case 'A':
      letters[0] = true;
      break;
    case 'b': case 'B':
      letters[1] = true;
      break;
    case 'c':
    case 'C':
      letters[2] = true;
      break;
    case 'd':
    case 'D':
      letters[3] = true;
      break;
    case 'e':
    case 'E':
      letters[4] = true;
      break;
    case 'f':
    case 'F':
      letters[5] = true;
      break;
    case 'g':
    case 'G':
      letters[6] = true;
      break;
    case 'h':
    case 'H':
      letters[7] = true;
      break;
    case 'i':
    case 'I':
      letters[8] = true;
      break;
    case 'j':
    case 'J':
      letters[9] = true;
      break;
    case 'k':
    case 'K':
      letters[10] = true;
      break;
    case 'l':
    case 'L':
      letters[11] = true;
      break;
    case 'm':
    case 'M':
      letters[12] = true;
      break;
    case 'n':
    case 'N':
      letters[13] = true;
      break;
    case 'o':
    case 'O':
      letters[14] = true;
      break;
    case 'p':
    case 'P':
      letters[15] = true;
      break;
    case 'q':
    case 'Q':
      letters[16] = true;
      break;
    case 'r':
    case 'R':
      letters[17] = true;
      break;
    case 's':
    case 'S':
      letters[18] = true;
      break;
    case 't':
    case 'T':
      letters[19] = true;
      break;
    case 'u':
    case 'U':
      letters[20] = true;
      break;
    case 'v':
    case 'V':
      letters[21] = true;
      break;
    case 'w':
    case 'W':
      letters[22] = true;
      break;
    case 'x':
    case 'X':
      letters[23] = true;
      break;
    case 'y':
    case 'Y':
      letters[24] = true;
      break;
    case 'z':
    case 'Z':
      letters[25] = true;
      break;
    default:
      break;
    }
  }
  for (int j = 0; j < 26; j++) {
    if (!letters[j]) {
      return false;
    }
  }

  return result;
}
