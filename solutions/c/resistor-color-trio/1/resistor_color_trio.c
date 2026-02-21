#include "resistor_color_trio.h"

resistor_value_t color_code(resistor_band_t colors[]) {
    long value = (colors[0] * 10 + colors[1]);

    int multiplier = colors[2];
    for (int i = 0; i < multiplier; i++) {
        value *= 10;
    }

    resistor_value_t result;
    if (value >= 1000000000L) {
        result.value = value / 1000000000L;
        result.unit = GIGAOHMS;
    } else if (value >= 1000000) {
        result.value = value / 1000000;
        result.unit = MEGAOHMS;
    } else if (value >= 1000) {
        result.value = value / 1000;
        result.unit = KILOOHMS;
    } else {
        result.value = value;
        result.unit = OHMS;
    }

    return result;
}
