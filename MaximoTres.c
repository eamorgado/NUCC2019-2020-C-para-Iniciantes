/*------------------------------------------------------------------------------
|NUCC       Workshop: C para iniciantes     2019/2020                      FCUP|            
------------------------------------------------------------------------------*/
#include <stdio.h>

/* Introdução a operadores em C     
 * Mais recursos em: 
 *  Condicionais https://www.tutorialspoint.com/cprogramming/c_decision_making.htm
*/

void encontraMaximo(){
    int a,b,max;
    printf("Valores: "); scanf("%d %d",&a, &b);
    if(a > b) max = a;
    else if(a < b) max = b;
    else{
        printf("econtraMaximo: valores %d e %d são iguais\n",a,b); return;
    }
    printf("encontraMaximo: max[%d,%d]= %d\n",a,b,max);
}

int main(){
    int a,b,c, max;

    printf("Introduz 3 valores: ");
    scanf("%d %d %d",&a, &b, &c);

    //Utilizando operadores condicionais para máximo de 3
        if(a >= b && a >= c) max = a;
        else if(b >= a && b >= c) max = b;
        else max = c;

    printf("Max[%d,%d,%d]= %d\n",a,b,c,max);

    //utilizando operadores ternários para maximo entre 3
        max = (a >= b && a >= c)? a : ((b >= a && b >= c)? b : c);
        printf("Max: %d\n",max);

    //Encontrar máximo para n testes
    int n;
    printf("Quantos testes de máximo mínimo? ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
        encontraMaximo();
    
    return 0;    
}