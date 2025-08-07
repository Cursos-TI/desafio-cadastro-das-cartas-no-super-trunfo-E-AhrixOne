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

    // 
    
    float Densidade1, Densidade2;
    float PIBperCapita1, PIBperCapita2;
    float SuperPoder1, SuperPoder2;

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
    printf("Carta 2:\n");
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

    SuperPoder1 = (float)Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PIBperCapita1 + (1 / Densidade1);
    SuperPoder2 = (float)Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBperCapita2 + (1 / Densidade2);

    // Exibição dos dados das cartas
    printf("\nInformações da carta:\n");

    //

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", Densidade1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    //

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", Densidade2);
    printf("PIB per Capita: %.2f\n", PIBperCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", PontosTuristicos1 > PontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade1 < Densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBperCapita1 > PIBperCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);

    return 0;
}
