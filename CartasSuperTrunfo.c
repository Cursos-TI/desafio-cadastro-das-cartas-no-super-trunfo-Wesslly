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

    //Exibição das Cartas

    printf("\nCarta 1\n");
    printf(" Estado:%c\n Codigo:%c%s\n Nome da Cidade:%s\n População:%d\n Area:%.2f km²\n PIB:%f bilhões de reais\n Quantidade Pontos Turisticos:%d\n",
    estado1,estado1,codigo1,nome_cidade1,populacao1,area1,pib1,pontos_turisticos1);

    printf("\nCarta 2\n");
    printf(" Estado:%c\n Codigo:%c%s\n Nome da Cidade:%s\n População:%d\n Area:%.2f km²\n PIB:%f bilhões de reais\n Quantidade Pontos Turisticos:%d\n",
    estado2,estado2,codigo2,nome_cidade2,populacao2,area2,pib2,pontos_turisticos2);

    return 0;


}
