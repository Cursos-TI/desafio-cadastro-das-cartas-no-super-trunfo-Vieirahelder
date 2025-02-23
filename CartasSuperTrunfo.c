#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Helder Vieira Nascimento


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char A,B,C,D,E,H; //como sugerido inserir uma letra que defina o pais de A a H.
    int codigodacarta1, codigocarta2; //inserir seguencia numeria de 01 a 04  que precedera a letra inicial do país.
    char nomedacidade1[50];  //inserir o nome da cidade como sugerido.
    char nomedacidade2[50];
    float populacao1;
    float populacao2; // inserir a popupalacao como sugerido.
    float area1;
    float area2; //inserrir a populacao em km2 como sugerido.
    float PIB1;
    float PIB2; // inserir o valor do PIB como sugerido.
    int numerodepontosturiscos1,numerodepontosturiscos2; // inserir o numero de pontos como sugerido.
    float densidadepop1 = (float)populacao1 / area1;
    float densidadepop2 = (float)populacao2 / area2;
    float rendapercapita1 = (float)PIB1 / populacao1;
    float rendapercapita2 = (float)PIB2 / populacao2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
        printf("Carta A01\n");
        printf("Digite a letra inicial do País do qual a sua cidade pertence: ");
        scanf("%c", &A);

        printf("Digite o número da sua carta de 1 até 4: ");
        scanf ("%d", &codigodacarta1);

        printf("Digite o nome da cidade: ");
        scanf("%s", nomedacidade1);

        printf("Digite a população da cidade: ");
        scanf(" %f", &populacao1);

        printf("Digite a área total da cidade em Km2: ");
        scanf( "%f", &area1);

        printf("Digite o PIB da cidade em U$: ");
        scanf(" %f", &PIB1);

        printf("Digite o número de pontos turísticos: ");
        scanf(" %d", &numerodepontosturiscos1);


        printf("Carta A02\n");

        printf("Digite a letra inicial do País do qual a sua cidade pertence: ");
        scanf("     %c", &B);

        printf("Digite o número da sua carta de 1 até 4: ");
        scanf ("%d", &codigocarta2);

        printf("Digite o nome da cidade: ");
        scanf("%s", nomedacidade2);

        printf("Digite a população da cidade: ");
        scanf("%f", &populacao2);

        printf("Digite a área total da cidade em Km2: ");
        scanf("%f",&area2);

        printf("Digite o PIB da cidade em U$: ");
        scanf("%f", &PIB2);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &numerodepontosturiscos2);

        printf("-------------------------------------------------------------------------------\n");

        printf("Carta A01\n");
        printf("Nome da cidade: %s\n", nomedacidade1);
        printf("A pipulação da cidadade é:  %f milhões\n", populacao1);
        printf("A área da cidade é de: %f Km2\n", area1);
        printf("O PIB da cidade é de: U$ %f milhões\n", PIB1);
        printf("Total de pontos turísticos: %d\n", numerodepontosturiscos1);
        printf("A densidade popupalional é: %f\n", densidadepop1);
        printf("A renda percapita é: %f\n", rendapercapita1);


        printf("-------------------------------------------------------------------------------\n");

        printf("Carta A02\n");
        printf("Nome da cidade:%s\n", nomedacidade2);
        printf("A pipulação da cidadade é: %f milhões\n", populacao2);
        printf("A área da cidade é de: %f Km2\n", area2);
        printf("O PIB da cidade é de: U$ %f milhões\n", PIB2);
        printf("Total de pontos turísticos: %d\n", numerodepontosturiscos2);
        printf("A densidade popupalional é: %f\n", densidadepop2);
        printf("A renda percapita é: %f\n", rendapercapita2);
        

    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
