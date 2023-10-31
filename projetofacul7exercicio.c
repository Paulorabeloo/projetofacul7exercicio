#include <stdio.h>
int main () {
        int nota1;
        int nota2;
        float media;

        printf("Digite a primeira nota: \n");
        scanf("%i", &nota1);
        printf("Digite a segunda nota: \n");
        scanf("%i", &nota2);

        media = (nota1 + nota2) / 2;
        printf("Valor da media: %2.f \n", media);
        if (media >= 6){
            printf("APROVADO");}
            else {
            printf("REPROVADO");}
return 0;
}

