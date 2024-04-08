#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
//Desenvolva um programa para um caixa eletrônico que permite que o usuário escolha qual operação deseja realizar: saque, depósito ou consulta de saldo. Após a escolha, o programa deve realizar a ação correspondente. Considera o saldo inicial do usuário igual a 1000 reais.
//comandos do e while, do=faça, while= enquanto, entao pede para realizar algo enquanto a condição do while for verdadeira
//o scanf fica dentro do do-while, pois sera constantemente checado o valor até que a condição se verifique
    int main(){
        setlocale(LC_ALL, "Portuguese");
        int ac;
        float saldo, valorDeSaque;
        saldo = 1000;
            printf("Bem vindo(a) ao nosso banco, que tipo de ação você gostaria de realizar?\n 1 - Saque\n 2 - Depósito\n 3 - Consulta de Saldo\n");
            scanf("%d", &ac);
            if (ac>3 || ac<1)
            {
                printf("Operação Inválida! Tente novamente mais tarde!");
            }
            
                if (ac==1)
                {
                    printf("O seu saldo atual é de R$%.2f quanto você gostaria de sacar?", saldo);
                  do{
                        scanf("%f",&valorDeSaque);
                        
                        if (valorDeSaque>saldo)
                        {
                            printf("Seu saldo é insuficiente para realizar essa ação, tente novamente\n");
                            printf("O seu saldo atual é de R$%.2f quanto você gostaria de sacar?", saldo);
                        }
                    }while (valorDeSaque>saldo);
                        if (valorDeSaque<saldo)
                        {
                            int confirm;
                            printf("Você confirma o saque no valor de R$%.2f?\n 1 - Sim\n 2 - Não\n", valorDeSaque);
                            scanf("%d", &confirm);
                            if (confirm==1)
                            {
                                float novoSaldo;
                                novoSaldo = saldo - valorDeSaque;
                                printf("Saque realizado com sucesso, o seu novo saldo é de R$%.2f\n", novoSaldo);
                            }
                           else{
                            printf("Por questões de segurança estamos encerrando esse processo, tente novamente mais tarde!");
                           } 
                        }                
                }
                else if (ac==2)
                {
                    float valorDeposito;
                    printf("O seu saldo atual é de R$%.2f, quando você gostaria de depositar?\n", saldo);
                    do
                    {
                        scanf("%f", &valorDeposito);
                        if (valorDeposito<0)
                        {
                            printf("O valor é inválido, tente novamente\n");
                            printf("O seu saldo atual é de R$%.2f, quando você gostaria de depositar?\n", saldo);

                        }
                        else if (valorDeposito>5000)
                        {
                            printf("Para realizar transações acima de R$5000, vá até a agência mais próxima\n");
                            printf("O seu saldo atual é de R$%.2f, quando você gostaria de depositar?\n", saldo);

                        }
                        
                    } while (valorDeposito<0 || valorDeposito>5000);
                    int confirm;
                    printf("Você confirma esse depósito?\n 1 - Sim\n 2 - Não\n");
                    scanf("%d", &confirm);
                    if (confirm==1)
                    {
                        float novoSaldo;
                        novoSaldo = saldo + valorDeposito;
                        printf("Depósito realizado, o seu novo saldo é de R$%.2f", novoSaldo);
                    }
                    else{
                        printf("Por questões de segurança estamos encerrando esse processo, tente novamente mais tarde!");
                    }
                }
                else if (ac == 3)
                {
                    printf("O seu saldo atual é de R$%.2f\n", saldo);
                }
            return 0;

    }
    