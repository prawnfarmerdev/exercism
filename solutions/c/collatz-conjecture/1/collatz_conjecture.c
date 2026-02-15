#include "collatz_conjecture.h"

unsigned int count=1;


int steps(int start){
    if(start==1){
        return count;
    }


    if(start%2==0){
        start=start/2;
        count++;
        steps(start);
    }
    else{
        start=(start*3)+1;
    count++;
    steps(start);
    }


    return count;
}
