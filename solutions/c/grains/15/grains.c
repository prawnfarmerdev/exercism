#include "grains.h"
uint64_t square(uint8_t index) {
    if(index == 0) return 0;
    unsigned long long result = 1;
    for(unsigned char i = 1; i < index; i++) {
        result *= 2;
    }
    return result;
}
uint64_t total(void) {
    return ~0ULL; // 2^64 - 1 = 18446744073709551615
}
