#include <stdio.h>

int main (void) {
  int d1,d2,d3,d4,d5,d6,d7,d8;
  scanf("%d%d%d%d%d%d%d%d",&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8);
  // transformar em complemento a1;
  //d1
  if (d1 == 0) {
    d1 = 1;
  } else {
    d1 = 0;
  }
  //d2;
  if (d2 == 0) {
    d2 = 1;
  } else {
    d2 = 0;
  }
  // d3;
  if (d3 == 0) {
    d3 = 1;
  } else {
    d3 = 0;
  }
  // d4;
   if (d4 == 0) {
    d4 = 1;
  } else {
    d4 = 0;
  }
  // d5;
   if (d5 == 0) {
    d5 = 1;
  } else {
    d5 = 0;
  }
  // d6
   if (d6 == 0) {
    d6 = 1;
  } else {
    d6 = 0;
  }
  // d7
   if (d7 == 0) {
    d7 = 1;
  } else {
    d7 = 0;
  }
  //d8
   if (d8 == 0) {
    d8 = 1;
  } else {
    d8 = 0;
  }
  printf("%d%d%d%d% d%d%d%d",d1,d2,d3,d4,d5,d6,d7,d8);

  return 0;
}