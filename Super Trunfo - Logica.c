#include <stdio.h>

int main() {
    // Declaração de variáveis
    char Estado1, Estado2;
    char Codigo1[5], Codigo2[5];
    char Cidade1[50], Cidade2[50];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;

    float Densidade1, Densidade2;
    float PIBperCapita1, PIBperCapita2;

    // Entrada - Carta 1
    printf("Carta 1:\n");
    printf("Digite o estado: ");
    scanf(" %c", &Estado1);
    printf("Digite o código: ");
    scanf("%s", Codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade1);
    printf("Digite a população: ");
    scanf("%lu", &Populacao1);
    printf("Digite a área: ");
    scanf("%f", &Area1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    // Entrada - Carta 2
    printf("\nCarta 2:\n");
    printf("Digite o estado: ");
    scanf(" %c", &Estado2);
    printf("Digite o código: ");
    scanf("%s", Codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade2);
    printf("Digite a população: ");
    scanf("%lu", &Populacao2);
    printf("Digite a área: ");
    scanf("%f", &Area2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    // Cálculos
    Densidade1 = (float)Populacao1 / Area1;
    Densidade2 = (float)Populacao2 / Area2;

    PIBperCapita1 = PIB1 / Populacao1;
    PIBperCapita2 = PIB2 / Populacao2;

    // Exibição dos dados das cartas
    printf("\n=== Informações das Cartas ===\n");
    printf("Carta 1 - %s (%c):\n", Cidade1, Estado1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", Densidade1);
    printf("PIB per Capita: %.2f\n\n", PIBperCapita1);

    printf("Carta 2 - %s (%c):\n", Cidade2, Estado2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", Densidade2);
    printf("PIB per Capita: %.2f\n\n", PIBperCapita2);

    // Comparação — Atributo escolhido: População (maior vence)
    printf("=== Comparação de Cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s (%c): %lu\n", Cidade1, Estado1, Populacao1);
    printf("Carta 2 - %s (%c): %lu\n", Cidade2, Estado2, Populacao2);

    if (Populacao1 > Populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
    } else if (Populacao2 > Populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
