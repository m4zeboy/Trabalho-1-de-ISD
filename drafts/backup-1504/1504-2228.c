#include <stdio.h>

int main(void)
{
  int n1, n2, digito, vaium,
      i, j,
      // n1bx = cada digito do numero binario n1
      n1b1, n1b2, n1b3, n1b4, n1b5, n1b6, n1b7, n1b8,
      // n1bx = cada digito do numero binario n2
      n2b1, n2b2, n2b3, n2b4, n2b5, n2b6, n2b7, n2b8,
      // rbx = cada digito em binario do resultado da operação (+ ou -) entre n1 e n2
      rb1, rb2, rb3, rb4, rb5, rb6, rb7, rb8;
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
  for (i = 8; i >= 1; i--)
  {
    digito = n1 % 10;
    n1 = n1 / 10;
    switch (i)
    {
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

  for (i = 8; i >= 1; i--)
  {
    digito = n2 % 10;
    n2 = n2 / 10;
    switch (i)
    {
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

  // Verificar o sinal
  if (sinal == '+')
  {
    vaium = 0;
    // oitavo digito
    rb8 = n1b8 + n2b8;
    if (rb8 == 0)
    {
      rb8 = 0;
    }
    else
    {
      if (rb8 == 1)
      {
        rb8 = 1;
        vaium = 0;
      }
      else
      {
        if (rb8 == 2)
        {
          vaium = 1;
          rb8 = 0;
        }
      }
    }
    // sétimo digito
    rb7 = vaium + n1b7;
    if (rb7 == 0)
    {
      rb7 = 0;
    }
    else
    {
      if (rb7 == 1)
      {
        rb7 = 1;
        vaium = 0;
      }
      else
      {
        if (rb7 == 2)
        {
          vaium = 1;
          rb7 = 0;
        }
      }
    }
    rb7 = rb7 + n2b7;
    // sexto digito
    rb6 = vaium + n1b6;
    if (rb6 == 0)
    {
      rb6 = 0;
    }
    else
    {
      if (rb6 == 1)
      {
        rb6 = 1;
        vaium = 0;
      }
      else
      {
        if (rb6 == 2)
        {
          vaium = 1;
          rb6 = 0;
        }
      }
    }
    rb6 = rb6 + n2b6;
    // qinto digito
    rb5 = vaium + n1b5;
    if (rb5 == 0)
    {
      rb5 = 0;
    }
    else
    {
      if (rb5 == 1)
      {
        rb5 = 1;
        vaium = 0;
      }
      else
      {
        if (rb5 == 2)
        {
          vaium = 1;
          rb5 = 0;
        }
      }
    }
    rb5 = rb5 + n2b5;
    // quarto digito
    rb4 = vaium + n1b4;
    if (rb4 == 0)
    {
      rb4 = 0;
    }
    else
    {
      if (rb4 == 1)
      {
        rb4 = 1;
        vaium = 0;
      }
      else
      {
        if (rb4 == 2)
        {
          vaium = 1;
          rb4 = 0;
        }
      }
    }
    rb4 = rb4 + n2b4;
    // terceiro digito
    rb3 = vaium + n1b3;
    if (rb3 == 0)
    {
      rb3 = 0;
    }
    else
    {
      if (rb3 == 1)
      {
        rb3 = 1;
        vaium = 0;
      }
      else
      {
        if (rb3 == 2)
        {
          vaium = 1;
          rb3 = 0;
        }
      }
    }
    rb3 = rb3 + n2b3;
    // segundo digito
    rb2 = vaium + n1b2;
    if (rb2 == 0)
    {
      rb2 = 0;
    }
    else
    {
      if (rb2 == 1)
      {
        rb2 = 1;
        vaium = 0;
      }
      else
      {
        if (rb2 == 2)
        {
          vaium = 1;
          rb2 = 0;
        }
      }
    }
    rb2 = rb2 + n2b2;
    // primeiro digito
    rb1 = vaium + n1b1;
    if (rb1 == 0)
    {
      rb1 = 0;
    }
    else
    {
      if (rb1 == 1)
      {
        rb1 = 1;
        vaium = 0;
      }
      else
      {
        if (rb1 == 2)
        {
          vaium = 1;
          rb1 = 0;
        }
      }
    }
    rb1 = rb1 + n2b1;
  }
  else
  {
  }

  // printf("%d %d %d %d %d %d %d %d %c %d %d %d %d %d %d %d %d\n", n1b1, n1b2, n1b3, n1b4, n1b5, n1b6, n1b7, n1b8, sinal, n2b1, n2b2, n2b3, n2b4, n2b5, n2b6, n2b7, n2b8);
  printf("%d %d %d %d %d %d %d %d",rb1,rb2, rb3, rb4, rb5, rb6, rb7, rb8);
  return 0;
}