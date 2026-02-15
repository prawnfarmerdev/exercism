#include "collatz_conjecture.h"

int steps(long long start) {
    if (start == 1)
        return 1;

    if (start % 2 == 0)
        return 1 + steps(start / 2);
    else
        return 1 + steps(start * 3 + 1);
}
