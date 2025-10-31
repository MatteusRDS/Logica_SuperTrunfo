#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    printf("Desafio Super Trunfo - Países \n");
    //Declaração de Variáveis Para Carta 1
    char estado1, codigo1[10],nome1[50];
    int populacao1, pontos1;
    float area1, pib1;

    //Declaração de Variáveis Para Carta 2
    char estado2, codigo2[10],nome2[50];
    int populacao2, pontos2;
    float area2, pib2;

    //Coletando Informações Para Primeira Carta
    printf("Digite as Informações da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código Da Carta: ");
    scanf(" %s", codigo1);
    
    
    printf("Nome Da Cidade: \n");
    scanf(" %[^\n]",nome1);
    
    printf("População: ");
    scanf(" %d",&populacao1);
    
    printf("Área (Em Km²) \n");
    scanf(" %f",&area1);
    
    printf("PIB (Em Bilhões de Reais): \n");
    scanf(" %f",&pib1);
    
    printf("Número de Pontos Turísticos: \n");
    scanf(" %d",&pontos1);
    
    
    
    
    
    
    //Coletando Informações Para Segunda Carta
    printf("Digite as Informações da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    
    
    printf("Código Da Carta: ");
    scanf(" %s",codigo2);

    printf("Nome Da Cidade: \n");
    scanf(" %[^\n]",nome2);

    printf("População: ");
    scanf(" %d",&populacao2);

    printf("Área (Em Km²) \n");
    scanf(" %f",&area2);

    printf("PIB (Em Bilhões de Reais): \n");
    scanf(" %f",&pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf(" %d",&pontos2);

    //Exibindo as Informações Da Carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código Da Carta: %s \n", codigo1);
    printf("Nome Da Cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontos1);
    
    
    //Exibindo as Informações Da Carta 2
    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código Da Carta: %s \n", codigo2);
    printf("Nome Da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos2);





    return 0;
}