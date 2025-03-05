#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a Carta 1
    char codigoPais1;
    int codigoCarta1;
    char nomeCidade1[50];
    float populacao1, area1, PIB1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char codigoPais2;
    int codigoCarta2;
    char nomeCidade2[50];
    float populacao2, area2, PIB2;
    int pontosTuristicos2;

    // Variáveis de operadores relacionais
    int resultadopopulacao, resultadopopulacao2, resultadoarea, resultadoarea2, resultadopib, resultadopib2, resultadopontosturisticos, resultadopontosturisticos2;
    int resultadodensidade, resultadodensidade2, resultadorenpercapita, resultadorendapercapita2, resultadosuperpoder, resultadosuperpoder2;

    // Cadastro da Carta 1
    printf("Carta A01\n");
    printf("Digite a letra inicial do País do qual a sua cidade pertence: ");
    scanf(" %c", &codigoPais1);

    printf("Digite o número da sua carta de 1 até 4: ");
    scanf("%d", &codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população da cidade (em milhões): ");
    scanf("%f", &populacao1);

    printf("Digite a área total da cidade em Km2: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade em U$ (em bilhões): ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\nCarta A02\n");
    printf("Digite a letra inicial do País do qual a sua cidade pertence: ");
    scanf(" %c", &codigoPais2);

    printf("Digite o número da sua carta de 1 até 4: ");
    scanf("%d", &codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população da cidade (em milhões): ");
    scanf("%f", &populacao2);

    printf("Digite a área total da cidade em Km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em U$ (em bilhões): ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a Carta 1
    float densidadepop1 = populacao1 / area1;
    float rendapercapita1 = PIB1 / populacao1;
    float superpoder1 = populacao1 + area1 + densidadepop1 + rendapercapita1 + PIB1;

    // Cálculos para a Carta 2
    float densidadepop2 = populacao2 / area2;
    float rendapercapita2 = PIB2 / populacao2;
    float superpoder2 = populacao2 + area2 + densidadepop2 + rendapercapita2 + PIB2;

    // Exibição dos Dados das Cartas
    printf("\n-------------------------------------------------------------------------------\n");
    printf("Carta A01\n");
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("A população da cidade é: %.2f milhões\n", populacao1);
    printf("A área da cidade é de: %.2f Km2\n", area1);
    printf("O PIB da cidade é de: U$ %.2f bilhões\n", PIB1);
    printf("Total de pontos turísticos: %d\n", pontosTuristicos1);
    printf("A densidade populacional é: %.2f\n", densidadepop1);
    printf("A renda per capita é: %.2f\n", rendapercapita1);
    printf("O superpoder da cidade é: %.2f\n", superpoder1);

    printf("\n-------------------------------------------------------------------------------\n");
    printf("Carta A02\n");
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("A população da cidade é: %.2f milhões\n", populacao2);
    printf("A área da cidade é de: %.2f Km2\n", area2);
    printf("O PIB da cidade é de: U$ %.2f bilhões\n", PIB2);
    printf("Total de pontos turísticos: %d\n", pontosTuristicos2);
    printf("A densidade populacional é: %.2f\n", densidadepop2);
    printf("A renda per capita é: %.2f\n", rendapercapita2);
    printf("O superpoder da cidade é: %.2f\n", superpoder2);

    // Comparações
    resultadopopulacao = populacao1 > populacao2;
    resultadoarea = area1 > area2;
    resultadopib = PIB1 > PIB2;
    resultadopontosturisticos = pontosTuristicos1 > pontosTuristicos2;
    resultadodensidade = densidadepop1 < densidadepop2;  // Menor densidade vence
    resultadorenpercapita = rendapercapita1 > rendapercapita2;
    resultadosuperpoder = superpoder1 > superpoder2;
    //carta2
    resultadopopulacao2 = populacao2 > populacao1;
    resultadoarea2 = area2 > area1;
    resultadopib2 = PIB2 > PIB1;
    resultadopontosturisticos2 = pontosTuristicos2 > pontosTuristicos1;
    resultadodensidade2 = densidadepop2 < densidadepop1;
    resultadorendapercapita2 = rendapercapita2 > rendapercapita1;
    resultadosuperpoder2 = superpoder2 > superpoder1;

    // Exibição dos Resultados das Comparações
    printf("\n-------------------------------------------------------------------------------\n");
    printf("Comparação de Cartas: CARTA 1\n");
    printf("População: Carta 1 venceu (%d)\n", resultadopopulacao);
    printf("Área: Carta 1 venceu (%d)\n", resultadoarea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadopib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadopontosturisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadodensidade);
    printf("Renda per Capita: Carta 1 venceu (%d)\n", resultadorenpercapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadosuperpoder);

    printf("\n-------------------------------------------------------------------------------\n");
    printf("Comparação de Cartas: CARTA 2\n");
    printf("População: Carta 2 venceu (%d)\n", resultadopopulacao2);
    printf("Área: Carta 2 venceu (%d)\n", resultadoarea2);
    printf("PIB: Carta 2 venceu (%d)\n", resultadopib2);
    printf("Pontos Turísticos: Carta 2 venceu (%d)\n", resultadopontosturisticos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadodensidade2);
    printf("Renda per Capita: Carta 2 venceu (%d)\n", resultadorendapercapita2);
    printf("Super Poder: Carta 2 venceu (%d)\n", resultadosuperpoder2);

    printf("\n-------------------------------------------------------------------------------------------------\n");
    //------------------------------------------------------------------------------------------------------------------------------//
    //iniciando a primeira parte do módulo 2
    // 1. comparar um atributo escolhido com if/else
      // 2. exibir carta 1 venceu (numero de populacao)
    // 3. exibir carta um (cidade) venceu

    printf("\n---------------------------- COMPAÇÅO DE ATRIBUTO: MAIOR POPULAÇaO ---------------------------------------\n");
         if (populacao1 > populacao2){
        printf("%s vence com população de %.2f", nomeCidade1, populacao1);
             } else {
                printf("%s vence com população de %.2f\n", nomeCidade2, populacao2);
  }
  
    return 0;


    
}