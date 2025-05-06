#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];        // Exemplo: "A01"
    char cidade1[100];       // Nome da cidade
    int habitantes1;        // População
    float tamanho1;         // Área em km²
    float pib1;             // PIB em bilhões
    int turismo1;           // Pontos turísticos

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    int habitantes2;
    float tamanho2;
    float pib2;
    int turismo2;

    // Apresentação do programa
    printf("\n=================================\n");
    printf("   SUPER TRUNFO DE CIDADES BRASIL\n");
    printf("=================================\n\n");
    printf("Vamos criar suas cartas do jogo!\n\n");

    /***************************/
    /*  CADASTRO DA PRIMEIRA CARTA  */
    /***************************/
    printf(">>> PRIMEIRA CARTA <<<\n");

    // Estado (A-H)
    printf("\nDigite a letra do estado (A-H):\n");
    printf("A - Amazonas\nB - Bahia\nC - Ceará\nD - Distrito Federal\n");
    printf("E - Espírito Santo\nF - Maranhão\nG - Goiás\nH - São Paulo\n");
    printf("Sua escolha: ");
    scanf(" %c", &estado1);

    // Código da carta
    printf("\nDigite o codigo da carta (ex: %c01): ", estado1);
    scanf("%s", codigo1);

    // Nome da cidade
    printf("\nDigite o nome da cidade: ");
    scanf("%s", cidade1);

    // População
    printf("\nDigite o numero de habitantes: ");
    scanf("%d", &habitantes1);

    // Área
    printf("\nDigite a area da cidade (km²): ");
    scanf("%f", &tamanho1);

    // PIB
    printf("\nDigite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    // Pontos turísticos
    printf("\nDigite o numero de pontos turisticos: ");
    scanf("%d", &turismo1);

    /***************************/
    /*  CADASTRO DA SEGUNDA CARTA  */
    /***************************/
    printf("\n>>> SEGUNDA CARTA <<<\n");

    // Estado (A-H)
    printf("\nDigite a letra do estado (A-H): ");
    scanf(" %c", &estado2);

    // Código da carta
    printf("\nDigite o codigo da carta (ex: %c02): ", estado2);
    scanf("%s", codigo2);

    // Nome da cidade
    printf("\nDigite o nome da cidade: ");
    scanf("%s", cidade2);

    // População
    printf("\nDigite o numero de habitantes: ");
    scanf("%d", &habitantes2);

    // Área
    printf("\nDigite a area da cidade (km²): ");
    scanf("%f", &tamanho2);

    // PIB
    printf("\nDigite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    // Pontos turísticos
    printf("\nDigite o numero de pontos turisticos: ");
    scanf("%d", &turismo2);

    /***************************/
    /*  MOSTRANDO AS CARTAS CRIADAS  */
    /***************************/
    printf("\n=== SUAS CARTAS PRONTAS ===\n");

    // Primeira Carta
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Habitantes: %d\n", habitantes1);
    printf("Area: %.2f km²\n", tamanho1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", turismo1);

    // Segunda Carta
    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Habitantes: %d\n", habitantes2);
    printf("Area: %.2f km²\n", tamanho2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", turismo2);

    printf("\nDivirta-se jogando!\n");

    //Commit é complicado em...

    return 0;
}