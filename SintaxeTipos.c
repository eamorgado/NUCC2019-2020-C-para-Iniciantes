/*------------------------------------------------------------------------------
|NUCC       Workshop: C para iniciantes     2019/2020                      FCUP|            
------------------------------------------------------------------------------*/
#include <stdio.h>

/* Introdução a tipos de dados e variáveis em C
 * 
 * Tipos de dados:
 *  > O C tem vários tipos de dados e permite até criar novos tipos
 *  > Os tipos principais são: int,char,float e double
 *  > Cada tipo de dados é representado por um certo número de bits, 
 *      aumentando o número de bits de um tipo este poderá representar mais
 *      valores, dessa forma os próprios tipos possuem formas long e short
 *      para já iremos tratar apenas dos tipos nas suas formas primárias
 * 
 *  > int representa números estritamente inteiros, podendo estes ser positivos
 *      ou negativos
 * 
 *  > char represenat caracteres individuais, podendo representar o alfabeto
 *      'a'.....'z' 'A'.....'Z', bem caracteres especiais, ' ' '\0' entre outros
 *      os caracteres são representados em código ASCII dessa forma um caractere
 *      pode ser visto como um inteiro, por exemplo 'a' tem valor 97 e 'A' 65
 *      ou seja, diferem em 32 ;)
 * 
 *  > float representa os números em ponto de vírgula flutuante de precisão simples
 *      a sua extensão são os pontos de vírgula flutuate de precisão doupla, os
 *      double, o tipo float permite reresentar qualquer número (até ao seu limite)
 *      positivo ou negativo, seja ele 1 ou -0.0000001
 * 
 * Variáveis:
 *  > Em C as variáveis representam o mesmo papel que uma variável em matemática
 *      armazenam dados para mais tarde trabalharmos sobre eles, uma variável
 *      precisa de ter um tipo de dados e um nome, uma variável pode ter qualquer
 *      nome, desde que este não seja uma palavra chave do C (como while ou break)
 *      nem contenha caracteres especiais (-,*+/%&|.\?@........), uma boa prática
 *      de programação é fornecer um bom nome à variável, dessa forma, quando
 *      estiveres a fazer um programa ou analizar é mais fácil identificar e 
 *      perceber o que é uma variável e que papel ela está a cumprir
 * 
 * Mais recursos em: 
 *  Tipos de dados https://www.tutorialspoint.com/cprogramming/c_data_types.htm
 *  Tabela ASCII http://www.asciitable.com/
 *  Estrutura C https://www.tutorialspoint.com/cprogramming/c_program_structure.htm
 *  Sintaxe https://www.tutorialspoint.com/cprogramming/c_basic_syntax.htm
 *  Variáveis https://www.tutorialspoint.com/cprogramming/c_variables.htm  
*/


int main(){//O int main será a primeira função a ser executada

    int ano; //Uma variável pode ser defenida mas não inicializada (não ter valor)

    //A inicialização de uma variável é feita através do operador de atribuição =
    ano = 2019;
    
    //Podes declarar mais do que uma variável por tipo na mesma linha (até ;)
    char n = 'N', u, c = 'C';
    u = 'C';

    float versao = 1.00;
    float numb = 1.234567;
    /*
     * Para imprimires valores para o ecrã, podes usar a função printf();
     * Nessa função podes imprimir os valores das variáveis, nota que deves
     *  seguir esta sintaxe:
     *      printf([text],[variaveis opcionais])
    */
   printf("\n"); //imprime linha vazia para o terminal \n  é o new line
   printf("Hello World\n");
   printf("Ano: %d\n",ano); //%d diz à função para ir buscar o valor de ano e colocar na frase
   //%d é usado para ints %c para char e %f para floats
   printf("a%co: %d\n",n,ano);

   printf("Numero completo: %f\n",numb); //%f imprime todo o número
   //E se quiser apreas a 1ª casa decimal?
   printf("Numero 1 casa: %.1f\n",numb);
   printf("Numero 3 casas: %.3f n\n",numb);


    /*
     * Em C também é possível ler informação do terminal, para isso utilizamos
     *  a função scanf();, a sua utilização é muito similar ao printf
    */
    int in_numb;
    char in_char;
    float in_float;
    /*
     * É necessário fornecer à função o formato da leitura e a/as variável onde
     *  os dados vão ser armazenados, para isso utilizamos &var, mais para a 
     *  frente irás ver mais aplicações do & mas para já só precisas de saber
     *  que ele diz ao programa onde a variável está localizada em memória para 
     *  guardar o valor lido
    */
    //O programa consome uma linha toda \n com apenas um inteiro
    scanf("%d",&in_numb);

    //O programa lê a linha com um caracter e um float ex: a 1.2
    scanf("%c %f",&in_char, &in_float);
    
    printf("int: %d\nchar: %c\nfloat:\n%f",in_numb, in_char, in_float);

    printf("Bem vindo ao workshop para iniciantes em C da %c%c%c%c",n,u,c,c);
    printf(" para o ano de %d/%d\n",ano,(ano+1));
    return 0;
}
