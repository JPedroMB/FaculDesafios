#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> 
//Desenvolva um programa que solicite dez n�meros ao usu�rio e, a cada n�mero recebido, informe seu valor ao quadrado.

    int main(){
        setlocale(LC_ALL, "Portuguese");
        int i, n, n2;
        for (i = 1; i < 11 ; i = i+1)
        {
           printf("Insira o %do n�mero INTEIRO para que o seu valor ao quadrado seja calculado:\n", i);
           scanf("%d", &n);
           n2 = n*n;
           printf("%d ao quadrado � igual a: %d\n", n, n2);
        }
    }