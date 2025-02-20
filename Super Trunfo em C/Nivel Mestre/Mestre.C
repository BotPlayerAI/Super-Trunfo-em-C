#include <stdio.h>

int main(void) {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];      // Ex: "A01" (3 caracteres + '\0')
    char cidade1[100];    // Suporta nomes com espaços
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;
    
    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;
    
    // Leitura dos dados da Carta 1
    printf("Digite o estado (A-H) da Carta 1: ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);
    
    printf("Digite a população da cidade da Carta 1: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a área (em km²) da cidade da Carta 1: ");
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
    scanf("%lu", &populacao2);
    
    printf("Digite a área (em km²) da cidade da Carta 2: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais) da cidade da Carta 2: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontos2);
    
    // Cálculos dos novos atributos
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    
    // Super Poder: soma de população, área, PIB, pontos turísticos, PIB per capita e o inverso da densidade
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibPerCapita2 + (1.0f / densidade2);
    
    // Comparações entre os atributos das cartas
    // Para população, área, PIB, pontos turísticos, PIB per capita e Super Poder, quem tiver o maior valor vence.
    // Para densidade populacional, vence a carta com o menor valor.
    printf("\nComparação de Cartas:\n");
    
    // População (maior vence)
    printf("População: Carta %s venceu (%d)\n", 
           (populacao1 > populacao2) ? "1" : "2", 
           (populacao1 > populacao2) ? 1 : 0);
    
    // Área (maior vence)
    printf("Área: Carta %s venceu (%d)\n", 
           (area1 > area2) ? "1" : "2", 
           (area1 > area2) ? 1 : 0);
    
    // PIB (maior vence)
    printf("PIB: Carta %s venceu (%d)\n", 
           (pib1 > pib2) ? "1" : "2", 
           (pib1 > pib2) ? 1 : 0);
    
    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: Carta %s venceu (%d)\n", 
           (pontos1 > pontos2) ? "1" : "2", 
           (pontos1 > pontos2) ? 1 : 0);
    
    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %s venceu (%d)\n", 
           (densidade1 < densidade2) ? "1" : "2", 
           (densidade1 < densidade2) ? 1 : 0);
    
    // PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %s venceu (%d)\n", 
           (pibPerCapita1 > pibPerCapita2) ? "1" : "2", 
           (pibPerCapita1 > pibPerCapita2) ? 1 : 0);
    
    // Super Poder (maior vence)
    printf("Super Poder: Carta %s venceu (%d)\n", 
           (superPoder1 > superPoder2) ? "1" : "2", 
           (superPoder1 > superPoder2) ? 1 : 0);
    
    return 0;
}