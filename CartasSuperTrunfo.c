#include <stdio.h>

int main(){

char estado1, estado2;
char codigo1[4], codigo2[4];
char cidade1[50], cidade2[50];
int populacao1, populacao2;
int pontos_turisticos1, pontos_turisticos2;
float area1, area2; 
float pib1, pib2;
float x1 = 8102.47, x2 = 5622.24;
float y1 = 56724.32, y2 = 44532.91;
float densidade_populacional1 = x1 / y1;
float densidade_populacional2 = x2 / y2;
float pib_per_capita1 = y1 / x1;
float pib_per_capita2 = y2 / x2;



printf(">>>>Jogo super Trunfo<<<<\n\n");

printf("Cadastro da carta 1:\n");

printf("\nDigite o estado (A-H):");
scanf("%c", &estado1);
printf("Digite o codigo:");
scanf("%s", &codigo1);
printf("Digite o nome da cidade:");
scanf("%s", &cidade1);
printf("Digite a populacao:");
scanf("%d", &populacao1);
printf("Digite a quantidade de pontos turisticos:");
scanf("%d", &pontos_turisticos1);
printf("Digite a area:");
scanf("%f", &area1);
printf("Digite o PIB:");
scanf("%f", &pib1);


printf("\nestado: %c", estado1);
printf("\ncodigo: %s", codigo1);
printf("\ncidade: %s", cidade1);
printf("\npopulacao: %d", populacao1);
printf("\npontos turisticos: %d", pontos_turisticos1);
printf("\narea: %f km2", area1);
printf("\npib: %f", pib1);
printf("\ndensidade populacional: %f", densidade_populacional1);
printf("\npib per capita: %f", pib_per_capita1);

printf("\n\n");


printf("\nCadastro da carta 2:\n");

printf("\nDigite o estado (A-H):");
scanf("\n%c", &estado2);

printf("Digite o codigo:");
scanf("\n%s", &codigo2);
printf("Digite o nome da cidade:");
scanf("%s", &cidade2);
printf("Digite a populacao:");
scanf("%d", &populacao2);
printf("Digite a quantidade de pontos turisticos:");
scanf("%d", &pontos_turisticos2);
printf("Digite a area:");
scanf("%f", &area2);
printf("Digite o PIB:");
scanf("\n%f", &pib2);

printf("\nestado: %c", estado2);
printf("\ncodigo: %s", codigo2);
printf("\ncidade: %s", cidade2);
printf("\npopulacao: %d", populacao2);
printf("\npontos turisticos: %d", pontos_turisticos2);
printf("\narea: %f km²", area2);
printf("\npib: %f", pib2);
printf("\ndensidade populacional: %f", densidade_populacional2);
printf("\npib per capita: %f", pib_per_capita2);


return 0;




















}
 



























}
 








