#include "collatz_conjecture.h"

static int helper(long long start, int count) {
    if (start == 1)
        return count;

    if (start % 2 == 0)
        return helper(start / 2, count + 1);
    else
        return helper(start * 3 + 1, count + 1);
}

int steps(long long start) {
    if (start <= 0)
        return ERROR_VALUE;

    return helper(start, 0);
}
