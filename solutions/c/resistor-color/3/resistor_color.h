#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

typedef enum {

} resistor_band_t;

#endif
#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

typedef enum {
    BLACK = 0,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} resistor_band_t;

/* Returns the numeric value of a resistor band color */
int color_code(resistor_band_t color);

/* Returns an array of all resistor colors */
const resistor_band_t* colors(void);

#endif
