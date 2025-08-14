#include <stdio.h>

int main() {
    // Declaração das variável

    // Carta 1

    char estado1[3], codigo1[5], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // Carta 2
    char estado2[3], codigo2[5], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // Variáveis - cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    int opcao; // opção do menu

    // Entrada - dados
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (sigla): ");
    scanf("%s", estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (sigla): ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Calculo
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Menu 
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n=== Comparação de cartas ===\n");

    // comparação
    switch(opcao) {
        case 1: // População
            printf("População: %lu (Carta 1) x %lu (Carta 2)\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Carta 1 venceu!\n");
            else if (populacao2 > populacao1)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Área: %.2f (Carta 1) x %.2f (Carta 2)\n", area1, area2);
            if (area1 > area2)
                printf("Carta 1 venceu!\n");
            else if (area2 > area1)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB: %.2f (Carta 1) x %.2f (Carta 2)\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Carta 1 venceu!\n");
            else if (pib2 > pib1)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Pontos turísticos: %d (Carta 1) x %d (Carta 2)\n", pontos1, pontos2);
            if (pontos1 > pontos2)
                printf("Carta 1 venceu!\n");
            else if (pontos2 > pontos1)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade
            printf("Densidade: %.2f (Carta 1) x %.2f (Carta 2)\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Carta 1 venceu!\n");
            else if (densidade2 < densidade1)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 6: // PIB
            printf("PIB per capita: %.2f (Carta 1) x %.2f (Carta 2)\n", pibPerCapita1, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Carta 1 venceu!\n");
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
