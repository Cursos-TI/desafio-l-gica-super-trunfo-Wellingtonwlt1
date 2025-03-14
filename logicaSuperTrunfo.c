#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código agora inclui um menu interativo e lógica de comparação mais complexa com base no atributo escolhido pelo jogador.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Primeira carta
    char estado1, codigo1[5], cidade1[50];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;

    // Segunda carta
    char estado2, codigo2[5], cidade2[50];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;

    // Cadastro das Cartas:
    // Primeira carta - Solicitar dados para a primeira cidade
    printf("Informe os dados da primeira carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Permite ler uma linha com espaços
    printf("População: ");
    scanf("%lu", &populacao1); // População agora é unsigned long int
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("Densidade populacional (em hab/Km²): ");
    scanf("%f", &densidade_populacional1);
    printf("PIB per capita (Reais): ");
    scanf("%f", &pib_per_capita1);

    // Cálculos para a primeira carta
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

    // Segunda carta - Solicitar dados para a segunda cidade
    printf("\nInforme os dados da segunda carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2); // Permite ler uma linha com espaços
    printf("População: ");
    scanf("%lu", &populacao2); // População agora é unsigned long int
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("Densidade populacional (em hab/Km²): ");
    scanf("%f", &densidade_populacional2);
    printf("PIB per capita (Reais): ");
    scanf("%f", &pib_per_capita2);

    // Cálculos para a segunda carta
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Menu interativo
    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha uma opção (1-5): ");
    scanf("%d", &opcao);

    // Comparação de acordo com a escolha do usuário
    switch (opcao) {
        case 1: // Comparação de População
            printf("\nComparação de População:\n");
            printf("Carta 1 - %s (%c): População: %lu\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%c): População: %lu\n", cidade2, estado2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate na comparação de população!\n");
            }
            break;

        case 2: // Comparação de Área
            printf("\nComparação de Área (em km²):\n");
            printf("Carta 1 - %s (%c): Área: %.2f km²\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%c): Área: %.2f km²\n", cidade2, estado2, area2);
            
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate na comparação de área!\n");
            }
            break;

        case 3: // Comparação de PIB
            printf("\nComparação de PIB (em bilhões de reais):\n");
            printf("Carta 1 - %s (%c): PIB: %.2f bilhões\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%c): PIB: %.2f bilhões\n", cidade2, estado2, pib2);
            
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate na comparação de PIB!\n");
            }
            break;

        case 4: // Comparação de Pontos Turísticos
            printf("\nComparação de Pontos Turísticos:\n");
            printf("Carta 1 - %s (%c): Pontos Turísticos: %d\n", cidade1, estado1, pontos_turisticos1);
            printf("Carta 2 - %s (%c): Pontos Turísticos: %d\n", cidade2, estado2, pontos_turisticos2);
            
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate na comparação de pontos turísticos!\n");
            }
            break;

        case 5: // Comparação de Densidade Populacional
            printf("\nComparação de Densidade Populacional (em hab/km²):\n");
            printf("Carta 1 - %s (%c): Densidade: %.2f hab/km²\n", cidade1, estado1, densidade_populacional1);
            printf("Carta 2 - %s (%c): Densidade: %.2f hab/km²\n", cidade2, estado2, densidade_populacional2);
            
            if (densidade_populacional1 < densidade_populacional2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate na comparação de densidade populacional!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha um número entre 1 e 5.\n");
    }

    return 0;
}