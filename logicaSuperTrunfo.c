#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa o gerador de números aleatórios
    srand(time(0));

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

    // Menu interativo - Escolher primeiro atributo
    char primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;

    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha a comparação: ");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo) {
        case '1':
            printf("Você escolheu População!\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case '2':
            printf("Você escolheu Área!\n");
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case '3':
            printf("Você escolheu PIB!\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case '4':
            printf("Você escolheu Pontos Turísticos!\n");
            resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
            break;
        case '5':
            printf("Você escolheu Densidade Populacional!\n");
            resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
            break;
        default:
            printf("Opção Inválida\n");
            return 0;
    }

    // Escolher segundo atributo
    printf("\nEscolha o segundo atributo para comparação (deve ser diferente do primeiro):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha a comparação: ");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo) {
        printf("Você escolheu o mesmo atributo novamente! Fim de jogo.\n");
        return 0;
    }

    switch (segundoAtributo) {
        case '1':
            printf("Você escolheu População!\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case '2':
            printf("Você escolheu Área!\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case '3':
            printf("Você escolheu PIB!\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case '4':
            printf("Você escolheu Pontos Turísticos!\n");
            resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
            break;
        case '5':
            printf("Você escolheu Densidade Populacional!\n");
            resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
            break;
        default:
            printf("Opção Inválida\n");
            return 0;
    }

    // Exibição clara do resultado
    printf("\n----- RESULTADO DA COMPARAÇÃO -----\n");
    printf("Comparando as cidades: %s e %s\n", cidade1, cidade2);
    printf("Atributos escolhidos:\n");
    printf("1. %s\n", (primeiroAtributo == '1') ? "População" :
                        (primeiroAtributo == '2') ? "Área" :
                        (primeiroAtributo == '3') ? "PIB" :
                        (primeiroAtributo == '4') ? "Pontos Turísticos" :
                        "Densidade Populacional");

    printf("2. %s\n", (segundoAtributo == '1') ? "População" :
                         (segundoAtributo == '2') ? "Área" :
                         (segundoAtributo == '3') ? "PIB" :
                         (segundoAtributo == '4') ? "Pontos Turísticos" :
                         "Densidade Populacional");

    // Exibir valores dos atributos
    printf("\nValores dos atributos para cada cidade:\n");
    printf("%s:\n", cidade1);
    printf("População: %lu, Área: %.2f, PIB: %.2f, Pontos Turísticos: %d, Densidade Populacional: %.2f\n", populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1);
    printf("%s:\n", cidade2);
    printf("População: %lu, Área: %.2f, PIB: %.2f, Pontos Turísticos: %d, Densidade Populacional: %.2f\n", populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2);

    // Exibir as somas dos atributos
    printf("\nSoma dos atributos de cada carta:\n");
    printf("%s: %.2f\n", cidade1, super_poder1);
    printf("%s: %.2f\n", cidade2, super_poder2);

    // Resultado final
    if (resultado1 && resultado2) {
        printf("\nParabéns, você venceu!\n");
    } else if (resultado1 != resultado2) {
        printf("\nEmpate!\n");
    } else {
        printf("\nInfelizmente, você perdeu!\n");
    }

    return 0;
}
