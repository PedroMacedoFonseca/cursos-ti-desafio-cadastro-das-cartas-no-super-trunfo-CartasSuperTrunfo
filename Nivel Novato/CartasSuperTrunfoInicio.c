#include <stdio.h>

int main() {
       //Declaração das Variáveis
    char estado1, estado2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    //Recebendo as variáveis das cartas

    printf("Cadastro da carta 1:\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %3s", codigoCarta1);
    printf("Digite o nome da cidade (ex: SaoPaulo): ");
    scanf(" %49s", nomeCidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da carta 2:\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %3s", codigoCarta2);
    printf("Digite o nome da cidade (ex: SaoPaulo): ");
    scanf(" %49s", nomeCidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Apresentando as cartas

    printf("\nDados da primeira carta:\n");
    printf("Estado: %c\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n",
           estado1, codigoCarta1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1);

    printf("\nDados da segunda carta:\n");
    printf("Estado: %c\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n",
           estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2);

    return 0;
}

