#include <stdio.h>

int main() {
    //Variáveis da carta 01

    char estado1[10];
    char codigo1[4];
    char cidade1[50];
    int populacao1; 
    float area1;
    float pib1;
    int pontoturistico1;

    //Estradas e saídas de dados Carta 01

    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Código da carta: \n");
    scanf("%s", codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontoturistico1);


    //Variáveis da carta 02

    char estado2[10];
    char codigo2[4];
    char cidade2[50];
    int populacao2; 
    float area2;
    float pib2;
    int pontoturistico2;

    //Estradas e saídas de dados Carta 02

    printf("\n\nEstado: \n");
    scanf("%s", estado2);

    printf("Código da carta: \n");
    scanf("%s", codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontoturistico2);

   
   //Dados impressos
   
   
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico1);
   
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico2);

    return 0;
}