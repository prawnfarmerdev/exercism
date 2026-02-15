#include "grains.h"
uint64_t square(uint8_t index){
    return index;
}


uint64_t total(void){
    unsigned int sum =0;
    for(unsigned int i=1;i<=64;i++){
        sum+=i;
    }
    return sum;
}
