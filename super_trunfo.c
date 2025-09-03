#include <stdio.h>

int main() {
    //Variáveis da carta 01

    char estado1[10];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1; 
    float area1;
    float pib1;
    int pontoturistico1;
    float densidade1;
    float pibpercapta1;
    float inverso1;
    float SuperPoder1;

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

    //Calculos da carta 01

    densidade1 = populacao1 / area1;
    pibpercapta1 = pib1 / populacao1;

    inverso1 = 1 / densidade1;

    SuperPoder1 = (float) populacao1 + area1 + pontoturistico1 + pibpercapta1 + inverso1;

    //Variáveis da carta 02

    char estado2[10];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontoturistico2;
    float densidade2;
    float pibpercapta2;
    float SuperPoder2;
    float inverso2;

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

    //Calculos da carta 02

    densidade2 = populacao2 / area2;
    pibpercapta2 = pib2 / populacao2;

    inverso2 = 1 / densidade2;

    SuperPoder2 = (float) populacao2 + area2 + pontoturistico2 + pibpercapta2 + inverso2;
   
   //Dados impressos
   
   
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapta1);
    printf("Super Poder: %.2f\n", SuperPoder1);
   
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapta2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    

    //Variáveis de resultado para comparação

    int resultadopopulacao = populacao1 > populacao2;
    int resultadoarea = area1 > area2;
    int resultadopib = pib1 > pib2;
    int resultadopontosturisticos = pontoturistico1 > pontoturistico2;
    int resultadodensidade = densidade1 < densidade2;
    int resultadopibpercapita = pibpercapta1 > pibpercapta2;
    int resultadoSuperPoder = SuperPoder1 > SuperPoder2;


    //Comparação entre as cartas

    printf("\n\n***Comparação de Cartas:***\n\n");
    
    printf("População: Carta 1 venceu (%d)\n", resultadopopulacao);
    printf("Área: Carta 1 venceu (%d) \n", resultadoarea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadopib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadopontosturisticos);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadodensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadopibpercapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperPoder);

    return 0;
}