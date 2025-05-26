#include <stdio.h>

int main() {

    // Variáveis para as duas cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float area1, area2,densidade_populacional1,PIB_per_capita1;
    float pib1, pib2,densidade_populacional2,PIB_per_capita2;
    int pontos_turisticos1, pontos_turisticos2;
    float superPoder1, superPoder2;
    int resultadoPopulacao, resultadoArea, resultadoDensidade_populacional, resultadoPIB_per_capita, resultadoPIB,
        resultadoPontosTuristicos, resultadoSuperPoder, resultadoDensidadePopulacional;

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

    // Cálculos da primeira carta

    densidade_populacional1 = populacao1 / area1;
    PIB_per_capita1 = pib1 / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + PIB_per_capita1 + (1 / densidade_populacional1);


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

    // Cálculos da segunda carta

    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = pib2 / populacao2;
    superPoder2 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + PIB_per_capita1 + (1 / densidade_populacional1);


    // Comparações de Atributos

    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPIB = pib1 > pib2;
    resultadoPontosTuristicos = pontos_turisticos1 > pontos_turisticos2;
    resultadoPIB_per_capita = PIB_per_capita1 > PIB_per_capita2;
    resultadoDensidade_populacional = densidade_populacional1 < densidade_populacional2;
    resultadoSuperPoder = superPoder1 > superPoder2;
    
    // Impressão das cartas

    printf("\nCarta 1\n");
    printf(" Estado: %c\n", estado1);
    printf(" Codigo: %c%s\n", estado1,codigo1);
    printf(" Nome da Cidade: %s\n", nome_cidade1);
    printf(" População: %d\n", populacao1);
    printf(" Area: %.2f km²\n", area1);
    printf(" PIB: %.2f Bilhões de reais\n", pib1);
    printf(" Quantidade Pontos Turisticos: %d\n", pontos_turisticos1);
    printf(" Densidade Populacional: %2.f hab/km²\n", densidade_populacional1);
    printf(" PIB per Capita: %2.f reais\n", PIB_per_capita1);
    
    printf("\nCarta 2\n");
    printf(" Estado: %c\n", estado2);
    printf(" Codigo: %c%s\n", estado2,codigo2);
    printf(" Nome da Cidade: %s\n", nome_cidade2);
    printf(" População: %d\n", populacao2);
    printf(" Area: %.2f km²\n", area2);
    printf(" PIB: %.2f Bilhões de reais\n", pib2);
    printf(" Quantidade Pontos Turisticos: %d\n", pontos_turisticos2);
    printf(" Densidade Populacional: %2.f hab/km²\n", densidade_populacional2);
    printf(" PIB per Capita: %2.f reais\n", PIB_per_capita2);

    //Impressão da Comparação das Cartas

    printf("\nCOMPARAÇÃO DE CARTAS\n");
    printf(" População: %s\n", resultadoPopulacao ? "Carta 1 Venceu(1)" : "Carta 2 Venceu(0)");
    printf(" Area: %s\n", resultadoArea ? "Carta 1 Venceu(1)" : "Carta 2 Venceu(0)");
    printf(" PIB: %s \n", resultadoPIB ? "Carta 1 Venceu(1)" : "Carta 2 Venceu(0)");
    printf(" Quantidade Pontos Turisticos: %s\n", resultadoPontosTuristicos ? "Carta 1 Venceu(1)" : "Carta 2 Venceu(0)");
    printf(" Densidade Populacional: %s\n", resultadoDensidade_populacional ? "Carta 1 Venceu(1)" : "Carta 2 Venceu(0)");
    printf(" PIB per Capita: %s\n", resultadoPIB_per_capita ? "Carta 1 Venceu(1)" : "Carta 2 Venceu(0)");
    printf(" Super Poder: %s\n", resultadoSuperPoder ? "Carta 1 Venceu(1)" : "Carta 2 Venceu(0)");

    return 0;

}