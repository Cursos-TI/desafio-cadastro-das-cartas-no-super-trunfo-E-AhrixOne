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

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    int atributo1, atributo2;

    // Entrada dos dados
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (sigla): "); scanf("%s", estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf("%s", cidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos turísticos: "); scanf("%d", &pontos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (sigla): "); scanf("%s", estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf("%s", cidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos turísticos: "); scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Escolha do primeiro atributo
    printf("\n=== Escolha o primeiro atributo ===\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n6 - PIB per capita\n");
    printf("Opção: "); scanf("%d", &atributo1);

    // Escolha do segundo atributo
    printf("\n=== Escolha o segundo atributo (diferente do primeiro) ===\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n6 - PIB per capita\n");
    printf("Opção: "); scanf("%d", &atributo2);

    // Verifica se o segundo atributo é igual ao primeiro
    if (atributo2 == atributo1) {
        printf("Erro: segundo atributo não pode ser igual ao primeiro.\n");
        return 0; // encerra o programa se for igual
    }

    // Comparação e soma
    float valor1_at1, valor1_at2, valor2_at1, valor2_at2;

    switch(atributo1) {
        case 1: valor1_at1 = populacao1; valor2_at1 = populacao2; break;
        case 2: valor1_at1 = area1; valor2_at1 = area2; break;
        case 3: valor1_at1 = pib1; valor2_at1 = pib2; break;
        case 4: valor1_at1 = pontos1; valor2_at1 = pontos2; break;
        case 5: valor1_at1 = densidade1; valor2_at1 = densidade2; break;
        case 6: valor1_at1 = pibPerCapita1; valor2_at1 = pibPerCapita2; break;
    }

    switch(atributo2) {
        case 1: valor1_at2 = populacao1; valor2_at2 = populacao2; break;
        case 2: valor1_at2 = area1; valor2_at2 = area2; break;
        case 3: valor1_at2 = pib1; valor2_at2 = pib2; break;
        case 4: valor1_at2 = pontos1; valor2_at2 = pontos2; break;
        case 5: valor1_at2 = densidade1; valor2_at2 = densidade2; break;
        case 6: valor1_at2 = pibPerCapita1; valor2_at2 = pibPerCapita2; break;
    }

    printf("\n=== Comparação de cartas ===\n");

    printf("Atributo 1: %.2f x %.2f -> %s\n", valor1_at1, valor2_at1,
        (atributo1 == 5) ? (valor1_at1 < valor2_at1 ? "Carta 1 venceu!" : (valor2_at1 < valor1_at1 ? "Carta 2 venceu!" : "Empate!"))
                          : (valor1_at1 > valor2_at1 ? "Carta 1 venceu!" : (valor2_at1 > valor1_at1 ? "Carta 2 venceu!" : "Empate!"))
    );

    printf("Atributo 2: %.2f x %.2f -> %s\n", valor1_at2, valor2_at2,
        (atributo2 == 5) ? (valor1_at2 < valor2_at2 ? "Carta 1 venceu!" : (valor2_at2 < valor1_at2 ? "Carta 2 venceu!" : "Empate!"))
                          : (valor1_at2 > valor2_at2 ? "Carta 1 venceu!" : (valor2_at2 > valor1_at2 ? "Carta 2 venceu!" : "Empate!"))
    );

    float soma1 = valor1_at1 + valor1_at2;
    float soma2 = valor2_at1 + valor2_at2;

    printf("Soma dos atributos: Carta 1 = %.2f, Carta 2 = %.2f\n", soma1, soma2);
    printf("%s\n", (soma1 > soma2) ? "Carta 1 venceu a rodada!" : (soma2 > soma1 ? "Carta 2 venceu a rodada!" : "Empate!"));

    return 0;
}
