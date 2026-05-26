#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  char estado1, cidade1[50], codigo1[4];
  int  pontosTuristicos1;
  unsigned long int habitantes1;
  float area1, pib1, densidade1, pibPercapita1, superPoder1, valorSemDP1;

  // Carta 2
  char estado2, cidade2[50], codigo2[4];
  int  pontosTuristicos2;
  unsigned long int habitantes2;
  float area2, pib2, densidade2, pibPercapita2, superPoder2, valorSemDP2;

  // Área para entrada de dados
  // Entrada Carta 1
 printf("\n");
  printf("========Carta 1========\n");

  printf("Digite o estado da Carta (A-H): ");
  scanf("%c", &estado1);

  printf("Digite o Codigo da Carta, (ex: A01): ");
  scanf("%s", &codigo1);

  printf("Digite o nome da Cidade: ");
  scanf(" %s", &cidade1);

  printf("Digite o numero de Habitantes da Cidade: ");
  scanf("%lu", &habitantes1);

  printf("Digite a Area da Cidade em Quilometros quadrados: ");
  scanf(" %f", &area1);

  printf("Digite o Produto Interno Bruto da Cidade: ");
  scanf(" %f", &pib1);

  printf("Digite a quantidade de pontos turisticos na Cidade: ");
  scanf("%d", &pontosTuristicos1);

  densidade1 = (float) habitantes1 / area1;
  pibPercapita1 = (pib1 * 1000000000) / habitantes1;

  superPoder1 = (float) habitantes1
                      + area1
                      + (pib1 * 1000000000)
                      + (float) pontosTuristicos1
                      + pibPercapita1
                      + (1.0f / densidade1);

  valorSemDP1 =  (float) habitantes1
                      + area1
                      + (pib1 * 1000000000)
                      + (float) pontosTuristicos1
                      + pibPercapita1;

  // Entrada Carta 2

  printf("\n========Carta 2========\n");

  printf("Digite o estado da Carta (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o Codigo da Carta, (ex: B01): ");
  scanf("%s", &codigo2);

  printf("Digite o nome da Cidade: ");
  scanf(" %s", &cidade2);

  printf("Digite o numero de Habitantes da Cidade: ");
  scanf("%lu", &habitantes2);

  printf("Digite a Area da Cidade em Quilometros quadrados: ");
  scanf("%f", &area2);

  printf("Digite o Produto Interno Bruto da Cidade: ");
  scanf(" %f", &pib2);

  printf("Digite a quantidade de pontos turisticos na Cidade: ");
  scanf(" %d", &pontosTuristicos2);

  densidade2 = (float) habitantes2 / area2;
  pibPercapita2 = (pib2 * 1000000000) / habitantes2;

  superPoder2 = (float) habitantes2
                      + area2
                      + (pib2 * 1000000000)
                      + (float) pontosTuristicos2
                      + pibPercapita2
                      + (1.0f / densidade2);

  valorSemDP2 = (float) habitantes2
                      + area2
                      + (pib2 * 1000000000)
                      + (float) pontosTuristicos2
                      + pibPercapita2;

  // Área para exibição dos dados da cidade

  printf("\n========Carta 1========\n");
  printf("\n"); 
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d habitantes\n", habitantes1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f Bilhoes de Reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional : %.2f hab/km2\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibPercapita1);


  printf("\n========Carta 2========\n");
  printf("\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d habitantes\n", habitantes2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f Bilhoes de Reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional : %.2f hab/km2\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibPercapita2);  
 

  // Area para comparaçao das cartas

  printf("\n========Comparacao de Cartas========\n");
  printf("\n");
  printf("Populacao: Carta 1 venceu (%d)\n", habitantes1 > habitantes2);
  printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 > densidade2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPercapita1 > pibPercapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

  // Comparação fixa:

  printf("\n========Comparacao de Pontos Turisticos========\n");
  printf("\n");
  printf("Pontos Turisticos - (%s) - %d\n", cidade1, pontosTuristicos1);
  printf("Pontos Turisticos - (%s) - %d\n", cidade2, pontosTuristicos2);

  if(pontosTuristicos1 > pontosTuristicos2){
    printf("Carta 1 - %s - Venceu!\n", cidade1);
  } else {
    printf("Carta 2 - %s - Venceu!\n", cidade2);
  }
  
  // Determinar a carta vencedora sem Densidade Populacional

  printf("\n========Carta Vencedora sem Densidade Populacional========\n");
  printf("\n");
  if(valorSemDP1 > valorSemDP2){
    printf("A carta vencedora sem calcular a Densidade Populacional e (%s) com: %.2f de Poder!!!!\n", cidade1, valorSemDP1);
  } else {
    printf("A carta vencedora sem calcular a Densidade Populacional e (%s) com: %.2f de Poder!!!!\n", cidade2, valorSemDP2);
}


//Carta vencedora em base a densidade populacional

printf("\n========Carta Vencedora em base a  Densidade Populacional========\n");
printf("\n");
printf("Densidade Populacional de: %s: e: %.2f habitantes por km2\n", cidade1, densidade1);
printf("Densidade Populacional de: %s: e: %.2f habitantes por km2\n", cidade2, densidade2);

if (densidade1 < densidade2) {
   printf("Resultado: %s Venceu\n", cidade1);
} else { //(densidade2 < densidade1)
  printf("Resultado: %s Venceu\n", cidade2);
  printf("\n");
}


return 0;

} 
