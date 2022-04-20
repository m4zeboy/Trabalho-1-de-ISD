#include <stdio.h>

int main(void) {
  int a,b;
  char end;

  while (end != 'S') {
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("Deseja encerrar o programa? ");
    scanf(" %c", &end);
  }
  

}