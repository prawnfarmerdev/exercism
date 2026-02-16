#include "raindrops.h"
#include <stdio.h>
#include <string.h>


void convert(char result[], int drops) {


  if (drops % 3 == 0) {
    snprintf(result,16,"%s","Pling");
  }
  if (drops % 5 == 0) {
    snprintf(result + strlen(result),16,"%s","Plang");
  }
  if (drops % 7 == 0) {
    
    snprintf(result + strlen(result),16,"%s","Plong");
  }
  if (strlen(result) == 0) {

    snprintf(result,16,"%d",drops);
  }

}
