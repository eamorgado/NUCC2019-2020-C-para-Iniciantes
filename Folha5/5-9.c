/*------------------------------------------------------------------------------
|NUCC       Workshop: C para iniciantes     2019/2020                      FCUP|            
------------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

double aproxPi(int n){
    double soma = 0.0, tmp;
    for(int i = 0; i < n; i++){
        tmp = (double) 1/(2*i + 1);
        if(i % 2 != 0) tmp *= -1;
        soma += tmp;
    }
    return 4 * soma;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("Aprox pi: %lf\n",aproxPi(n));
    printf("math.h aprox: %lf\n",M_PI);
}