#include <stdio.h>
//imprimir letras a-z com estruturas de repetição
int main(){

    char letra = 'a'; //Como estou usando apenas um caracetere, utilizo apenas as aspas simples

    do
    {  
        printf("%c\n", letra);
        letra = letra + 1;
    } while (letra <= 'z');
    
    //Utilizando o "for" ficaria da seguinte maneira:
    /*
    int main(){
        char letra = 'a';

        for (letra = 'a'; letra <='z'; letra++)
        {
            printf("%c\n", letra);
        }
    }
    */

}  