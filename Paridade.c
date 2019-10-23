/*------------------------------------------------------------------------------
|NUCC       Workshop: C para iniciantes     2019/2020                      FCUP|            
------------------------------------------------------------------------------*/
#include <stdio.h>

int isEven(numb){
    return ((numb % 2) == 0)? 1 : 0;
}

void evenUntil(i,n){
    //inclusive
    for(i; i <= n; i++)
        if(isEven(i))
            printf("%d ",i);
}

int main(){
    int numb,start, finish;

    printf("Verificar paridade de: ");
    scanf("%d",&numb);
    if( (numb % 2) == 0) printf("Numero %d é par\n",numb);
    else printf("Numero %d é ímpar\n",numb);

    printf("\nOnde começar teste de paridade: "); scanf("%d",&start);
    printf("Onde acabar teste de paridade: "); scanf("%d",&finish);

    printf("Paridade de %d a %d: ",start,finish);
    evenUntil(start,finish);
    printf("\n");
    return 0;
}