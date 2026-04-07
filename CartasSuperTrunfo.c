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
  char estado[4], estado2[4];
  char codigoCarta01[10], codigoCarta02[10];
  char nomeCidade[50], nomeCidade2[50];
  int populacao, populacao2, numeroPontosTuristicos, numeroPontosTuristicos2;
  float areaEmKilometrosQuadrados, areaEmKilometrosQuadrados2;
  float pib, pib2;

  // Área para entrada de dados

  // Área para exibição dos dados da cidade



  // Dados da Primeira Carta


  printf("\nInsira os dados da 1º Carta\n");

  printf("Digite o Codigo da carta: \n");
  scanf("%s", codigoCarta01);

  printf("Digite o Estado (ex: SP): \n");
  scanf("%s", estado);

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

  // Dados da Segunda Carta


  printf("\nInsira os dados da 2º Carta\n");

  printf("Digite o Codigo da carta: \n");
  scanf("%s", codigoCarta02);

  printf("Digite o Estado (ex: SP): \n");
  scanf("%s", estado2);

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

  //fffffffffffffffffffffffffffff

  printf("\n----- Carta 1 -----\n");
  printf("Codigo: %s\n", codigoCarta02);
  printf("Estado: %s\n", estado2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Pontos Turisticos: %d\n", numeroPontosTuristicos2);
  printf("Area: %.2f km²\n", areaEmKilometrosQuadrados2);
  printf("PIB: %.2f\n", pib2);

  return 0;

}
