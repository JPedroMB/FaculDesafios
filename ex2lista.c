#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//Solicitar  o preço unitario do produto, quantidade de unidades compradas, e formma de pagamento(á vista ou a prazo(12x)) se for a vista, aplica 10% de desconto sobre o valor total, se for parcelado, o programa  calcula o valor final da compra com base no preço unitario e na quantidade de unidades compradas(mostrar valor parcelas e pedir pro usuario escolher, logo após, pedir para pagar e encerrar o programa)
//%.2f instrui printf() a exibir o valor com apenas duas casas decimais
    int main(){
        setlocale(LC_ALL, "Portuguese");
        float pru, qtd, prf, prd, vp;
        int fp, i;

        printf("Bem vindo, informe o preço unitário do produto:\n");
        scanf("%f", &pru);
        printf("Agora, insira a quantidade de unidades compradas:\n");
        scanf("%f", &qtd);
        prf = (pru*qtd);
        printf("O preço final da compra é de: R$%.2f\n", prf);
        printf("Selecione a forma de pagamento:\n 1- Á Vista(10%% de desconto)\n 2- Parcelado\n");
        scanf("%d", &fp);
            if (fp==1)
            {
                prd = prf * 0.9;//0.9 pois seria 90% do valor original
                printf("O valor final com 10%% de desconto é: R$%.2f\n", prd);
                printf("Realize o pagamento!");
                return 0;
            }
            else{
                for (i=1; i <=12; i++)
                {
                    vp = prf/i;
                     printf("%dx - %.2f\n", i, vp);
                }
                int qtdp;
                printf("Escolha a quantidade de parcelas(1 a 12):");
                scanf("%d", &qtdp);
                printf("Realize o pagamento!");
                return 0;
            }
    }