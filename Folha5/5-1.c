#include <stdio.h>
#define FALSE 0
#define TRUE  1

/* Testar se um número inteiro é primo */
int primo(int n) {
   int d;
   if(n <= 1) return FALSE;
   for (d = 2; d < n; d++)
     if (n%d == 0)
       return FALSE;
   return TRUE;
}

void listaPrimos(int n){
    for(int i = 0; i < n; i++)
        if(primo(i))
            printf("%d ",i);
}

int main(){
    int n;
    scanf("%d",&n);
    listaPrimos(n);
}