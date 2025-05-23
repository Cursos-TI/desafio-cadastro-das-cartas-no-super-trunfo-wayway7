#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    printf("SuperTrunfo\n");

    char estado1[20];
    char codigo1[10];
    char nome1[30];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;

    char estado2[20];
    char codigo2[10];
    char nome2[30];
    int populacao2;
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


    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", turismo1);

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", turismo2);



    return 0;
}
