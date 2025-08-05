# include <stdio.h>
// Biblioteca padrão de entrada e saída

int main() {
    char Estado, Estado2;
    char Codigo [5], Codigo2 [5];
    char Cidade [50], Cidade2 [50];
    int População, População2;
    float Area, Area2;
    float PIB, PIB2;
    int Pontos_Turisticos, Pontos_Turisticos2;
    float Densidade_Populacional;
    float PIB_Per_Capita;
    // Declaração das variáveis 

    // Logica de entrada de dados
    printf("Carta 1:\n");
    
    printf("Digite o estado: ");
    scanf(" %c", &Estado);

    printf("Digite o código: ");
    scanf("%s", Codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade);

    printf("Digite a população: ");
    scanf("%d", &População);

    printf("Digite a área: ");
    scanf("%f", &Area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos);

    //

    printf("Carta 2:\n");
    
    printf("Digite o estado: ");
    scanf(" %c", &Estado2);

    printf("Digite o código: ");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade2);

    printf("Digite a população: ");
    scanf("%d", &População2);

    printf("Digite a área: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos2);

    //Logica de exibição de dados do usuario

    printf("\nInformações da carta:\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", População);
    printf("Área: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Pontos_Turisticos);
    printf("Densidade populacional: %.2f\n", População / Area);
    printf("PIB per capita: %.2f\n", PIB / População); 
    //

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", População2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Pontos_Turisticos2);
    printf("Densidade populacional: %.2f\n", População2 / Area2);
    printf("PIB per capita: %.2f\n", PIB2 / População2); 
    // comando para finalizar o programa
    return 0;
}