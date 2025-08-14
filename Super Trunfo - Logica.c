#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1[3], codigo1[5], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    char estado2[3], codigo2[5], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    float densidade1 = 0.0f, densidade2 = 0.0f;
    float pibPerCapita1 = 0.0f, pibPerCapita2 = 0.0f;

    int atributo1, atributo2;

    // Entrada dos dados
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (sigla): "); scanf("%s", estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", cidade1); // Lê com espaços
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área: "); scanf("%f", &area1);
    printf("PIB (em bilhões): "); scanf("%f", &pib1);
    printf("Pontos turísticos: "); scanf("%d", &pontos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (sigla): "); scanf("%s", estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf(" %[^\n]", cidade2); // Lê com espaços
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área: "); scanf("%f", &area2);
    printf("PIB (em bilhões): "); scanf("%f", &pib2);
    printf("Pontos turísticos: "); scanf("%d", &pontos2);

    // Cálculos com verificação de zero
    if (area1 != 0.0f) densidade1 = populacao1 / area1;
    else printf("Aviso: Area da Carta 1 eh zero.\n");

    if (area2 != 0.0f) densidade2 = populacao2 / area2;
    else printf("Aviso: Area da Carta 2 eh zero.\n");

    if (populacao1 != 0UL) pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    else printf("Aviso: Populacao da Carta 1 eh zero.\n");

    if (populacao2 != 0UL) pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    else printf("Aviso: Populacao da Carta 2 eh zero.\n");

    // Escolha dos atributos
    printf("\n=== Escolha o primeiro atributo ===\n");
    printf("1-População 2-Área 3-PIB 4-Pontos turísticos 5-Densidade 6-PIB per capita\nOpção: ");
    scanf("%d", &atributo1);

    printf("\n=== Escolha o segundo atributo (diferente) ===\n");
    printf("1-População 2-Área 3-PIB 4-Pontos turísticos 5-Densidade 6-PIB per capita\nOpção: ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1) {
        printf("Erro: segundo atributo igual ao primeiro. Programa encerrado.\n");
        return 0;
    }

    // Valores dos atributos
    float val1_at1, val2_at1, val1_at2, val2_at2;

    switch(atributo1) {
        case 1: val1_at1=populacao1; val2_at1=populacao2; break;
        case 2: val1_at1=area1; val2_at1=area2; break;
        case 3: val1_at1=pib1; val2_at1=pib2; break;
        case 4: val1_at1=pontos1; val2_at1=pontos2; break;
        case 5: val1_at1=densidade1; val2_at1=densidade2; break;
        case 6: val1_at1=pibPerCapita1; val2_at1=pibPerCapita2; break;
    }

    switch(atributo2) {
        case 1: val1_at2=populacao1; val2_at2=populacao2; break;
        case 2: val1_at2=area1; val2_at2=area2; break;
        case 3: val1_at2=pib1; val2_at2=pib2; break;
        case 4: val1_at2=pontos1; val2_at2=pontos2; break;
        case 5: val1_at2=densidade1; val2_at2=densidade2; break;
        case 6: val1_at2=pibPerCapita1; val2_at2=pibPerCapita2; break;
    }

    // Comparação individual e registro do vencedor
    int res1_c1=0, res1_c2=0, res2_c1=0, res2_c2=0;

    // Atributo 1
    printf("Atributo 1: %.2f x %.2f -> ", val1_at1, val2_at1);
    if (atributo1 == 5) { // menor vence
        if (val1_at1 < val2_at1) { printf("Carta 1 venceu!\n"); res1_c1=1; }
        else if (val2_at1 < val1_at1) { printf("Carta 2 venceu!\n"); res1_c2=1; }
        else printf("Empate!\n");
    } else {
        if (val1_at1 > val2_at1) { printf("Carta 1 venceu!\n"); res1_c1=1; }
        else if (val2_at1 > val1_at1) { printf("Carta 2 venceu!\n"); res1_c2=1; }
        else printf("Empate!\n");
    }

    // Atributo 2
    printf("Atributo 2: %.2f x %.2f -> ", val1_at2, val2_at2);
    if (atributo2 == 5) { // menor vence
        if (val1_at2 < val2_at2) { printf("Carta 1 venceu!\n"); res2_c1=1; }
        else if (val2_at2 < val1_at2) { printf("Carta 2 venceu!\n"); res2_c2=1; }
        else printf("Empate!\n");
    } else {
        if (val1_at2 > val2_at2) { printf("Carta 1 venceu!\n"); res2_c1=1; }
        else if (val2_at2 > val1_at2) { printf("Carta 2 venceu!\n"); res2_c2=1; }
        else printf("Empate!\n");
    }

    // Vencedor da rodada
    if (res1_c1 && res2_c1) printf("Carta 1 venceu a rodada!\n");
    else if (res1_c2 && res2_c2) printf("Carta 2 venceu a rodada!\n");
    else printf("Empate na rodada!\n");

    return 0;
}
