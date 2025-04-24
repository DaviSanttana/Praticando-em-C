#include <stdio.h>

int main()
{
    printf("Desafio Super Trunfo\n");
    printf("======================\n");

    // Variaveis para carta 1
    int população1, pontosTuristicos1;
    float area1, pib1;
    char estado1;
    char nomeCidade1[30];
    char codigo1[5];
    // Variaveis para carta 2
    int população2, pontosTuristicos2;
    float area2, pib2;
    char estado2;
    char nomeCidade2[30];
    char codigo2[5];

    // Leitura de dados da carta 1
    printf("Cadastro Carta 1 :\n\n");
    // Lê dados do estado da carta 1
    printf("Qual o estado:");
    scanf("%c", &estado1);
    // Lê dados do codigo da carta 1
    printf("Codigo do Estado:");
    scanf("%s", codigo1);
    // Lê dados do nome da cidade da carta 1
    printf("Nome da cidade:");
    scanf("%s", nomeCidade1);
    // Lê dados da populaçao da carta 1
    printf("Tamanho da populaçao:");
    scanf("%d", &população1);
    // Lê dados da área da carta 1
    printf("Tamanho da área em (km²):");
    scanf("%f", &area1);
    // Lê dados do pib da carta
    printf("Qual o pib (Em milhoes,bilhões):");
    scanf("%f", &pib1);
    // Lê dados dos pontos turisticos da carta 1
    printf("Quantos pontos turisticos:");
    scanf("%d", &pontosTuristicos1);
    printf("\n\n");

    // Leitura de dados da carta 2
    printf("Cadastro Carta 2 :\n\n");
    // Lê dados do estado da carta 2
    printf("Qual o Estado:");
    scanf(" %c", &estado2);
    // Lê dados do codigo da carta 2
    printf("Codigo do Estado:");
    scanf("%s", codigo2);
    // Lê dados do nome da cidade da carta 2
    printf("Nome da cidade:");
    scanf("%s", nomeCidade2);
    // Lê dados da populaçao da carta 2
    printf("Tamanho da populaçao:");
    scanf("%d", &população2);
    // Lê dados da área da carta 2
    printf("Tamanho da área em (km²):");
    scanf("%f", &area2);
    // Lê dados do pib da carta 2
    printf("Qual o pib (Em milhoes,bilhões):");
    scanf("%f", &pib2);
    // Lê dados dos pontos turisticos da carta 2
    printf("Quantos pontos turisticos:");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Mostra os dados da primeira carta cadastradas
    printf("As cartas cadastradas são:\n\n");

    printf("Carta 1\n");
    printf("Estado:%c\n", estado1);
    printf("Código:%s\n", codigo1);
    printf("Nome da cidade:%s\n", nomeCidade1);
    printf("População:%d habitantes\n", população1);
    printf("Área:%.2f km²\n", area1);
    printf("PIB:%.2f bilhões de reais\n", pib1);
    printf("Número de pontos turisticos:%d\n", pontosTuristicos1);
    printf("\n");

    // Mostra dados da segunda carta cadastrada
    printf("Carta 2\n");
    printf("Estado:%c\n", estado2);
    printf("Código:%s\n", codigo2);
    printf("Nome da cidade:%s\n", nomeCidade2);
    printf("População:%d habitantes\n", população2);
    printf("Área:%.2f km²\n", area2);
    printf("PIB:%.2f bilhões de reais\n", pib2);
    printf("Número de pontos turisticos:%d\n", pontosTuristicos2);

    return 0;
}
