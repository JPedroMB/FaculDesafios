#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//Dados tr�s n�meros distintos inseridos pelo usu�rio, crie um algoritmo que apresente o menor, o do meio e o maior, nesta ordem (crescente). Obs: ousu�rio n�o � obrigado a digitar os n�meros nessa ordem (menor, do meio e maior), ele poder� inserir qualquer n�mero em qualquer ordem

    int main(){
        float n1,n2,n3, menor, meio, maior;
        setlocale(LC_ALL, "Portuguese");
        
        printf("Digite o primeiro n�mero:");
        scanf("%f", &n1);
        printf("Digite o segundo n�mero:");
        scanf("%f", &n2);
        printf("Digite o terceiro n�mero:");
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
            
            meio = n1 + n2 + n3 - menor - maior; //n1=3, n2=2, n3=1, 3+2+1 = 6, 6-1 = 5 - 3 = 2, logo o resultado sempre sera o n�mero do meio  

            printf("O menor n�mero � %.2f, o do meio � %.2f e o menor � %.2f", menor, meio, maior);






    }