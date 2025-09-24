/**
 * @file super_trunfo.c
 * @brief Programa para cadastrar e exibir duas cartas do jogo Super Trunfo de Países.
 * @details Este programa solicita ao usuário os dados de duas cartas, armazena em variáveis
 * e depois exibe as informações de forma organizada na tela.
 * Desafio Nível Novato.
 */

#include <stdio.h> // Biblioteca padrão para funções de Entrada e Saída (printf, scanf)

int main() {
    // --- DECLARAÇÃO DE VARIÁVEIS ---
    // Nomes de variáveis claros para facilitar a leitura.

    // Variáveis para a Carta 1
    char estado1;
    char codigo1[5];      // Array de char para armazenar strings como "A01"
    char nomeCidade1[50]; // Um tamanho razoável para nomes de cidades
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- ENTRADA DE DADOS - CARTA 1 ---
    // Instruções claras para o usuário.
    printf("--- Cadastro da Primeira Carta ---\n");

    printf("Digite o estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1); // O espaço antes de %c limpa o buffer de entrada, evitando erros com a próxima leitura.

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1); // Para strings (char[]), scanf não precisa do '&'

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    
    printf("\n"); // Adiciona uma linha em branco para melhor organização

    // --- ENTRADA DE DADOS - CARTA 2 ---
    printf("--- Cadastro da Segunda Carta ---\n");

    printf("Digite o estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- SAÍDA DE DADOS ---
    // Exibição dos dados formatados conforme o exemplo.
    printf("\n\n--- Cartas Cadastradas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1); // %.2f para exibir o float com 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    // Indica que o programa foi executado com sucesso.
    return 0;
}
