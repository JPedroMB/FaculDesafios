#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Desenvolva um programa que possibilite a entrada de N valores de salários e a matrícula correspondente da pessoa que ganha esse salário e exiba como resultado, o salário médio calculado e a matrícula da pessoa com o maior salário. N pode ser qualquer valor, solicite ao usuário quantos salários ele irá inserir

    int main(){
        setlocale(LC_ALL, "Portuguese");
        int salarios;

        printf("Bem vindo(a), quantos salários serão inseridos?");
        scanf("%d", &salarios);
        int matricula[salarios], matriculaMaiorSalario;
        float valorDoSalario[salarios], maiorSalario = 0;
        for ( int i = 0; i < salarios; i++)
        {
            printf("Insira o valor do salário:\n");
            scanf("%f", &valorDoSalario[i]);
            printf("Insira a matrícula do(a) funcionário(a) que ganha esse salário:\n");
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
        
        printf("O salário médio é: %.2f\n", media);
        printf("A matrícula da pessoa com o maior salário é: %d\n", matriculaMaiorSalario);
    }