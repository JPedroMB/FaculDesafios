#include <stdio.h>
#include <stdlib.h>

    int main(){
        float nota;
        printf("Insira a nota do aluno:\n");
        scanf("%f", &nota);

        if (nota>=9 && nota<=10)
        {
            printf("Nota A");
        }
        else if (nota>=7 && nota<=8.9)
        {
            printf("Nota B");
        }
        else if (nota>=5 && nota<7)
        {
            printf("Nota C");
        }
        else if (nota>=4 && nota<5)
        {
            printf("Nota D");
        }
        else{
            printf("Nota F");
        }
    }