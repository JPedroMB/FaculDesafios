#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//Dados três números distintos inseridos pelo usuário, crie um algoritmo que apresente o menor, o do meio e o maior, nesta ordem (crescente). Obs: ousuário não é obrigado a digitar os números nessa ordem (menor, do meio e maior), ele poderá inserir qualquer número em qualquer ordem

    int main(){
        float n1,n2,n3, menor, meio, maior;
        setlocale(LC_ALL, "Portuguese");
        
        printf("Digite o primeiro número:");
        scanf("%f", &n1);
        printf("Digite o segundo número:");
        scanf("%f", &n2);
        printf("Digite o terceiro número:");
        scanf("%f", &n3);

            menor = n1;
            if(n2<menor){
                menor = n2;
            }
            if (n3<menor)
            {
                menor = n3;
            }
            maior = n1;
            if (n2>maior)
            {
                maior = n2;
            }
            if (n3>maior)
            {
                maior = n3;
            }
            
            meio = n1 + n2 + n3 - menor - maior; //n1=3, n2=2, n3=1, 3+2+1 = 6, 6-1 = 5 - 3 = 2, logo o resultado sempre sera o número do meio  

            printf("O menor número é %.2f, o do meio é %.2f e o menor é %.2f", menor, meio, maior);






    }