#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    float area1, pib1, area2, pib2;
    char cidade1[50], estado1[50], codigoCidade1[50], cidade2[50], estado2[50], codigoCidade2[50];

    // Imprime a lista de referência para os códigos dos estados e cidades para consulta;
    printf("ESTADO - CIDADE\n");
    printf("\n"); // Espaço entre as linhas;
    printf("RJ (A) - Rio de Janeiro (01) | Niteroi (02)      | Caxias (03)     | Marica (04)\n");
    printf("SP (B) - Sao Paulo (01)      | Osasco (02)       | Taubate (03)    | Tremembe (04)\n");
    printf("MG (C) - Belo Horizonte (01) | Juiz de Fora (02) | Leopoldina (03) | Ipatinga (04)\n");
    printf("PR (D) - Curitiba (01)       | Maringa (02)      | Guaira (03)     | Paranagua (04)\n");
    printf("SC (E) - Florianopolis (01)  | Brusque (02)      | Criciuma (03)   | Joinvile (04)\n");
    printf("MT (F) - Cuiaba (01)         | Rondonopolis (02) | Sinop (03)      | Diamantino (04)\n");
    printf("CE (G) - Fortaleza (01)      | Crato (02)        | Sobral (03)     | Crateus (04)\n");
    printf("PA (H) - Belem (01)          | Altamira (02)     | Maraba (03)     | Ananindeua (04)\n");

    // Indica que os dados a serem inseridos são da carta 1 e pula linhas de espaço para formatação;
    printf("\n");
    printf("CARTA 1");
    printf("\n");

    // Solicita ao usuário a entrada do código do estado da carta 1;
    printf("Digite o código do Estado:\n");
    scanf("%s", estado1);

    // Solicita ao usuário a entrada do código da cidade da carta 1;
    printf("Digite o código da cidade:\n");
    scanf("%s", codigoCidade1);

    // Solicita ao usuário a entrada do nome da cidade da carta 1;
    getchar();
    printf("Digite o nome da Cidade (sem acentuação):\n");
    fgets(cidade1, 50, stdin);

    // Solicita ao usuário a entrada do número da populaçãoo da carta 1;
    printf("Digite o número da população:\n");
    scanf("%d", &populacao1);

    // Solicita ao usuário a entrada da área (em km²) da carta 1;
    printf("Digite a área (em km²):\n");
    scanf("%f", &area1);

    // Solicita ao usuário a entrada do PIB (em R$) da carta 1;
    printf("Digite o PIB (em R$):\n");
    scanf("%f", &pib1);

    // Solicita ao usuário a entrada do número de pontos turísticos da carta 1;
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // Indica que os dados a serem inseridos são da carta 2 e pula linhas de espaço para formatação;
    printf("\n"); 
    printf("CARTA 2"); 
    printf("\n"); 

    // Solicita ao usuário a entrada do código do estado da carta 2;
    printf("Digite o código do Estado:\n");
    scanf("%s", estado2);

    // Solicita ao usuário a entrada do código da cidade da carta 2;
    printf("Digite o código da cidade:\n");
    scanf("%s", codigoCidade2);

    // Solicita ao usuário a entrada do nome da cidade da carta 2;
    getchar();
    printf("Digite o nome da Cidade (sem acentuação):\n");
    fgets(cidade2, 50, stdin);

    // Solicita ao usuário a entrada do número da populaçãoo da carta 2;
    printf("Digite o número da população:\n");
    scanf("%d", &populacao2);

    // Solicita ao usuário a entrada da área (em km²) da carta 2;
    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);

    // Solicita ao usuário a entrada do PIB (em R$) da carta 2;
    printf("Digite o PIB (em R$):\n");
    scanf("%f", &pib2);

    // Solicita ao usuário a entrada do número de pontos turísticos da carta 2;
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    printf("\n"); // Simples espaço entre as linhas;

    // Imprime os valores da carta 1 informados pelo usuário, em uma lista estruturada;
    printf("CARTA 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigoCidade1);
    printf("Nome da cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n"); // Simples espaço entre as linhas;

    // Imprime os valores da carta 2 informados pelo usuário, em uma lista estruturada;
    printf("CARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigoCidade2);
    printf("Nome da cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
