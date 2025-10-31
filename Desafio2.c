#include <stdio.h>

int main() {

    printf("Desafio Super Trunfo - Países \n\n");

    // Declaração de variáveis da Carta 1
    char estado1, codigo1[10], nome1[50];
    int populacao1, pontos1;
    float area1, pib1;

    // Declaração de variáveis da Carta 2
    char estado2, codigo2[10], nome2[50];
    int populacao2, pontos2;
    float area2, pib2;

    // === Coleta de informações da Carta 1 ===
    printf("Digite as informações da Carta 1:\n");
    printf("Estado (letra): ");
    scanf(" %c", &estado1);

    printf("Código da Carta: ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em Km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // === Coleta de informações da Carta 2 ===
    printf("\nDigite as informações da Carta 2:\n");
    printf("Estado (letra): ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em Km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // === Cálculos adicionais ===
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; // convertendo PIB pra reais
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // === Exibindo informações ===
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // === Comparação de atributo ===
    // Você pode mudar o atributo que quer comparar aqui:
    // Opções: populacao, area, pib, densidadePopulacional, pibPerCapita
    printf("\n=== Comparação de Cartas (Atributo: PIB per Capita) ===\n");

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 (%s) venceu com PIB per Capita de %.2f reais!\n", nome1, pibPerCapita1);
        printf("Carta 2 (%s): %.2f reais\n", nome2, pibPerCapita2);
    } else if (pibPerCapita1 < pibPerCapita2) {
        printf("Carta 2 (%s) venceu com PIB per Capita de %.2f reais!\n", nome2, pibPerCapita2);
        printf("Carta 1 (%s): %.2f reais\n", nome1, pibPerCapita1);
    } else {
        printf("Empate! As duas cidades possuem o mesmo PIB per Capita.\n");
    }

    return 0;
}
