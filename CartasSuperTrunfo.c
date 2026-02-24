#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[50], estado2[50];
    char cidade1[50], cidade2[50];
    char cartao1[50], cartao2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

  // Área para entrada de dados
  printf("Digite o estado da cidade 1: ");
    scanf("%s", estado1);
    printf("Digite a cidade 1: ");
    scanf("%s", cidade1);
    printf("Digite o cartão da cidade 1: ");
    scanf("%s", cartao1);
    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);
    printf("Digite os pontos da cidade 1: ");
    scanf("%d", &pontos1);

    printf("\nDigite o estado da cidade 2: ");
    scanf("%s", estado2);
    printf("Digite a cidade 2: ");
    scanf("%s", cidade2);
    printf("Digite o cartão da cidade 2: ");
    scanf("%s", cartao2);
    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);
    printf("Digite os pontos da cidade 2: ");
    scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
  printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Cartão: %s\n", cartao1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Cartão: %s\n", cartao2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
return 0;
} 
