#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2) {

  /* 1. Check bounds */
  if (queen_1.row > 7 || queen_1.column > 7 ||
      queen_2.row > 7 || queen_2.column > 7) {
    return INVALID_POSITION;
  }

  /* 2. Same square */
  if (queen_1.row == queen_2.row &&
      queen_1.column == queen_2.column) {
    return INVALID_POSITION;
  }

  /* 3. Same row or column */
  if (queen_1.column == queen_2.column ||
      queen_1.row == queen_2.row) {
    return CAN_ATTACK;
  }

  /* 4. Diagonal */
  int row_diff;
  int col_diff;

  if (queen_1.row > queen_2.row)
    row_diff = queen_1.row - queen_2.row;
  else
    row_diff = queen_2.row - queen_1.row;

  if (queen_1.column > queen_2.column)
    col_diff = queen_1.column - queen_2.column;
  else
    col_diff = queen_2.column - queen_1.column;

  if (row_diff == col_diff)
    return CAN_ATTACK;

  /* 5. Otherwise */
  return CAN_NOT_ATTACK;
}
