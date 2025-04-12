#include <stdio.h>

int main() {

    //Variáveis para a carta 1
    char estado1;
    char codigoCarta1[3];
    char cidade1[30];
    int populacao1;
    float areaKM1;
    float pibCidade1;
    int quantTur1;
    //Variáveis para a carta 2
    char estado2;
    char codigoCarta2[3];
    char cidade2[30];
    int populacao2;
    float areaKM2;
    float pibCidade2;
    int quantTur2;

    //Buscando os dados com o usuário
    //Carta1
    printf("----------------------------------- \n");
    printf("Digite os dados da primeira carta \n");
    printf("----------------------------------- \n");
    printf("Digite a letra do Estado (entre A a H): ");
    scanf(" %c", &estado1);

    printf("O código da carta (entre 01 a 04):");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade:");
    scanf("%s", cidade1);

    printf("Digite a população:");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²):");
    scanf("%f", &areaKM1);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pibCidade1);

    printf("Digite a quantidade de pontos turísticos:");
    scanf("%d", &quantTur1);

    //Carta1
    printf("----------------------------------- \n");
    printf("Digite os dados da segunda carta \n");
    printf("----------------------------------- \n");
    printf("Digite a letra do Estado (entre A a H):");
    scanf(" %c", &estado2);

    printf("O código da carta (entre 01 a 04):");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade:");
    scanf("%s", cidade2);

    printf("Digite a população:");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²):");
    scanf(" %f", &areaKM2);
    
    printf("Digite o PIB da cidade:");
    scanf(" %f", &pibCidade2);

    printf("Digite a quantidade de pontos turísticos:");
    scanf("%d", &quantTur2);

    printf("\n");

    // Imprimindo as cartas registradas
    //Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigoCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areaKM1);
    printf("PIB: %.2f bilhões de reais\n", pibCidade1);
    printf("Número de Pontos Turísticos: %d \n\n\n", quantTur1);
    //Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigoCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Área: %.2f km²\n", areaKM2);
    printf("PIB: %.2f bilhões de reais\n", pibCidade2);    
    printf("Número de Pontos Turísticos: %d", quantTur2);

    return 0;

}