#include <stdio.h>

int main() {
    // Declaração de todas as variáveis, calculos e superPoder
    char estado1[30], estado2[30];
    char cidade1[30], cidade2[30];
    char codigo1[10], codigo2[10];
    unsigned long int populacao1, populacao2;  
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidadePop1, densidadePop2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Recebendo as variáveis das cartas
    printf("\nDigite o estado da cidade 1 (A-H, único): ");
    scanf("%s", estado1);
    printf("Digite o código da carta da cidade 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade 1 (exemplo: SaoPaulo): ");
    scanf("%s", cidade1);
    printf("Digite a população da cidade 1: ");
    scanf("%lu", &populacao1);  
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontos1);

    printf("\nDigite o estado da cidade 2 (A-H, único): ");
    scanf("%s", estado2);
    printf("Digite o código da carta da cidade 2 (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2 (exemplo: RioDeJaneiro): ");
    scanf("%s", cidade2);
    printf("Digite a população da cidade 2: ");
    scanf("%lu", &populacao2);  
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

    // Cálculo do Super Poder (soma dos atributos)
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + (1.0f / densidadePop1) + pibPerCapita1;
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + (1.0f / densidadePop2) + pibPerCapita2;

    // Comparações e exibição dos resultados
    printf("\nComparação de Cartas:\n");

    printf("População: ");
    if (populacao1 > populacao2)
        printf("Carta 1 venceu!\n");
    else
        printf("Carta 2 venceu!\n");

    printf("Área: ");
    if (area1 > area2)
        printf("Carta 1 venceu!\n");
    else
        printf("Carta 2 venceu!\n");

    printf("PIB: ");
    if (pib1 > pib2)
        printf("Carta 1 venceu!\n");
    else
        printf("Carta 2 venceu!\n");

    printf("Pontos Turísticos: ");
    if (pontos1 > pontos2)
        printf("Carta 1 venceu!\n");
    else
        printf("Carta 2 venceu!\n");

    printf("Densidade Populacional: ");
    if (densidadePop1 < densidadePop2)
        printf("Carta 1 venceu!\n");  
    else
        printf("Carta 2 venceu!\n");

    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2)
        printf("Carta 1 venceu!\n");
    else
        printf("Carta 2 venceu!\n");

    printf("Super Poder: ");
    if (superPoder1 > superPoder2)
        printf("Carta 1 venceu!\n");
    else
        printf("Carta 2 venceu!\n");

    return 0;
}
