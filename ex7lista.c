#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Desenvolva um programa que possibilite a entrada de N valores de sal�rios e a matr�cula correspondente da pessoa que ganha esse sal�rio e exiba como resultado, o sal�rio m�dio calculado e a matr�cula da pessoa com o maior sal�rio. N pode ser qualquer valor, solicite ao usu�rio quantos sal�rios ele ir� inserir

    int main(){
        setlocale(LC_ALL, "Portuguese");
        int salarios;

        printf("Bem vindo(a), quantos sal�rios ser�o inseridos?");
        scanf("%d", &salarios);
        int matricula[salarios], matriculaMaiorSalario;
        float valorDoSalario[salarios], maiorSalario = 0;
        for ( int i = 0; i < salarios; i++)
        {
            printf("Insira o valor do sal�rio:\n");
            scanf("%f", &valorDoSalario[i]);
            printf("Insira a matr�cula do(a) funcion�rio(a) que ganha esse sal�rio:\n");
            scanf("%d", &matricula[i]);
             if (valorDoSalario[i] > maiorSalario) {
            maiorSalario = valorDoSalario[i];
            matriculaMaiorSalario = matricula[i];
        }
    }
        float soma = 0, media = 0;
        for (int j = 0;j < salarios; j++)
        {
            soma = soma + valorDoSalario[j];
        }
        media = soma/salarios;
        
        printf("O sal�rio m�dio �: %.2f\n", media);
        printf("A matr�cula da pessoa com o maior sal�rio �: %d\n", matriculaMaiorSalario);
    }