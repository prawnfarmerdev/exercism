#include "grains.h"
uint64_t square(uint8_t index){
    index=index-1;
    uint64_t result = 1;
    for (uint8_t i = 1; i <= index; i++) {
        result *= i;
    }
    return result;
}



uint64_t total(void){
    return square(64);
}
