#include <stdio.h>

int main() {
    //Variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float DensiPop1, DensiPop2;
    float PibPerCap1, PibPerCap2;

    //Primeira carta
    printf("            Digite os dados da primeira carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01, B03): ");
    scanf("%s", &codigo1);

    printf("Nome da cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //Segunda carta
    printf("\n          Digite os dados da segunda carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: A01, B03): ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Cálculo de Densidade Populacional
    DensiPop1 = (float)populacao1 / area1;
    DensiPop2 = (float)populacao2 / area2;

    PibPerCap1 = pib1 / (float)populacao1;
    PibPerCap2 = pib2 / (float)populacao2;

    //Cálculo do Super Poder
    float SuperPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + PibPerCap1 + (1.0f / DensiPop1);
    float SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + PibPerCap2 + (1.0f / DensiPop2);

    //Dados da primeira carta
    printf("\n          Dados da Primeira Carta\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2fhab/km²\n", DensiPop1);
    printf("PIB per Capita: %.2fR$\n", PibPerCap1);

    //Dados da segunda carta
    printf("\n\n          Dados da Segunda Carta\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2fhab/km²\n", DensiPop2);
    printf("PIB per Capita: %.2fR$\n", PibPerCap2);
    
    //Comparação das cartas
    printf("\n\nComparação de Cartas:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", DensiPop1 < DensiPop2);
    printf("PIB per Capita: %d\n", PibPerCap1 > PibPerCap2);
    printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2);

    return 0;
}
