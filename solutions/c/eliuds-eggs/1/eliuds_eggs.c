#include "eliuds_eggs.h"

int egg_count(unsigned int num) {

  unsigned int numofeggs = 0;

  long long binary = 0;
  int place = 1;

  while (num != 0) {
    if ((num % 2) * place > 0) {
      numofeggs++;
    }
    binary += (num % 2) * place;
    num /= 2;
    place *= 10;
  }

  return numofeggs;
}
