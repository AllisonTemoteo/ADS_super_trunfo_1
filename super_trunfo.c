/**
 * Program: Super Trunfo - Criador de cartas
 * Dev: Allison Temoteo
 * version: 0.2
 */

#include <stdio.h>

int main()
{
  char card1_estate;
  char card1_cardCode[3];
  char card1_cityName[50];
  int card1_population;
  float card1_area;
  float card1_pib;
  int card1_touristPointNumber;
  float card1_populationalDensity;
  float card1_pibPerCapita;

  char card2_estate;
  char card2_cardCode[3];
  char card2_cityName[50];
  int card2_population;
  float card2_area;
  float card2_pib;
  int card2_touristPointNumber;
  float card2_populationalDensity;
  float card2_pibPerCapita;

  printf("-----------------------------------------------------------------------\n");
  printf("Cadastro de cartas - Super Trunfo - v0.1\n\n");
  printf("Por favor, insira os dados solicitados respeitando os valores esperados\n");
  printf("-----------------------------------------------------------------------\n\n");

  printf("Carta 1\n");

  printf("Estado (A-H): ");
  scanf("%c", &card1_estate);

  printf("Código (01-04): ");
  scanf("%s", &card1_cardCode);

  printf("Nome da cidade (até 50 caracteres): ");
  scanf("%s", &card1_cityName);

  printf("População: ");
  scanf("%d", &card1_population);

  printf("Área (km²): ");
  scanf("%f", &card1_area);

  printf("PIB: ");
  scanf("%f", &card1_pib);

  printf("Quantidade de pontos turísticos: ");
  scanf("%d", &card1_touristPointNumber);
  printf("\n");

  getchar();

  printf("-----------------------------------------------------------------------\n\n");
  printf("Carta 2\n");

  printf("Estado (A-H): ");
  scanf("%c", &card2_estate);

  printf("Código (01-04): ");
  scanf("%s", &card2_cardCode);

  printf("Nome da cidade (até 50 caracteres): ");
  scanf("%s", &card2_cityName);

  printf("População: ");
  scanf("%d", &card2_population);

  printf("Área (km²): ");
  scanf("%f", &card2_area);

  printf("PIB: ");
  scanf("%f", &card2_pib);

  printf("Quantidade de pontos turísticos: ");
  scanf("%d", &card2_touristPointNumber);

  card1_populationalDensity = card1_population / card1_area;
  card1_pibPerCapita = card1_pib / card1_population;

  card2_populationalDensity = card2_population / card2_area;
  card2_pibPerCapita = card2_pib / card2_population;

  printf("-----------------------------------------------------------------------\n\n");

  printf("Carta 1:\n");
  printf("Estado: %c\n", card1_estate);
  printf("Código da carta: %c%s\n", card1_estate, card1_cardCode);
  printf("Nome da cidade: %s\n", card1_cityName);
  printf("População: %d\n", card1_population);
  printf("Área: %f\n km²", card1_area);
  printf("PIB: %f bilhões de reais\n", card1_pib);
  printf("Número de pontos turísticos: %d\n", card1_touristPointNumber);
  printf("Densidade Populacional: %.2f hab/km²\n", card1_populationalDensity);
  printf("PIB per Capita: %.2f reais\n", card1_pibPerCapita);

  printf("\n");
  printf("Carta 2:\n");
  printf("Estado: %c\n", card2_estate);
  printf("Código da carta: %c%s\n", card2_estate, card2_cardCode);
  printf("Nome da cidade: %s\n", card2_cityName);
  printf("População: %d\n", card2_population);
  printf("Área: %f\n km²", card2_area);
  printf("PIB: %f\n bilhões de reais", card2_pib);
  printf("Número de pontos turísticos: %d\n", card2_touristPointNumber);
  printf("Densidade Populacional: %.2f hab/km²\n", card2_populationalDensity);
  printf("PIB per Capita: %.2f reais\n", card2_pibPerCapita);

  printf("\n");

  return 0;
  
}