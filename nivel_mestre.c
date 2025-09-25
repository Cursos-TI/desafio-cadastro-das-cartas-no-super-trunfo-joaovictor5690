#include <stdio.h>

int main() {
    // Carta 1
    char codigo1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char codigo2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    // Cadastro carta 1
    printf("Cadastro da Carta 1\n");
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // Cadastro carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibe os valores calculados
    printf("\n--- Dados calculados ---\n");
    printf("Carta 1 (%s): densidade = %.2f | PIB per capita = %.6f | Super poder = %.2f\n", codigo1, densidade1, pibPerCapita1, superPoder1);
    printf("Carta 2 (%s): densidade = %.2f | PIB per capita = %.6f | Super poder = %.2f\n", codigo2, densidade2, pibPerCapita2, superPoder2);

    // Comparações
    printf("\n--- Comparacoes (1 = Carta 1 venceu, 0 = Carta 2 venceu) ---\n");
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade (menor vence): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}