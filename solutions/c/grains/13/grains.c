#include "grains.h"
uint64_t square(uint8_t index){
    if(index==0){
        return  0;
    }

    unsigned long long result = 1;
    for (uint8_t i = 0; i < index; i++) {
        result *= 2;
    }
    return result;
}



uint64_t total(void){
    return square(65);
}
