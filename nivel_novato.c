#include <stdio.h>

int main() {
    // Carta 1
    char codigo1[50], estado1[50], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Carta 2
    char codigo2[50], estado2[50], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Cadastro Carta 1
    printf("Carta 1 Estado: ");
    scanf("%s", estado1);
    printf("Carta 1 Codigo: ");
    scanf("%s", codigo1);
    printf("Carta 1 Nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("Carta 1 Populacao: ");
    scanf("%d", &populacao1);
    printf("Carta 1 Area: ");
    scanf("%f", &area1);
    printf("Carta 1 PIB: ");
    scanf("%f", &pib1);
    printf("Carta 1 Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro Carta 2
    printf("\nCarta 2 Estado: ");
    scanf("%s", estado2);
    printf("Carta 2 Codigo: ");
    scanf("%s", codigo2);
    printf("Carta 2 Nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("Carta 2 Populacao: ");
    scanf("%d", &populacao2);
    printf("Carta 2 Area: ");
    scanf("%f", &area2);
    printf("Carta 2 PIB: ");
    scanf("%f", &pib2);
    printf("Carta 2 Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibindo Carta 1
    printf("\n-- Carta 1 --\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibindo Carta 2
    printf("\n-- Carta 2 --\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}