#include <stdio.h>

int main(){
    char A, B, C, D, E, F, G, H;
    float P1, P2, P3, P4, P5, P6, P7, P8;
    float A1, A2, A3, A4, A5, A6, A7, A8;
    float PIB1, PIB2, PIB3, PIB4, PIB5, PIB6, PIB7, PIB8;
    int PT1, PT2, PT3, PT4, PT5, PT6, PT7, PT8;

    printf("Digite o Nome da Primeira Cidade: \n");
    scanf("%s", &A);
    printf("Digite o número da população: \n");
    scanf("%f", &P1);
    printf("Digite a área da cidade: \n");
    scanf("%f", &A1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", PIB1);
    printf("Informe quantos pontos turísticos existem na cidade: \n");
    scanf("%d", PT1);

    printf("A %s tem uma população de %f, a área total é de %f, o PIB que a cidade possui é de %f, e essa cidade possui %d pontos turísticos.", A, P1, A1, PIB1, PT1),

}
