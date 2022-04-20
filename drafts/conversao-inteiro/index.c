#include <stdio.h>
#include <math.h>

int main(void) {
  int d1,d2,d3,d4,d5,d6,d7,d8, inteiro;
  d1 = 0;
  d2 = 1;
  d3 = 0;
  d4 = 0;
  d5 = 0;
  d6 = 0;
  d7 = 1;
  d8 = 1;
  inteiro = (d8 * pow(2,0)) + (d7 * pow(2,1)) + (d6 * pow(2,2)) + (d5 * pow(2,3)) + (d4 * pow(2,4)) + (d3 * pow(2,5)) + (d2 * pow(2,6)) + (d1 * pow(2,-7));
  printf("%d\n", inteiro);
  return 0;
}