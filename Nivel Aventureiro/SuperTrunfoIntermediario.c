#include <stdio.h>

int main() {
    //Declaração de todas as variáveis 

    char estado1[30], estado2[30];
    char cidade1[30], cidade2[30];
    char codigo1[10], codigo2[10]; // Alterado para string
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidadePop1, densidadePop2, pibPerCapita1, pibPerCapita2;

    // Recebendo as variáveis das cartas
    printf("\nDigite o estado da cidade 1 (A-H, único): ");
    scanf("%s", estado1);
    printf("Digite o código da carta da cidade 1 (ex: A01): ");
    scanf("%s", codigo1); 
    printf("Digite o nome da cidade 1 (exemplo: SãoPaulo): ");
    scanf("%s", cidade1);
    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontos1);

    printf("\nDigite o estado da cidade 2 (A-H, único): ");
    scanf("%s", estado2);
    printf("Digite o código da carta da cidade 2  (ex: B01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2 (exemplo: RioDeJaneiro): ");
    scanf("%s", cidade2);
    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontos2);

    // Cálculos da densidade populacional e do PIB per capita
    densidadePop1 = populacao1 / area1;
    densidadePop2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição das cartas com seus cálculos
    printf("\n Carta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigo1); 
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePop1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePop2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    return 0;
}
