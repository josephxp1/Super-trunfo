#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float dens1, dens2, pibCap1, pibCap2, super1, super2;

    // Entrada Carta 1
    printf("Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Entrada Carta 2
    printf("\nCarta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    dens1 = populacao1 / area1;
    dens2 = populacao2 / area2;
    pibCap1 = (pib1 * 1000000000) / populacao1;
    pibCap2 = (pib2 * 1000000000) / populacao2;
    super1 = (float)populacao1 + area1 + pib1 + pontos1 + pibCap1 + (1.0f / dens1);
    super2 = (float)populacao2 + area2 + pib2 + pontos2 + pibCap2 + (1.0f / dens2);

    // Resultados
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", dens1 < dens2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibCap1 > pibCap2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

    return 0;
}
