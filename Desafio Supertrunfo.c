#include <stdio.h>

int main()
{
    // Variaveis para carta 1
    int população1, pontosTuristicos1, resultadoComparacao1;
    float area1, pib1, densipop1, pibcapita1, superpoder1;
    char estado1;
    char nomeCidade1[30];
    char codigo1[10];
    // Variaveis para carta 2
    int população2, pontosTuristicos2;
    float area2, pib2, densipop2, pibcapita2, superpoder2;
    char estado2;
    char nomeCidade2[30];
    char codigo2[10];

    printf("=============================\n");
    printf("**** Cadastre as Cartas ****\n");
    printf("=============================\n\n");

    // Leitura de dados da carta 1
    printf("Cadastro Carta 1 :\n\n");
    // Lê dados do estado da carta 1
    printf("Qual o estado:");
    scanf(" %c", &estado1);
    // Lê dados do codigo da carta 1
    printf("Codigo do Estado:");
    scanf("%s", &codigo1);
    // Lê dados do nome da cidade da carta 1
    printf("Nome da cidade:");
    scanf("%s", nomeCidade1);
    // Lê dados da populaçao da carta 1
    printf("Tamanho da populaçao:");
    scanf("%d", &população1);
    // Lê dados da área da carta 1
    printf("Tamanho da área em (km²):");
    scanf("%f", &area1);
    // calcula a densidade da carta 1
    densipop1 = (float)população1 / area1;
    // Lê dados do pib da carta
    printf("Qual o pib (Em milhoes,bilhões):");
    scanf("%f", &pib1);
    // calcula o Pib per capita da carta1
    pibcapita1 = pib1 / (float)população1;

    // Lê dados dos pontos turisticos da carta 1
    printf("Quantos pontos turisticos:");
    scanf("%d", &pontosTuristicos1);
    printf("\n\n");

    // Calcula o super poder da carta 1
    superpoder1 = (float)(população1 + area1 + pib1 + pibcapita1 + densipop1 + pontosTuristicos1);

    // Leitura de dados da carta 2
    printf("Cadastro Carta 2 :\n\n");
    // Lê dados do estado da carta 2
    printf("Qual o Estado:");
    scanf(" %c", &estado2);
    // Lê dados do codigo da carta 2
    printf("Codigo do Estado:");
    scanf(" %s", &codigo2);
    // Lê dados do nome da cidade da carta 2
    printf("Nome da cidade:");
    scanf("%s", nomeCidade2);
    // Lê dados da populaçao da carta 2
    printf("Tamanho da populaçao:");
    scanf("%d", &população2);
    // Lê dados da área da carta 2
    printf("Tamanho da área em (km²):");
    scanf("%f", &area2);
    // calcula a densidade da carta 2
    densipop2 = (float)população2 / area2;
    // Lê dados do pib da carta 2
    printf("Qual o pib (Em milhoes,bilhões):");
    scanf("%f", &pib2);
    // calcula o Pib per capita da carta1
    pibcapita2 = pib2 / (float)população2;

    // Lê dados dos pontos turisticos da carta 2
    printf("Quantos pontos turisticos:");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Calcula o super poder da carta 2
    superpoder2 = (float)(população2 + area2 + pib2 + pibcapita2 + densipop2 + pontosTuristicos2);
    printf("=======================================\n");
    printf("=======================================\n\n");

    // Mostra os dados da primeira carta cadastradas
    printf("***** As cartas cadastradas são: *****\n\n");

    printf("Carta 1\n");
    printf("Estado:%c\n", estado1);
    printf("Código:%s\n", codigo1);
    printf("Nome da cidade:%s\n", nomeCidade1);
    printf("População:%d habitantes\n", população1);
    printf("Área:%.2f km²\n", area1);
    printf("Densidade Populacional: %f\n", densipop1);
    printf("PIB:%.2f bilhões de reais\n", pib1);
    printf("PIB per capita: %f\n", pibcapita1);
    printf("Número de pontos turisticos:%d\n", pontosTuristicos1);
    printf("\n\n");

    // Mostra dados da segunda carta cadastrada
    printf("Carta 2\n");
    printf("Estado:%c\n", estado2);
    printf("Código:%s\n", codigo2);
    printf("Nome da cidade:%s\n", nomeCidade2);
    printf("População:%d habitantes\n", população2);
    printf("Área:%.2f km²\n", area2);
    printf("Densidade Populacional: %f\n", densipop2);
    printf("PIB:%.2f bilhões de reais\n", pib2);
    printf("PIB per capita: %f\n", pibcapita2);
    printf("Número de pontos turisticos:%d\n\n", pontosTuristicos2);

    // COMPARAÇÃO DOS ATRIUTOS
    printf("=============================================\n");
    printf("\n***** Comparação dos Atributos *****\n\n");
    printf("=============================================\n\n");

    // População
    resultadoComparacao1 = (população1 > população2) ? 1 : 0;
    printf("População - Vencedor: Carta %d (Resultado: %d)\n", resultadoComparacao1 ? 1 : 2, resultadoComparacao1);

    // Área
    resultadoComparacao1 = (area1 > area2) ? 1 : 0;
    printf("Área - Vencedor: Carta %d (Resultado: %d)\n", resultadoComparacao1 ? 1 : 2, resultadoComparacao1);

    // PIB
    resultadoComparacao1 = (pib1 > pib2) ? 1 : 0;
    printf("PIB - Vencedor: Carta %d (Resultado: %d)\n", resultadoComparacao1 ? 1 : 2, resultadoComparacao1);

    // PIB per capita
    resultadoComparacao1 = (pibcapita1 > pibcapita2) ? 1 : 0;
    printf("PIB per capita - Vencedor: Carta %d (Resultado: %d)\n", resultadoComparacao1 ? 1 : 2, resultadoComparacao1);

    // Densidade populacional (quanto menor, melhor)
    resultadoComparacao1 = (densipop1 < densipop2) ? 1 : 0;
    printf("Densidade populacional (inverso) - Vencedor: Carta %d (Resultado: %d)\n", resultadoComparacao1 ? 1 : 2, resultadoComparacao1);

    // Superpoder
    resultadoComparacao1 = (superpoder1 > superpoder2) ? 1 : 0;
    printf("Superpoder - Vencedor: Carta %d (Resultado: %d)\n", resultadoComparacao1 ? 1 : 2, resultadoComparacao1);

    return 0;
}
