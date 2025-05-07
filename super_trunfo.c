#include <stdio.h>

int main() {
    //Variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

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

    //Dados da primeira carta
    printf("\n          Dados da Primeira Carta\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    //Dados da segunda carta
    printf("\n          Dados da Segunda Carta\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
}