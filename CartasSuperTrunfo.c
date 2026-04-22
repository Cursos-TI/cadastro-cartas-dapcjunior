#include <stdio.h>

// Desafio Super Trunfo - Países

int main()
{
    printf("|--------------------------|\n");
    printf("|       Super Trunfo       |\n");
    printf("|--------------------------|\n");

    // Variáveis
    char estado[4], estado2[4];
    char codigoCarta01[10], codigoCarta02[10];
    char nomeCidade[50], nomeCidade2[50];
    int populacao, populacao2, numeroPontosTuristicos, numeroPontosTuristicos2;
    float areaEmKilometrosQuadrados, areaEmKilometrosQuadrados2;
    float pib, pib2;

    // ===== CARTA 1 =====
    printf("\nInsira os dados da 1º Carta\n");

    printf("Digite o Codigo da carta: \n");
    scanf("%9s", codigoCarta01);

    printf("Digite o Estado (ex: SP): \n");
    scanf("%3s", estado);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade);

    printf("Digite o total da Populacao: \n");
    scanf("%d", &populacao);

    printf("Digite o total de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos);

    printf("Digite a Area em Km²: \n");
    scanf("%f", &areaEmKilometrosQuadrados);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    // ===== CARTA 2 =====
    printf("\nInsira os dados da 2º Carta\n");

    printf("Digite o Codigo da carta: \n");
    scanf("%9s", codigoCarta02);

    printf("Digite o Estado (ex: SP): \n");
    scanf("%3s", estado2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite o total da Populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite o total de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos2);

    printf("Digite a Area em Km²: \n");
    scanf("%f", &areaEmKilometrosQuadrados2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    // ===== EXIBIÇÃO =====

    printf("\n----- Carta 1 -----\n");
    printf("Codigo: %s\n", codigoCarta01);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Pontos Turisticos: %d\n", numeroPontosTuristicos);
    printf("Area: %.2f km²\n", areaEmKilometrosQuadrados);
    printf("PIB: %.2f\n", pib);

    printf("\n----- Carta 2 -----\n");
    printf("Codigo: %s\n", codigoCarta02);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Pontos Turisticos: %d\n", numeroPontosTuristicos2);
    printf("Area: %.2f km²\n", areaEmKilometrosQuadrados2);
    printf("PIB: %.2f\n", pib2);

    return 0;
}