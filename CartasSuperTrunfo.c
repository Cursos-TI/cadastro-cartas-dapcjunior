#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  printf("|--------------------------|\n");
  printf("|       Super Trunfo       |\n");
  printf("|--------------------------|\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[4];
  char codigoCarta01[10];
  char nomeCidade[50];
  int populacao, numeroPontosTuristicos;
  float areaEmKilometrosQuadrados;
  float pib;

  // Área para entrada de dados

  // Área para exibição dos dados da cidade



  // Dados da Primeira Carta


  printf("\nInsira os dados da 1º Carta\n");

  printf("Digite o Codigo da carta: ");
  scanf("%s", codigoCarta01);

  printf("Digite o Estado (ex: SP): ");
  scanf("%s", estado);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade);

  printf("Digite o total da Populacao: ");
  scanf("%d", &populacao);

  printf("Digite o total de pontos turisticos: \n");
  scanf("%d", &numeroPontosTuristicos);

  printf("Digite a Area em Km²: \n");
  scanf("%f", &areaEmKilometrosQuadrados);

  printf("Digite o PIB: \n");
  scanf("%f", &pib);

  printf("\n----- Carta 1 -----\n");
  printf("Estado: %s\n", estado);
  printf("Codigo: %s\n", codigoCarta01);
  printf("Cidade: %s\n", nomeCidade);
  printf("Populacao: %d\n", populacao);
  printf("Pontos Turisticos: %d\n", numeroPontosTuristicos);
  printf("Area: %.2f km²\n", areaEmKilometrosQuadrados);
  printf("PIB: %.2f\n", pib);

  return 0;
}
