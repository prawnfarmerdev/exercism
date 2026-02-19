#include "high_scores.h"
#include "stdlib.h"
#include "string.h"


int32_t latest(const int32_t *scores, size_t scores_len) {
  return scores[scores_len - 1];
}

int32_t personal_best(const int32_t *scores, size_t scores_len) {
  int32_t highest = 0;
  for (long unsigned int i = 0; i < scores_len; i++) {
    if (scores[i] > highest) {
      highest = scores[i];
    }
  }

  return highest;
}

size_t personal_top_three(const int32_t *scores, size_t scores_len,
                          int32_t *output) {
  int x = 0;
  int y = 0;
  int z = 0;


  for (long unsigned int i = 0; i < scores_len; i++) {

    if (scores[i] >= x ) {
      z = y;
      y = x;
      x = scores[i];
    }
    else if (scores[i] >= y ) {
      z = y;
      y = scores[i];
    }
    else if (scores[i] >= z ) {
      z = scores[i];
    }
  }

  output[0] = x;
  output[1] = y;
  output[2] = z;

  if(scores_len==0){
    return 0;
  }
  else if(scores_len==1){
    return 1;
  }
  if(scores_len==2){
    return 2;
  } else
    {
      return 3;
    }
  


}
