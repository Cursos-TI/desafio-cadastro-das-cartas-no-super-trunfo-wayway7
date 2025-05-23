#include <stdio.h>

int main(){
 

printf("SuperTrunfo\n");

    char estado1[20];
    char codigo1[10];
    char nome1[30];
    unsigned int populacao1;
    float area1;
    float pib1;
    int turismo1;

    char estado2[20];
    char codigo2[10];
    char nome2[30];
    unsigned int populacao2;
    float area2;
    float pib2;
    int turismo2;

    //Estado 1

    printf("Digite o nome do primeiro estado: ");
    scanf("%s", &estado1);
    
    printf("Digite o codigo deste estado (Inicial acompanhada de 01 a 04): ");
    scanf("%s", &codigo1);

    printf("Digite o nome de uma cidade deste estado: ");
    scanf("%s", &nome1);

    printf("Informe a população desta cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a Área desta cidade: ");
    scanf("%f", &area1);

    printf("Informe o PIB desta cidade: ");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos á nesta cidade: ");
    scanf("%d", &turismo1);

    //Estado 2

    printf("Digite o nome do segundo estado: ");
    scanf("%s", &estado2);
    
    printf("Digite o codigo deste estado (Inicial acompanhada de 01 a 04): ");
    scanf("%s", &codigo2);

    printf("Digite o nome de uma cidade deste estado: ");
    scanf("%s", &nome2);

    printf("Informe a população desta cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a Área desta cidade: ");
    scanf("%f", &area2);

    printf("Informe o PIB desta cidade: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos á nesta cidade: ");
    scanf("%d", &turismo2);

    //Densisade e Capta

    float divdens1 = populacao1 / area1;
    float percapta1 = pib1 / populacao1;

    float divdens2 = populacao2 / area2;
    float percapta2 = pib2 / populacao2;


    //Inversao

    float inversao1 = 1;
    float inversao2 = 1;

    float inv1 = 1 / divdens1;
    float inv2 = 1 / divdens2;

    //Soma de tudo

    unsigned long int somasuperpoder1 = populacao1 + area1 + pib1 + turismo1 + inv1 + percapta1;
    unsigned long int somasuperpoder2 = populacao2 + area2 + pib2 + turismo2 + inv2 + percapta2;

    //Comparacao

    int pp12 = populacao1 > populacao2;
    int aa12 = area1 > area2;
    int pib12 = pib1 > pib2;
    int turis12 = turismo1 > turismo2;
    int densi12 = inv1 > inv2;
    int per12 = percapta1 > percapta2;
    int super12 = somasuperpoder1 > somasuperpoder2;


    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", turismo1);
    printf("Densidade Demografica: %f\n", divdens1);
    printf("PIB por capta: %f\n", percapta1);

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", turismo2);
    printf("Densidade Demografica: %f\n", divdens2);
    printf("PIB por capta: %f\n", percapta2);

    printf("Resultado da batalha de cartas\n");
    printf("O Estado %s tem mais populacao que o estado %s? %d\n", estado1, estado2, pp12);
    printf("O Estado %s tem mais Área que o estado %s? %d\n", estado1, estado2, aa12);
    printf("O Estado %s tem mais PIB que o estado %s? %d\n", estado1, estado2, pp12);
    printf("O Estado %s tem mais Pontos Turisticos que o estado %s? %d\n", estado1, estado2, turis12);
    printf("O Estado %s tem mais Densidade Demografica que o estado %s? %d\n", estado1, estado2, densi12);
    printf("O Estado %s tem mais Pib por Capta que o estado %s? %d\n", estado1, estado2, per12);
    printf("O superpoder de %s é maior que o de %s? %d\n", estado1, estado2, super12);



    return 0;

}