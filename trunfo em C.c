#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  char estado1, cidade1[50], codigo1[4];
  int habitantes1, pontosTuristicos1;
  float area1, pib1;

  // Carta 2
  char estado2, cidade2[50], codigo2[4];
  int habitantes2, pontosTuristicos2;
  float area2, pib2;

  // Área para entrada de dados
  // Entrada Carta 1
  printf("========Carta 1========\n");
  printf("Digite o estado da Carta (A-H): ");
  scanf("%c", &estado1);

  printf("Digite o Codigo da Carta, (ex: A01): ");
  scanf("%s", &codigo1);

// Consumir o '\n' deixado pelo scanf
  getchar();

  printf("Digite o nome da Cidade: ");
  fgets(cidade1, 50, stdin);// lê a entrada do teclado

  printf("Digite o numero de Habitantes da Cidade: ");
  scanf("%d", &habitantes1);

  printf("Digite a Area da Cidade em Quilometros quadrados: ");
  scanf("%f", &area1);

  printf("Digite o Produto Interno Bruto da Cidade: ");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turisticos na Cidade: ");
  scanf("%d", &pontosTuristicos1);

  getchar(); // limpa o buffer

  // Entrada Carta 2
  printf("\n========Carta 2========\n");

  printf("Digite o estado da Carta (A-H): ");
  scanf("%c", &estado2);

  printf("Digite o Codigo da Carta, (ex: B02): ");
  scanf("%s", &codigo2);

  // Consumir o '\n' deixado pelo scanf
  getchar();

  printf("Digite o nome da Cidade: ");
  fgets(cidade2, 50, stdin);// lê a entrada do teclado

  printf("Digite o numero de Habitantes da Cidade: ");
  scanf("%d", &habitantes2);

  printf("Digite a Area da Cidade em Quilometros quadrados: ");
  scanf("%f", &area2);

  printf("Digite o Produto Interno Bruto da Cidade: ");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turisticos na Cidade: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade

  printf("\n========Carta 1========\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", habitantes1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f Bilhoes de Reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

  printf("\n========Carta 2========\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", habitantes2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f Bilhoes de Reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
  

return 0;
} 