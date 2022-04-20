# DESCRIÇÃO DO TRABALHO I

Neste trabalho será desenvolvido um programa utilizando a linguagem C na qual receba, através de interface com
o usuário, dois números binários, em complemento a 2 com até 8 bits. Depois, realize uma determinada operação
(soma ‘+’ ou subtração ‘-‘) entre eles e apresente o resultado. Portanto, o programa deve funcionar da seguinte
forma:
1. Usuário informa primeiro número binário ou a tecla S (na qual o programa será encerrado) e pressiona ENTER;
2. Usuário informa uma operação: tecla ‘+’ para soma ou tecla ‘-’ para subtração e pressiona ENTER;
3. Usuário informa segundo número binário e pressiona ENTER;
4. Por fim o programa apresenta o primeiro e o segundo números binários seguidos de sua respectiva conversão
para inteiro e hexadecimal entre parênteses, com o sinal da operação entre eles, e depois o resultado da
operação em binário com sua respectiva conversão para inteiro e hexadecimal entre parênteses, antecedido
por um sinal de =;
5. Neste momento o usuário pode iniciar novamente o cálculo ou então pressionar S para encerrar o programa.

## EXEMPLO
**ENTRADA DE DADOS:**
```cmd
\#10011001
\#+
\#100100
\#S
```
**SAÍDA DE DADOS:**
```cmd
10011001b (-103i 99h)
+
100100b (36i 24h)
=
10111101b (-67i BDh)
```

---

**OBSERVAÇÕES**
- Não é permitido usar funções nem bibliotecas de conversão entre binários, decimal e hexadecimal, a soma e
subtração deve ser feita entre binários obrigatoriamente. Logo não pode simplesmente converter os binários
para inteiros correspondentes, realizar a soma ou subtração entre eles e depois converter o resultado para
binário. Sendo que na saída de dados deve-se exibir o ‘b’ para binário, o ‘i’ para inteiro e ‘h’ para hexadecimal
ao lado de cada número. Utilize letras maiúsculas: A, B, C, D, E, F para símbolos hexadecimais;
- No caso de ocorrência de OVERFLOW o resultado da operação deve conter apenas os 8 bits menos
significativos, ou seja, despreze o carry e apresente apenas estes 8 bits com sua devida conversão para inteiro
com sinal, em complemento a 2, assim como também para hexadecimal.