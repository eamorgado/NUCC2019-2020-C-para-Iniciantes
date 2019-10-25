/*------------------------------------------------------------------------------
|NUCC       Workshop: C para iniciantes     2019/2020                      FCUP|            
------------------------------------------------------------------------------*/
#include <stdio.h>
#include <ctype.h>

int pontos(char l){
    switch(l){
        case 'D': case 'G': return 2; break;
        case 'B': case 'C': case 'M': case 'P': return 3; break;
        case 'F': case 'H': case 'V': case 'W': case 'Y': return 4; break;
        case 'K': return 4; break;
        case 'J': case 'X': return 8; break;
        case 'Q': case 'Z': return 10; break;

        default: return 1; break;
    }
}

void scrabble(){
    char c; 
    int pont = 0;
    while((c = getchar()) != '\n')
        if(isalpha(c)) pont += pontos(c);
    printf("%d pontos\n",pont);
}

int main(){
    scrabble();
}