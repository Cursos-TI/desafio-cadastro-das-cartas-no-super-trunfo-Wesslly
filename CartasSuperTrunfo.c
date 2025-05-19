#include <stdio.h>

int main() {

    // Variáveis para as duas cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    //Primeira Carta

    printf("\nDigite os Dados da Primeira Carta:\n");

    printf("Digite o Estado: \n");
    scanf(" %c",&estado1);

    printf("Digite o Codigo: \n");
    scanf("%s",&codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s",nome_cidade1);

    printf("Digite a População: \n");
    scanf("%d",&populacao1);

    printf("Digite a Area: \n");
    scanf("%f",&area1);

    printf("Digite o PIB: \n");
    scanf("%f",&pib1);

    printf("Digite a Quantidade de Pontos Turisticos: \n");
    scanf("%d",&pontos_turisticos1);

    //Segunda Carta

    printf("\nDigite os Dados da Segunda Carta:\n");

    printf("Digite o Estado: \n");
    scanf(" %c",&estado2);

    printf("Digite o Codigo: \n");
    scanf("%s",&codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s",nome_cidade2);

    printf("Digite a População: \n");
    scanf("%d",&populacao2);

    printf("Digite a Area: \n");
    scanf("%f",&area2);

    printf("Digite o PIB: \n");
    scanf("%f",&pib2);

    printf("Digite a Quantidade de Pontos Turisticos: \n");
    scanf("%d",&pontos_turisticos2);

 // Impressão das cartas

    printf("\nCarta 1\n");
    printf(" Estado: %c\n", estado1);
    printf(" Codigo: %c%s\n", estado1,codigo1);
    printf(" Nome da Cidade: %s\n", nome_cidade1);
    printf(" População: %d\n", populacao1);
    printf(" Area: %.2f km²\n", area1);
    printf(" PIB: %.2f Bilhões de reais\n", pib1);
    printf(" Quantidade Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2\n");
    printf(" Estado: %c\n", estado2);
    printf(" Codigo: %c%s\n", estado2,codigo2);
    printf(" Nome da Cidade: %s\n", nome_cidade2);
    printf(" População: %d\n", populacao2);
    printf(" Area: %.2f km²\n", area2);
    printf(" PIB: %.2f Bilhões de reais\n", pib2);
    printf(" Quantidade Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;


}
