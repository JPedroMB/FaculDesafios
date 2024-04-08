#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> 
//Desenvolva um programa que solicite dez números ao usuário e, a cada número recebido, informe seu valor ao quadrado.

    int main(){
        setlocale(LC_ALL, "Portuguese");
        int i, n, n2;
        for (i = 1; i < 11 ; i = i+1)
        {
           printf("Insira o %do número INTEIRO para que o seu valor ao quadrado seja calculado:\n", i);
           scanf("%d", &n);
           n2 = n*n;
           printf("%d ao quadrado é igual a: %d\n", n, n2);
        }
    }