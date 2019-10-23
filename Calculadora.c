/*------------------------------------------------------------------------------
|NUCC       Workshop: C para iniciantes     2019/2020                      FCUP|            
------------------------------------------------------------------------------*/
#include <stdio.h>

/* Introdução a operadores em C
 *  
 * Já vimos como as variáveis se comportam, tal como em matemática, podes realizar
 *      operações sobre variáveis, desde que estas tenham o mesmo tipo
 * 
 * Existem 3 grandes tipos de operadores: Aritméticos, Relacionais e Lógicos
 * (existem mais, para uma melhor explicação consulta os recursos)
 * 
 * Aritméticos:
 *      >Tal como o nome indica, estes dizem respeito a operações aritméticas,
 *          somas, multiplicações etc
 *      >Os operadores são:
 *          + -> adiciona dois operandos ex: 1+2
 *          - -> subtrai o segundo operando do primeiro ex: 2-1
 *          * -> multiplica dois operandos ex: 2*2
 *          / -> divide dois operandos ex 4/2 (cuidado com divisão por 0 !!!)
 *          % -> operador módulo, retorna resto de divisão ex 4%2 é 0
 *          ++ -> operador incremento incrementa em 1 o valor do operando
 *          -- -> operador decremento decrementa em 1 o valor do operando
 * 
 * Relacionais:
 *      >Dizem respeito a COMO os operandos se relacionam
 *      >Os operadores são:
 *          == -> igualdade, verifica se operandos são iguais ex 1 == 1 é verdade
 *          != -> diferença, verifica se operandos são diferentes ex 1 != 1 é falso
 *          >  -> maior, verifica se 1º operando é maior que 2º ex 2 > 1 é verdade e 2 > 2 é falso
 *          <  -> menor, verifica se 1º operando é menor que 2º ex 2 < 1 é falso e 2 < 2 é falso
 *          >= -> maior igual, verifica se 1º operando é maior ou igual que o 2º ex 2 >= 2 é verdade 
 *          <= -> menor igual, verifica se 1º operando é menor ou igual que 2º ex 2 <= 2 é verdade
 * 
 * Lógicos:
 *      >Dizem respeito a lógica boliana
 *      >Em C não existe nenhum tipo true ou flase mas sim 1 e 0, 1 é true e 0 é false
 *      >Os operadores são:
 *          && -> and, operador conjunção, verdade sse ambos forem verdade
 *          || -> or, operador disjunção, verdade se pelo menos um operando for verdade
 *          !  -> not, operador negação ex se A == 1 então !A == 0
 *      
 * Mais recursos em: 
 *  Operadores https://www.tutorialspoint.com/cprogramming/c_operators.htm
*/


int main(){
    //Neste programa iremos fazer uma calculadora muito básica

    int x,y;
    //Leitura de variáveis
        printf("Introduz os valores de x e y (y diferente de 0):");
        scanf("%d %d", &x, &y);

    printf("Soma: %d + %d = %d\n",x, y, (x+y));
    printf("Subtração: %d - %d = %d\n",x, y, (x-y));
    printf("Multiplicação: %d * %d = %d\n",x, y, (x*y));
    printf("Divisão: %d / %d = %d\n",x, y, (x/y));
    printf("Módulo: %d \% %d = %d\n",x, y, (x%y));

    printf("\ntrue é representado por 1 e false por 0\n\n");
    printf("Igualdade: %d == %d --> %d\n",x, y, (x==y));
    printf("Menor: %d < %d --> %d\n",x, y, (x<y));
    printf("Maior: %d > %d --> %d\n",x, y, (x>y));
    printf("Diferença: %d != %d --> %d\n",x, y, (x!=y));
    printf("Menor Igual: %d <= %d --> %d\n",x, y, (x<=y));
    printf("Maior Igual: %d >= %d --> %d\n",x, y, (x>=y));

    x = x + 1;
    printf("Incrementar x: %d\n",x);

    y += 1; //isto é igual a y = y + 1
    printf("Incrementar y: %d\n",y);

    printf("Decrementar x:\n",x);
    printf("\tOperador -- antes, valor x = %d , valor depois\n",--x,x);
    printf("\tOperador -- depois, valor x = %d , valor depois\n",x--,x);
    /*
     * Viste a diferença?
     *  ++ ou -- antes atualiza o valor da variável antes de a utillizar
     *      ou seja, se tiveres y + (++x), antes faz x += 1 e só depois y + x
     *  ++ ou -- depois atualiza o valor da variável depois de a utilizar
     *      ou seja, se tiveres y + (x++), faz y + x e só depois x += 1
    */
   return 0;
}