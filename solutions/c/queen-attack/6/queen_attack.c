#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2) {

  if (queen_1.row == 0 || queen_2.row == 0 || queen_1.column == 0 ||
      queen_2.column == 0) {
    return INVALID_POSITION;
  }
  if (queen_1.row == queen_2.row && queen_1.column == queen_2.column) {
    return INVALID_POSITION;
  }
  if (queen_1.column == queen_2.column || queen_1.row == queen_2.row) {
    return CAN_ATTACK;
  }
  if (queen_1.row != queen_2.row || queen_1.column != queen_2.column) {
    return CAN_NOT_ATTACK;
  }
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

  return INVALID_POSITION;
}
