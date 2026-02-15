#include "two_fer.h"
#include <stdio.h>
#include <string.h>

void two_fer(char *buffer, const char *name) {

  char s1[50]="One for ";
  char s2[50]=",one for me.";
  
  if(name==NULL){
    snprintf(buffer,100, "One for you, one for me.");
  } else {

    memcpy(s1 + strlen(s1), name, strlen(name) + 1); 
    memcpy(s1 + strlen(s1), s2, strlen(s2) + 1); 
    snprintf(buffer,100,"%s", s1);
  }
  }
