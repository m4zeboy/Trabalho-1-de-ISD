#include <stdio.h> 
#include <math.h>

int main (void) {
  int n1, n2, digito, vaium,
  i, j,
  // n1bx = cada digito do numero binario n1
  n1b1, n1b2, n1b3, n1b4, n1b5, n1b6, n1b7, n1b8,
  n1inteiro,
  // n1bx = cada digito do numero binario n2
  n2b1, n2b2, n2b3, n2b4, n2b5, n2b6, n2b7, n2b8,
  n2inteiro,
  // complementos (a1 e a2) de cada digito n2
  can2b1, can2b2, can2b3, can2b4, can2b5, can2b6, can2b7, can2b8,
  // rbx = cada digito em binario do resultado da operação (+ ou -) entre n1 e n2
  rb1, rb2, rb3, rb4, rb5, rb6, rb7, rb8,
  rinteiro;
  char sinal;

  scanf("%d", &n1);
  scanf(" %c", &sinal);
  scanf("%d", &n2);

  // Encontrar os bits do n1
  n1b1 = 0;
  n1b2 = 0;
  n1b3 = 0;
  n1b4 = 0;
  n1b5 = 0;
  n1b6 = 0;
  n1b7 = 0;
  n1b8 = 0;
  for (i = 8; i >= 1; i--) {
    digito = n1 % 10;
    n1 = n1 / 10;
    switch(i) {
      case 8:
        n1b8 = digito;
      break;
      case 7:
        n1b7 = digito;
      break;
      case 6:
        n1b6 = digito;
      break;
      case 5:
        n1b5 = digito;
      break;
      case 4:
        n1b4 = digito;
      break;
      case 3:
        n1b3 = digito;
      break;
      case 2:
        n1b2 = digito;
      break;
      case 1:
        n1b1 = digito;
      break;
    }
  }
  
  // Encontrar os bits do n2
  n2b1 = 0;
  n2b2 = 0;
  n2b3 = 0;
  n2b4 = 0;
  n2b5 = 0;
  n2b6 = 0;
  n2b7 = 0;
  n2b8 = 0;
  for (i = 8; i >= 1; i--) {
    digito = n2 % 10;
    n2 = n2 / 10;
    switch(i) {
      case 8:
        n2b8 = digito;
      break;
      case 7:
        n2b7 = digito;
      break;
      case 6:
        n2b6 = digito;
      break;
      case 5:
        n2b5 = digito;
      break;
      case 4:
        n2b4 = digito;
      break;
      case 3:
        n2b3 = digito;
      break;
      case 2:
        n2b2 = digito;
      break;
      case 1:
        n2b1 = digito;
      break;
    }
  }
  
  // [x] covnversão de n1 para decimal
  n1inteiro = (n1b8 * pow(2, 0)) + (n1b7 * pow(2,1)) + (n1b6 * pow(2,2)) + (n1b5 * pow(2,3)) + (n1b4 * pow(2,4)) + (n1b3 * pow(2,5)) + (n1b2 * pow(2,6)) + (n1b1 * pow (2,7));
  // [x] conversão de n2 para decimal
  n2inteiro = (n2b8 * pow(2, 0)) + (n2b7 * pow(2,1)) + (n2b6 * pow(2,2)) + (n2b5 * pow(2,3)) + (n2b4 * pow(2,4)) + (n2b3 * pow(2,5)) + (n2b2 * pow(2,6)) + (n2b1 * pow (2,7));
  // [] conversão de n1 para hexadecimal
  // [] conversão de n2 para hexadecimal

  // Operação entre binários
  // Verificar o sinal
  if (sinal == '+') {
    vaium = 0;
    // oitavo digito
    rb8 = n1b8 + n2b8;
    // soma dos oitavos digitos de n1 com n2
    // se a soma for 0, o resultado vai ser 0
    if (rb8 == 0) {
      rb8 = 0;
    } else {
      // se a soma for 1, quer dizer que algum numero é 0 e o outro é 1; 
      if (rb8 == 1) {
        // o resultado vai ser 1, e não tem vai um
        rb8 = 1;
        vaium = 0;
      } else {
        // se a soma for 2, quer dizer que os dois numeros são 1.
        if (rb8 == 2) {
          // então o resultado fica 0 e vai um para a proxima conta.
          vaium = 1;
          rb8 = 0;
        }
      }
    }
    
    // sétimo digito
    rb7 = vaium + n1b7;
    if (rb7 == 0) {
      rb7 = 0;
    } else {
      if (rb7 == 1) {
        rb7 = 1;
        vaium = 0;
      } else {
        if (rb7 == 2) {
          vaium = 1;
          rb7 = 0;
        }
      }
    }
    rb7 = rb7 + n2b7;
    if (rb7 == 2) {
      vaium = 1;
      rb7 = 0;
    }
    
    // sexto digito
    rb6 = vaium + n1b6;
    if (rb6 == 0) {
      rb6 = 0;
    } else {
      if (rb6 == 1) {
        rb6 = 1;
        vaium = 0;
      } else {
        if (rb6 == 2) {
          vaium = 1;
          rb6 = 0;
        }
      }
    }
    rb6 = rb6 + n2b6;
    if (rb6 == 2) {
      vaium = 1;
      rb6 = 0;
    }
    // quinto digito
    rb5 = vaium + n1b5;
    if (rb5 == 0) {
      rb5 = 0;
    } else {
      if (rb5 == 1) {
        rb5 = 1;
        vaium = 0;
      } else {
        if (rb5 == 2) {
          vaium = 1;
          rb5 = 0;
        }
      }
    }
    rb5 = rb5 + n2b5;
    if (rb5 == 2) {
      vaium = 1;
      rb5 = 0;
    }

    // quarto digito
    rb4 = vaium + n1b4;
    if (rb4 == 0) {
      rb4 = 0;
    } else {
      if (rb4 == 1) {
        rb4 = 1;
        vaium = 0;
      } else {
        if (rb4 == 2) {
          vaium = 1;
          rb4 = 0;
        }
      }
    }
    rb4 = rb4 + n2b4;
    if (rb4 == 2) {
      vaium = 1;
      rb4 = 0;
    }

    // terceiro digito
    rb3 = vaium + n1b3;
    if (rb3 == 0) {
      rb3 = 0;
    } else {
      if (rb3 == 1) {
        rb3 = 1;
        vaium = 0;
      } else {
        if (rb3 == 2) {
          vaium = 1;
          rb3 = 0;
        }
      }
    }
    rb3 = rb3 + n2b3;
    if (rb3 == 2) {
      vaium = 1;
      rb3 = 0;
    }

    // segundo digito
    rb2 = vaium + n1b2;
    if (rb2 == 0) {
      rb2 = 0;
    } else {
      if (rb2 == 1) {
        rb2 = 1;
        vaium = 0;
      } else {
        if (rb2 == 2) {
          vaium = 1;
          rb2 = 0;
        }
      }
    }
    rb2 = rb2 + n2b2;
    if (rb2 == 2) {
      vaium = 1;
      rb2 = 0;
    }

    // primeiro digito
    rb1 = vaium + n1b1;
    if (rb1 == 0) {
      rb1 = 0;
    } else {
      if (rb1 == 1) {
        rb1 = 1;
        vaium = 0;
      } else {
        if (rb1 == 2) {
          vaium = 1;
          rb1 = 0;
        }
      }
    }
    rb1 = rb1 + n2b1;
    if (rb1 == 2) {
      vaium = 1;
      rb1 = 0;
    }
  
  } else {
    vaium = 0;
    // subtração (-)
    // [] fazer o complemento a2 do n2
    //  [x] inverter cada digito (complemento a1)
   
    // n2b1
    if (n2b1 == 0) {
      can2b1 = 1;
    } else {
      can2b1 = 0;
    }
    // n2b2
    if (n2b2 == 0) {
      can2b2 = 1;
    } else {
      can2b2 = 0;
    }
    // n2b3
    if (n2b3 == 0) {
      can2b3 = 1;
    } else {
      can2b3 = 0;
    }
    // n2b4
    if (n2b4 == 0) {
      can2b4 = 1;
    } else {
      can2b4 = 0;
    }
    // n2b5
    if (n2b5 == 0) {
      can2b5 = 1;
    } else {
      can2b5 = 0;
    }
    // n2b6
    if (n2b6 == 0) {
      can2b6 = 1;
    } else {
      can2b6 = 0;
    }
    // n2b7
    if (n2b7 == 0) {
      can2b7 = 1;
    } else {
      can2b7 = 0;
    }
    // n2b8
    if (n2b8 == 0) {
      can2b8 = 1;
    } else {
      can2b8 = 0;
    }
  
    // [x] somar 1 com o complemento a1
    can2b8 = can2b8 + 1;
    if (can2b8 == 1) {
      // se o resultado for um quer dizer que o can2b8 = 0, somado com 1 = 1;
      can2b8 = 1;
      vaium = 0;
    } else {
      if (can2b8 == 2) {
        // se o resultado for 2 quer dique que os dois numreossão 1;
        vaium = 1;
        can2b8 = 0;
      }
    } 
    
    can2b7 = can2b7 + vaium; 
    if (can2b7 == 0) {
      can2b7 = 0;
      vaium = 0;
    } else {
      if (can2b7 == 1) {
        can2b7 = 1;
        vaium = 0;
      } else {
        if (can2b7 == 2) {
          can2b7 = 0;
          vaium = 1;
        }
      }
    }
    
    can2b6 = can2b6 + vaium; 
    if (can2b6 == 0) {
      can2b6 = 0;
      vaium = 0;
    } else {
      if (can2b6 == 1) {
        can2b6 = 1;
        vaium = 0;
      } else {
        if (can2b6 == 2) {
          can2b6 = 0;
          vaium = 1;
        }
      }
    }

    can2b5 = can2b5 + vaium; 
    if (can2b5 == 0) {
      can2b5 = 0;
      vaium = 0;
    } else {
      if (can2b5 == 1) {
        can2b5 = 1;
        vaium = 0;
      } else {
        if (can2b5 == 2) {
          can2b5 = 0;
          vaium = 1;
        }
      }
    }

    can2b4 = can2b4 + vaium; 
    if (can2b4 == 0) {
      can2b4 = 0;
      vaium = 0;
    } else {
      if (can2b4 == 1) {
        can2b4 = 1;
        vaium = 0;
      } else {
        if (can2b4 == 2) {
          can2b4 = 0;
          vaium = 1;
        }
      }
    }

    can2b3 = can2b3 + vaium; 
    if (can2b3 == 0) {
      can2b3 = 0;
      vaium = 0;
    } else {
      if (can2b3 == 1) {
        can2b3 = 1;
        vaium = 0;
      } else {
        if (can2b3 == 2) {
          can2b3 = 0;
          vaium = 1;
        }
      }
    }

    can2b2 = can2b2 + vaium; 
    if (can2b2 == 0) {
      can2b2 = 0;
      vaium = 0;
    } else {
      if (can2b2 == 1) {
        can2b2 = 1;
        vaium = 0;
      } else {
        if (can2b2 == 2) {
          can2b2 = 0;
          vaium = 1;
        }
      }
    }

    can2b1 = can2b1 + vaium; 
    if (can2b1 == 0) {
      can2b1 = 0;
      vaium = 0;
    } else {
      if (can2b1 == 1) {
        can2b1 = 1;
        vaium = 0;
      } else {
        if (can2b1 == 2) {
          can2b1 = 0;
          vaium = 1;
        }
      }
    }
   
    // [x] fazer a soma do n1 com o n2(em complemento a2)
    // oitavo digito
    rb8 = n1b8 + can2b8;
    if (rb8 == 0) {
      rb8 = 0;
    } else {
      if (rb8 == 1) {
        rb8 = 1;
        vaium = 0;
      } else {
        if (rb8 == 2) {
          vaium = 1;
          rb8 = 0;
        }
      }
    }

    // setimo digito
    rb7 = vaium + n1b7;
    if (rb7 == 0) {
      rb7 = 0;
    } else {
      if (rb7 == 1) {
        rb7 = 1;
        vaium = 0;
      } else {
        if (rb7 == 2) {
          vaium = 1;
          rb7 = 0;
        }
      }
    }
    rb7 = rb7 + can2b7;
    if (rb7 == 2) {
      vaium = 1;
      rb7 = 0;
    }

  // sexto digito
    rb6 = vaium + n1b6;
    if (rb6 == 0) {
      rb6 = 0;
    } else {
      if (rb6 == 1) {
        rb6 = 1;
        vaium = 0;
      } else {
        if (rb6 == 2) {
          vaium = 1;
          rb6 = 0;
        }
      }
    }
    rb6 = rb6 + can2b6;
    if (rb6 == 2) {
      vaium = 1;
      rb6 = 0;
    }

    // quinto digito
    rb5 = vaium + n1b5;
    if (rb5 == 0) {
      rb5 = 0;
    } else {
      if (rb5 == 1) {
        rb5 = 1;
        vaium = 0;
      } else {
        if (rb5 == 2) {
          vaium = 1;
          rb5 = 0;
        }
      }
    }
    rb5 = rb5 + can2b5;
    if (rb5 == 2) {
      vaium = 1;
      rb5 = 0;
    }

    // quarto digito
    rb4 = vaium + n1b4;
    if (rb4 == 0) {
      rb4 = 0;
    } else {
      if (rb4 == 1) {
        rb4 = 1;
        vaium = 0;
      } else {
        if (rb4 == 2) {
          vaium = 1;
          rb4 = 0;
        }
      }
    }
    rb4 = rb4 + can2b4;
    if (rb4 == 2) {
      vaium = 1;
      rb4 = 0;
    }

    // terceiro digito
    rb3 = vaium + n1b3;
    if (rb3 == 0) {
      rb3 = 0;
    } else {
      if (rb3 == 1) {
        rb3 = 1;
        vaium = 0;
      } else {
        if (rb3 == 2) {
          vaium = 1;
          rb3 = 0;
        }
      }
    }
    rb3 = rb3 + can2b3;
    if (rb3 == 2) {
      vaium = 1;
      rb3 = 0;
    }

    // segundo digito
    rb2 = vaium + n1b2;
    if (rb2 == 0) {
      rb2 = 0;
    } else {
      if (rb2 == 1) {
        rb2 = 1;
        vaium = 0;
      } else {
        if (rb2 == 2) {
          vaium = 1;
          rb2 = 0;
        }
      }
    }
    rb2 = rb2 + can2b2;
    if (rb2 == 2) {
      vaium = 1;
      rb2 = 0;
    }

    // primeiro digito
    rb1 = vaium + n1b1;
    if (rb1 == 0) {
      rb1 = 0;
    } else {
      if (rb1 == 1) {
        rb1 = 1;
        vaium = 0;
      } else {
        if (rb1 == 2) {
          vaium = 1;
          rb1 = 0;
        }
      }
    }
    rb1 = rb1 + can2b1;
    if (rb1 == 2) {
      vaium = 1;
      rb1 = 0;
    }
  
  
  }
  
  // [] conversão do resultado para decimal
  rinteiro = (rb8 * pow(2, 0)) + (rb7 * pow(2,1)) + (rb6 * pow(2,2)) + (rb5 * pow(2,3)) + (rb4 * pow(2,4)) + (rb3 * pow(2,5)) + (rb2 * pow(2,6)) + (rb1 * pow (2,7));
  // [] conversão do resultado para hexadecimal

  printf("%d %d %d %d  %d %d %d %d (%di)   %c   %d %d %d %d  %d %d %d %d (%di)   =   %d %d %d %d  %d %d %d %d (%di)\n",n1b1, n1b2, n1b3, n1b4, n1b5, n1b6, n1b7, n1b8, n1inteiro, sinal, n2b1, n2b2, n2b3, n2b4, n2b5, n2b6, n2b7, n2b8, n2inteiro, rb1, rb2, rb3, rb4, rb5, rb6, rb7, rb8, rinteiro);
  // printf("%d %d %d %d  %d %d %d %d\n",rb1, rb2, rb3, rb4, rb5, rb6, rb7, rb8);
  return 0;  
}