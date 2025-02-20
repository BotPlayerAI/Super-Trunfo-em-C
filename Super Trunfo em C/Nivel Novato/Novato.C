#include <stdio.h>

int main(void) {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];       // Ex: "A01" (3 caracteres + '\0')
    char cidade1[100];     // Suporta nomes com espaços
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    
    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    
    // Leitura dos dados da Carta 1
    printf("Digite o estado (A-H) da Carta 1: ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);
    
    printf("Digite a população da cidade da Carta 1: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (km²) da cidade da Carta 1: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais) da cidade da Carta 1: ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontos1);
    
    // Leitura dos dados da Carta 2
    printf("\nDigite o estado (A-H) da Carta 2: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a população da cidade da Carta 2: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (km²) da cidade da Carta 2: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais) da cidade da Carta 2: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontos2);
    
    // Exibição dos dados cadastrados para a Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    
    // Exibição dos dados cadastrados para a Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    
    return 0;
}