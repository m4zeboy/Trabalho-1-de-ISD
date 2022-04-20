#include <stdio.h>
#include <math.h>

int main(void) {
  int 
  b1,b2,b3,b4,b5,b6,b7,b8;
  int hex_direita, hex_esquerda;
  char hex_direita_char, hex_esquerda_char;

  b8 = 0;
  b7 = 1;
  b6 = 1;
  b5 = 1;

  hex_direita = (b8 * pow(2,0)) + (b7 * pow(2,1)) + (b6 * pow (2,2)) + (b5 * pow(2,3));
  switch (hex_direita) {
    case 0:
      hex_direita_char = '0';
    break;
    case 1:
      hex_direita_char = '1';
    break;
    case 2:
      hex_direita_char = '2';
    break;
    case 3:
      hex_direita_char = '3';
    break;
    case 4:
      hex_direita_char = '4';
    break;
    case 5:
      hex_direita_char = '5';
    break;
    case 6:
      hex_direita_char = '6';
    break;
    case 7:
      hex_direita_char = '7';
    break;
    case 8:
      hex_direita_char = '8';
    break;
    case 9:
      hex_direita_char = '9';
    break;
    case 10:
      hex_direita_char = 'A';
    break;
    case 11:
      hex_direita_char = 'B';
    break;
    case 12:
      hex_direita_char = 'C';
    break;
    case 13:
      hex_direita_char = 'D';
    break;
    case 14:
      hex_direita_char = 'E';
    break;
    case 15:
      hex_direita_char = 'F';
    break;
  }
  
  b4 = 0;
  b3 = 1;
  b2 = 0;
  b1 = 1;
  // 1010 1110
  hex_esquerda = (b4 * pow(2,0)) + (b3 * pow(2,1)) + (b2 * pow (2,2)) + (b1 * pow(2,3));
    switch (hex_esquerda) {
    case 0:
      hex_esquerda_char = '0';
    break;
    case 1:
      hex_esquerda_char = '1';
    break;
    case 2:
      hex_esquerda_char = '2';
    break;
    case 3:
      hex_esquerda_char = '3';
    break;
    case 4:
      hex_esquerda_char = '4';
    break;
    case 5:
      hex_esquerda_char = '5';
    break;
    case 6:
      hex_esquerda_char = '6';
    break;
    case 7:
      hex_esquerda_char = '7';
    break;
    case 8:
      hex_esquerda_char = '8';
    break;
    case 9:
      hex_esquerda_char = '9';
    break;
    case 10:
      hex_esquerda_char = 'A';
    break;
    case 11:
      hex_esquerda_char = 'B';
    break;
    case 12:
      hex_esquerda_char = 'C';
    break;
    case 13:
      hex_esquerda_char = 'D';
    break;
    case 14:
      hex_esquerda_char = 'E';
    break;
    case 15:
      hex_esquerda_char = 'F';
    break;
  }
  printf("%c %c",hex_esquerda_char, hex_direita_char);
  return 0;
}