#include "eliuds_eggs.h"

int egg_count(unsigned int num) {

  unsigned int numofeggs = 0;


  while (num != 0) {
    if (num % 2==1) {
      numofeggs++;
    }
    num /= 2;
  }

  return numofeggs;
}
