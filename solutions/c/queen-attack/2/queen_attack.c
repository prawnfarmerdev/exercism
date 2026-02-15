#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2) {

  if(queen_1.row==queen_2.row){
  return CAN_NOT_ATTACK;
  }

  if(queen_1.column==queen_2.column){
  return CAN_ATTACK;
  }
  
  return INVALID_POSITION;
}
