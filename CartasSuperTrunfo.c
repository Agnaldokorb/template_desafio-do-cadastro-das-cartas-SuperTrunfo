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
  int opcao;
  

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

  // Área para calculo da densidade populacional e PIB per capita carta 1
  float densidade1 = (float)populacao1 / area1;
  float pibPerCapita1 = pib1 / populacao1;float superPoder1 = (float)(populacao1 + area1 + pib1 + pontos1 + densidade1 + pibPerCapita1);

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

  // Área para calculo da densidade populacional e PIB per capita carta 2
  float densidade2 = (float)populacao2 / area2;
  float pibPerCapita2 = pib2 / populacao2;
  float superPoder2 = (float)(populacao2 + area2 + pib2 + pontos2 + densidade2 + pibPerCapita2);

  //Desafio: nível mestre - Comparação das cartas
  

  // Área para exibição dos dados da cidade 1
  printf("\n--- Carta 1 ---\n");
  printf("Estado: %s\n", estado1);
  printf("Cidade: %s\n", cidade1);
  printf("Cartão: %s\n", cartao1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos turisticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f\n", densidade1);
  printf("PIB per Capita: R$%.2f\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);


  // Área para exibição dos dados da cidade 2
  printf("\n--- Carta 2 ---\n");
  printf("Estado: %s\n", estado2);
  printf("Cidade: %s\n", cidade2);
  printf("Cartão: %s\n", cartao2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos turisticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f\n", densidade2);
  printf("PIB per Capita: R$%.2f\n", pibPerCapita2 );
  printf("Super Poder: %.2f\n", superPoder2);

  // Área para exibição da comparação entre as cartas
  printf("\n--- Comparação entre as cartas ---\n");
  printf("selecione a propriedade para comparar as cartas:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  printf("5 - Densidade Populacional\n");
  printf("6 - PIB per Capita\n");
  scanf("%d", &opcao);
  switch (opcao)
  {
  case 1:
    if (populacao1 > populacao2) {
      printf("Carta 1 venceu!\n");
      printf("(%s) tem uma população de (%d), maior que (%s) que tem (%d).\n", cidade1, populacao1, cidade2, populacao2);
    } else if (populacao2 > populacao1) {
      printf("Carta 2 venceu!\n");
      printf("(%s) tem uma população de (%d), maior que (%s) que tem (%d).\n", cidade2, populacao2, cidade1, populacao1);
    } else {
      printf("Empate!\n");
      printf("Ambas as cidades têm a mesma população de (%d).\n", populacao1);
    }
    break;
  case 2:
    if (area1 > area2) {
      printf("Carta 1 venceu!\n");
      printf("(%s) tem uma área de (%.2f), maior que (%s) que tem (%.2f).\n", cidade1, area1, cidade2, area2);
    } else if (area2 > area1) {
      printf("Carta 2 venceu!\n");
      printf("(%s) tem uma área de (%.2f), maior que (%s) que tem (%.2f).\n", cidade2, area2, cidade1, area1);
    } else {
      printf("Empate!\n");
      printf("Ambas as cidades têm a mesma área de (%.2f).\n", area1);
    }
    break;
  case 3:
    if (pib1 > pib2) {
      printf("Carta 1 venceu!\n");
      printf("(%s) tem um PIB de (%.2f), maior que (%s) que tem (%.2f).\n", cidade1, pib1, cidade2, pib2);
    } else if (pib2 > pib1) {
      printf("Carta 2 venceu!\n");
      printf("(%s) tem um PIB de (%.2f), maior que (%s) que tem (%.2f).\n", cidade2, pib2, cidade1, pib1);
    } else {
      printf("Empate!\n");
      printf("Ambas as cidades têm o mesmo PIB de (%.2f).\n", pib1);
    }
    break;
  case 4:
    if (pontos1 > pontos2) {
      printf("Carta 1 venceu!\n");
      printf("(%s) tem (%d) pontos turísticos, maior que (%s) que tem (%d).\n", cidade1, pontos1, cidade2, pontos2);
    } else if (pontos2 > pontos1) {
      printf("Carta 2 venceu!\n");
      printf("(%s) tem (%d) pontos turísticos, maior que (%s) que tem (%d).\n", cidade2, pontos2, cidade1, pontos1);
    } else {
      printf("Empate!\n");
      printf("Ambas as cidades têm o mesmo número de pontos turísticos: (%d).\n", pontos1);
    }
    break;
  case 5:
    if (densidade1 < densidade2) {
      printf("Carta 1 venceu!\n");
      printf("(%s) tem uma densidade populacional de (%.2f), menor que (%s) que tem (%.2f).\n", cidade1, densidade1, cidade2, densidade2);
    } else if (densidade2 < densidade1) {
      printf("Carta 2 venceu!\n");
      printf("(%s) tem uma densidade populacional de (%.2f), menor que (%s) que tem (%.2f).\n", cidade2, densidade2, cidade1, densidade1);
    } else {
      printf("Empate!\n");
      printf("Ambas as cidades têm a mesma densidade populacional de (%.2f).\n", densidade1);
    }
    break;
  case 6:
        if (pibPerCapita1 > pibPerCapita2) {
          printf("Carta 1 venceu!\n");
          printf("(%s) tem um PIB per capita de R$%.2f, maior que (%s) que tem R$%.2f.\n", cidade1, pibPerCapita1, cidade2, pibPerCapita2);
        } else if (pibPerCapita2 > pibPerCapita1) {
          printf("Carta 2 venceu!\n");
          printf("(%s) tem um PIB per capita de R$%.2f, maior que (%s) que tem R$%.2f.\n", cidade2, pibPerCapita2, cidade1, pibPerCapita1);
        } else {
          printf("Empate!\n");
          printf("Ambas as cidades têm o mesmo PIB per capita de R$%.2f.\n", pibPerCapita1);
        }
        break;
  
  default:
    break;
  }
    
return 0;
} 
