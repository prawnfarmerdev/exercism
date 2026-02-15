#include "grains.h"
uint64_t square(uint8_t index){
    unsigned int sum =0;
    for(unsigned int i=1;i<=index;i++){
        sum+=i;
    }
    return sum;
}


uint64_t total(void){
    return square(64);
}
