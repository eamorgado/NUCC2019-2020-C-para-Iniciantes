/*------------------------------------------------------------------------------
|NUCC       Workshop: C para iniciantes     2019/2020                      FCUP|            
------------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>//Biblioteca com função de cálculo de raíz quadrada

#define PI 3.14159265
/**
 * O enunciado para este exercício e a sua explicação foram dados durante o workshop
 * 
 * Pseudocódigo dado a,b e c:
 *      encontraArea(a,b,c)
 *          r <- encontraRaio(a,b,c)
 *          area <- r * r * pi
 *          retorna(area)
 *      encontraRaio(a,b,c)
 *          Se a<0 ou b<0 ou c<0 então:
 *              retorna(erro unidades inválidas)
 *          raio <- b + a -c
 *          raio <- raio / 2
 *          retorna(raio)
 *          
*/
float encontraRaio(float a, float b, float c){
    if(a < 0 || b < 0 || c < 0){
        printf("encontraRaio--erro: Valores inválidos, comprimento tem que ser positivo\nTenta novamente: ");
        scanf("%f %f %f",&a, &b, &c);
        return encontraRaio(a,b,c);
    }
    return (a + b -c)/2;
    
}

float encontraAreaDados(float a, float b, float c){
    float r = encontraRaio(a,b,c);
    return r * r * PI;  
}


int main(){
    float a,b,c;
    printf("Introduz valor de a, b e c:"); scanf("%f %f %f",&a,&b,&c);
    printf("Área do círculo inscrito: %f\n",encontraAreaDados(a,b,c));
    return 0;
}
