#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
    int idades[15];  
    int faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0; 
    int totalPessoas = 15; 
    float percentualFaixa1, percentualFaixa5;

    
    printf("Digite as idades das 15 pessoas:\n");
    for (int i = 0; i < 15; i++) {
        printf("Pessoa %i: ", i + 1);
        scanf("%d", &idades[i]);
        if (idades[i]>117)
        {
          printf("Idade inválida, tente novamente\n");
          i = i -1;
        }
       //faixa++ adiciona o valor na variável
        if (idades[i] <= 15) {
            faixa1++;  
        } else if (idades[i] >= 16 && idades[i] <= 30) {
            faixa2++;  
        } else if (idades[i] >= 31 && idades[i] <= 45) {
            faixa3++;  
        } else if (idades[i] >= 46 && idades[i] <= 60) {
            faixa4++;  
        } else {
            faixa5++; 
        }
    }

   //(tipovariavel) converte a variavel para outro tipo, apenas no momento necessário, nesse caso, converte int faixa1 para float faixa 1.
    percentualFaixa1 = (float)faixa1 / totalPessoas * 100; 
    percentualFaixa5 = (float)faixa5 / totalPessoas * 100;  


    printf("\nQuantidade de pessoas em cada faixa etária:\n");
    printf("Até 15 anos: %i\n", faixa1);
    printf("De 16 a 30 anos: %i\n", faixa2);
    printf("De 31 a 45 anos: %i\n", faixa3);
    printf("De 46 a 60 anos: %i\n", faixa4);
    printf("Acima de 61 anos: %i\n", faixa5);

    printf("\nPercentual de pessoas na primeira faixa etária (até 15 anos): %.2f%%\n", percentualFaixa1);
    printf("Percentual de pessoas na última faixa etária (acima de 61 anos): %.2f%%\n", percentualFaixa5);

    return 0;
}