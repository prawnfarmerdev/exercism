#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number){
    int sum=0;
    for(int i=0;i<=0;i++){
        sum=sum+(i*i);
    }
    return sum;
}
unsigned int square_of_sum(unsigned int number){
    int sum=0;
    for(int i=0;i<=0;i++){
        sum=sum+i;
    }
    return sum*sum;
}
unsigned int difference_of_squares(unsigned int number){
    return number=sum_of_squares(number)-square_of_sum(number);
}
