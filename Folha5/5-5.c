/*------------------------------------------------------------------------------
|NUCC       Workshop: C para iniciantes     2019/2020                      FCUP|            
------------------------------------------------------------------------------*/
#include <stdio.h>
#include <ctype.h>

void contabiliza(){
    char c;
    int l = 0;
    while((c = getchar()) != '\n')
        if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) 
            l++;
    printf("A frase contem %d letra(s)\n",l);
    /**2º opcão
     * char c; int l = 0;
     * do{
     *  c = getchar();
     *  if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) l++;
     * }while(c != '\n);
     * printf("A frase contém %d letra(s)\n",l);
    */
}

void contabilizaCtype(){
    char c; int l = 0;
    while((c = getchar()) != '\n')
        if(isalpha(c)) l++;
    printf("A frase contem %d letra(s)\n",l);
}

int main(){
    //Sem utilizar biblioteca ctype
        contabiliza();
    //utilizando biblioteca ctype
        contabilizaCtype();
}