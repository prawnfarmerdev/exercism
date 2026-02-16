#include "dnd_character.h"
#include <stdlib.h>

int ability(void) {
    int rolls[4];

    for (int i = 0; i < 4; i++) {
        rolls[i] = (rand() % 6) + 1;
    }

    int min = rolls[0];
    int sum = rolls[0];

    for (int i = 1; i < 4; i++) {
        sum += rolls[i];
        if (rolls[i] < min) {
            min = rolls[i];
        }
    }

    return sum - min;
}

int modifier(int score) {
    return (score - 10) / 2 - ((score - 10) < 0 && (score - 10) % 2);
}



dnd_character_t make_dnd_character(void) {
  dnd_character_t c = {
   .strength=ability(),
   .dexterity=ability(),
   .constitution=ability(),
   .intelligence=ability(),
   .wisdom=ability(),
   .charisma=ability(),
   .hitpoints=ability(),
  };
   c.hitpoints = 10 + modifier(c.constitution);
    return c;
}
