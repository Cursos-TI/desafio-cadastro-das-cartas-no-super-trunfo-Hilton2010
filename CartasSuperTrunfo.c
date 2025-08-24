#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
  int pop1, tur1, pop2, tur2;
  char estado_1[1], codigo_carta1[3], cidade1[20], estado2[1], codigo_carta2[3], cidade2[20];
  float area1, pib1, area2, pib2;

  
  // Inclui dados da Carta 1
  printf("Digite o Estado da Carta 1: ");
  scanf("%s", &estado_1);

  printf("\n Digite o Código da Carta 1: ");
  scanf("%s", &codigo_carta1);

  printf("\n Digite o Nome da Cidade 1: ");
  scanf("%s", &cidade1);

  printf("\n Digite a População da Cidade 1: ");
  scanf("%d", &pop1);

  printf("\n Digite a Área da Cidade 1: ");
  scanf("%f", &area1);

  printf("\n Digite o PIB da Cidade 1: ");
  scanf("%f", &pib1);

  printf("\n Digite o nº pontos turísticos da Cidade 1: ");
  scanf("%d", &tur1);

  // Inclui dados da Carta 2
  printf("\n Digite o Estado da Carta 2: ");
  scanf("%s", &estado2);

  printf("\n Digite o Código da Carta 2: ");
  scanf("%s", &codigo_carta2);

  printf("\n Digite o Nome da Cidade 2: ");
  scanf("%s", &cidade2);

  printf("\n Digite a População da Cidade 2: ");
  scanf("%d", &pop2);

  printf("\n Digite a Área da Cidade 2: ");
  scanf("%f", &area2);

  printf("\n Digite o PIB da Cidade 2: ");
  scanf("%f", &pib2);

  printf("\n Digite o nº pontos turísticos da Cidade 2: ");
  scanf("%d", &tur2);
 
  // Mostra os dados da carta 1
  printf("Carta 1: \n");
  printf("Estado: %s \n", estado_1);
  printf("Código: %s \n", codigo_carta1);
  printf("Nome da Cidade: %s \n", cidade1);
  printf("População: %d \n", pop1);
  printf("Área: %.2f Km2 \n", area1);
  printf("PIB: %.2f bilhões de reais \n", pib1);
  printf("Nº de pontos turísticos %d \n", tur1);
  printf(" \n");

// Mostra os dados da carta 2
   printf("Carta 2: \n");
   printf("Estado: %s \n", estado2);
   printf("Código: %s \n", codigo_carta2);
   printf("Nome da Cidade: %s \n", cidade2);
   printf("População: %d \n", pop2);
   printf("Área: %.2f Km2 \n", area2);
   printf("PIB: %.2f bilhões de reais \n", pib2);
   printf("Nº de pontos turísticos: %d \n", tur2);
 
  return 0;
}
