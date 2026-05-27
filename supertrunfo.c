#include <stdio.h>

int main (){ 

// carta 1

char estado1[50];
char codigo1[50];
char cidade1[50];
int populacao1;
float area1;
float PIB1;
int numero_de_pontos_turisticos1;

// carta 2

char estado2[50];
char codigo2[50];
char cidade2[50];
int populacao2;
float area2;
float PIB2;
int numero_de_pontos_turisticos2;

printf("Carta 1: \n");
printf("digite o estado(ex de A a H):\n");
scanf("%s", estado1);

printf("digite o codigo(ex a01):\n");
scanf(" %[^\n]s", codigo1);

printf("digite a cidade:\n");
scanf(" %[^\n]s", cidade1);

printf("digite a populacao:\n");
scanf("%d", &populacao1);

printf("digite a area em km2:\n");
scanf("%f", &area1);

printf("digite o PIB em bilhoes:\n");
scanf("%f", &PIB1);

printf("digite o numero de pontos turisticos:\n");
scanf("%d", &numero_de_pontos_turisticos1);

printf("Carta 2: \n");
printf("digite o estado(ex de A a H):\n");
scanf("%s", estado2);

printf("digite o codigo(ex b01):\n");
scanf("%s", codigo2);

printf("digite a cidade:\n");
scanf(" %[^\n]s", cidade2);

printf("digite a populacao:\n");
scanf("%d", &populacao2);

printf("digite a area em km2:\n");
scanf("%f", &area2);

printf("digite o PIB em bilhoes:\n");
scanf("%f", &PIB2);

printf("digite o numero de pontos turisticos:\n");
scanf("%d", &numero_de_pontos_turisticos2);

printf("\n\n--- Carta 1 Cadastrada ---\n");
printf("Estado: %s\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f km2\n", area1);
printf("PIB: %.2f bilhoes\n", PIB1);
printf("Numero de Pontos Turisticos: %d\n", numero_de_pontos_turisticos1);

printf("\n\n--- Carta 2 Cadastrada ---\n");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km2\n", area2);
printf("PIB: %.2f bilhoes\n", PIB2);
printf("Numero de Pontos Turisticos: %d\n", numero_de_pontos_turisticos2);

return 0;


}