#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
//Desenvolva um programa para um caixa eletr�nico que permite que o usu�rio escolha qual opera��o deseja realizar: saque, dep�sito ou consulta de saldo. Ap�s a escolha, o programa deve realizar a a��o correspondente. Considera o saldo inicial do usu�rio igual a 1000 reais.
//comandos do e while, do=fa�a, while= enquanto, entao pede para realizar algo enquanto a condi��o do while for verdadeira
//o scanf fica dentro do do-while, pois sera constantemente checado o valor at� que a condi��o se verifique
    int main(){
        setlocale(LC_ALL, "Portuguese");
        int ac;
        float saldo, valorDeSaque;
        saldo = 1000;
            printf("Bem vindo(a) ao nosso banco, que tipo de a��o voc� gostaria de realizar?\n 1 - Saque\n 2 - Dep�sito\n 3 - Consulta de Saldo\n");
            scanf("%d", &ac);
            if (ac>3 || ac<1)
            {
                printf("Opera��o Inv�lida! Tente novamente mais tarde!");
            }
            
                if (ac==1)
                {
                    printf("O seu saldo atual � de R$%.2f quanto voc� gostaria de sacar?", saldo);
                  do{
                        scanf("%f",&valorDeSaque);
                        
                        if (valorDeSaque>saldo)
                        {
                            printf("Seu saldo � insuficiente para realizar essa a��o, tente novamente\n");
                            printf("O seu saldo atual � de R$%.2f quanto voc� gostaria de sacar?", saldo);
                        }
                    }while (valorDeSaque>saldo);
                        if (valorDeSaque<saldo)
                        {
                            int confirm;
                            printf("Voc� confirma o saque no valor de R$%.2f?\n 1 - Sim\n 2 - N�o\n", valorDeSaque);
                            scanf("%d", &confirm);
                            if (confirm==1)
                            {
                                float novoSaldo;
                                novoSaldo = saldo - valorDeSaque;
                                printf("Saque realizado com sucesso, o seu novo saldo � de R$%.2f\n", novoSaldo);
                            }
                           else{
                            printf("Por quest�es de seguran�a estamos encerrando esse processo, tente novamente mais tarde!");
                           } 
                        }                
                }
                else if (ac==2)
                {
                    float valorDeposito;
                    printf("O seu saldo atual � de R$%.2f, quando voc� gostaria de depositar?\n", saldo);
                    do
                    {
                        scanf("%f", &valorDeposito);
                        if (valorDeposito<0)
                        {
                            printf("O valor � inv�lido, tente novamente\n");
                            printf("O seu saldo atual � de R$%.2f, quando voc� gostaria de depositar?\n", saldo);

                        }
                        else if (valorDeposito>5000)
                        {
                            printf("Para realizar transa��es acima de R$5000, v� at� a ag�ncia mais pr�xima\n");
                            printf("O seu saldo atual � de R$%.2f, quando voc� gostaria de depositar?\n", saldo);

                        }
                        
                    } while (valorDeposito<0 || valorDeposito>5000);
                    int confirm;
                    printf("Voc� confirma esse dep�sito?\n 1 - Sim\n 2 - N�o\n");
                    scanf("%d", &confirm);
                    if (confirm==1)
                    {
                        float novoSaldo;
                        novoSaldo = saldo + valorDeposito;
                        printf("Dep�sito realizado, o seu novo saldo � de R$%.2f", novoSaldo);
                    }
                    else{
                        printf("Por quest�es de seguran�a estamos encerrando esse processo, tente novamente mais tarde!");
                    }
                }
                else if (ac == 3)
                {
                    printf("O seu saldo atual � de R$%.2f\n", saldo);
                }
            return 0;

    }
    