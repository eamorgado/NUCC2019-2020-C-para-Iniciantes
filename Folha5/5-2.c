/*------------------------------------------------------------------------------
|NUCC       Workshop: C para iniciantes     2019/2020                      FCUP|            
------------------------------------------------------------------------------*/
#include <stdio.h>

/* Calcular o mdc de dois inteiros positivos
   pelo Algoritmo de Euclides (1ª versão)
   */
int mdc(int a, int b){
   while (a != b) {
     if(a > b)
         a = a - b;
      else
         b = b - a;
   }
   return a;
}

void mdcModificado(int a, int b){
    int i = 1;
    if(a == 0 || b == 0){
        printf("%d ou %d não são inteiros positivos\n",a,b); 
        return;
    }
    while (a != b){
        printf("mdc(%d,%d) = ",a,b);
        if(a > b) a -= b;
        else b -= a;
        i++;
    }
    printf("%d\n%d iteracoes",a,i);    
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    mdcModificado(a,b);
}