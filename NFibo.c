/*------------------------------------------------------------------------------
|NUCC       Workshop: C para iniciantes     2019/2020                      FCUP|            
------------------------------------------------------------------------------*/
#include <stdio.h>

/**
 * NthFibonacci()
 *      nth <- ler();
 *      imprime(fib(nth));
 * 
 * fib(nth)
 *      f0 <- 0;
 *      f1 <- 1;
 *      i <- 2;      
 *      Enquanto i <= nth fazer:
 *          fn <- f0 + f1
 *          f0 <- f1
 *          f1 <- fn
 *          i <- i +1
 *      retorna(fn);
*/



int fib(int nth){//F0 = 0 F1 = 1 Fn = Fn-1 + Fn-2
    int f0 = 0, f1 = 1, fn;
    for(int i = 2; i <= nth; i++){
        fn = f1 + f0;
        f0 = f1;
        f1 = fn;
    }
    return fn;
}

int main(){
    int nth;
    scanf("%d",&nth);
    printf("%d\n",fib(nth));
    return 0;
}