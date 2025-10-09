#include <stdio.h>

int main () {

    /* Variáveis*/
    char estado1[20], estado2[20];
    char cidade1[20], cidade2[20], codigo1[20], codigo2[20];
    int  pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibperCapita1, pibperCapita2;
    unsigned int populacao1, populacao2;
    float superPoder1, superPoder2;
    int resultadoPontosTuristicos, resultadoArea, resultadoPib, resultadoPopulacao, resultadoPoder, resultadoDensidade;
    int escolhaJogador1, escolhaJogador2;
    int jogador1 = 0;
    int jogador2 = 0;

     /* Entrada dos dados da primeira carta*/
    printf("Digite os dados da primeira carta:\n");
    printf("Digite o Estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%u", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    densidade1 = populacao1 / area1;
    pibperCapita1 = pib1 /populacao1;
    superPoder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontosturisticos1 + (float)pibperCapita1 + (1.0f/densidade1);

    /* Impressão dos dados da primeira carta*/

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibperCapita1);
    printf("Super Poder: %f\n", superPoder1);

    /* Entrada dos dados da segunda carta*/
    printf("Digite os dados da segunda carta:\n");
    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%u", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    densidade2 = populacao2 / area2;
    pibperCapita2 = pib2 /populacao2;
    superPoder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontosturisticos2 + (float)pibperCapita2 + (1.0f/densidade2);

/* Impressão dos dados da segunda carta*/
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibperCapita2);
    printf("Super Poder: %f\n", superPoder2);

    /* Comparação de cartas e escolha*/


printf("** Escolha uma opção**\n");
printf("1. População\n");
printf("2. PIB\n");
printf("3. Pontos Turísticos\n");
printf("4. Área\n");
printf("5. Densidade Populacional\n");
printf("6. PIB per capita\n");
printf("7. Super Poder\n");
scanf("%d", &escolhaJogador1);

switch(escolhaJogador1){
    case 1:
        if (populacao1 > populacao2){
            printf("%s venceu %s\n", cidade1, cidade2);
            jogador1++;
        }
        else if (populacao1 < populacao2) {
            printf("%s vence %s\n", cidade2, cidade1);
            jogador2++;
        }
        else {
            printf("Empate!\n");}
        break;
    case 2:
        if (pib1 > pib2){
            printf("%s venceu %s\n", cidade1, cidade2);
            jogador1++;
        }
        else if (pib1 < pib2) {
            printf("%s vence %s\n", cidade2, cidade1);
            jogador2++;
        }
        else {
            printf("Empate!\n");}
        break;
    case 3:
        if(pontosturisticos1 > pontosturisticos2){
            printf("%s venceu %s\n", cidade1, cidade2);
            jogador1++;
        }
        else if (pontosturisticos1 < pontosturisticos2){
            printf("%s venceu %s\n", cidade2, cidade1);
            jogador2++;
        }
        else {
            printf("Empate\n");}
        break;
    case 4:
        if(area1 > area2){
            printf("%s venceu %s\n", cidade1, cidade2);
            jogador1++;
        }
        else if(area1 < area2){
            printf("%s venceu %s\n", cidade2, cidade1);
            jogador2++;
        }
        else {
            printf("Empate\n");}
        break;
    case 5:
        if(densidade1 < densidade2){
            printf("%s venceu %s\n", cidade1, cidade2);
            jogador1++;
        }
        else if(densidade1 > densidade2){
            printf("%s venceu %s\n", cidade2, cidade1);
            jogador2++;
        }
        else {
            printf("Empate\n");}
        break;
    case 6:
        if (pibperCapita1 > pibperCapita2){
            printf("%s venceu %s\n", cidade1, cidade2);
            jogador1++;
        }
        else if(pibperCapita1 < pibperCapita2){
            printf("%s venceu %s\n", cidade2, cidade1);
            jogador2++;
        }
        else {
            printf("Empate\n"); }
        break;
    case 7:
        if (superPoder1 > superPoder2){
            printf("%s venceu %s\n", cidade1, cidade2);
            jogador1++;
        }
        else if(superPoder1 < superPoder2){
            printf("%s venceu %s\n", cidade2, cidade1);
            jogador2++;
        }
        else {
            printf("Empate");}
        break;
}
/*Escolha da segunda opção*/

printf("** Escolha uma segunda opção**\n");
printf("Escolha uma opção diferente da primeira");
printf("1. População\n");
printf("2. PIB\n");
printf("3. Pontos Turísticos\n");
printf("4. Área\n");
printf("5. Densidade Populacional\n");
printf("6. PIB per capita\n");
printf("7. Super Poder\n");
scanf("%d", &escolhaJogador2);

if (escolhaJogador1 == escolhaJogador2){
    printf("Escolha uma opção diferente\n");
}
else{

switch(escolhaJogador2){
    case 1:
        if (populacao1 > populacao2){
            printf("%s venceu %s\n", cidade1, cidade2);
            jogador1++;
        }
        else if (populacao1 < populacao2) {
            printf("%s vence %s\n", cidade2, cidade1);
            jogador2++;
        }
        else {
            printf("Empate!\n");}
        break;
    case 2:
        if (pib1 > pib2){
            printf("%s venceu %s\n", cidade1, cidade2);
            jogador1++;
        }
        else if (pib1 < pib2) {
            printf("%s vence %s\n", cidade2, cidade1);
            jogador2++;
        }
        else {
            printf("Empate!\n");}
        break;
    case 3:
        if(pontosturisticos1 > pontosturisticos2){
            printf("%s venceu %s\n", cidade1, cidade2);
            jogador1++;
        }
        else if (pontosturisticos1 < pontosturisticos2){
            printf("%s venceu %s\n", cidade2, cidade1);
            jogador2++;
        }
        else {
            printf("Empate\n");}
        break;
    case 4:
        if(area1 > area2){
            printf("%s venceu %s\n", cidade1, cidade2);
            jogador1++;
        }
        else if(area1 < area2){
            printf("%s venceu %s\n", cidade2, cidade1);
            jogador2++;
        }
        else {
            printf("Empate\n");}
        break;
    case 5:
        if(densidade1 < densidade2){
            printf("%s venceu %s\n", cidade1, cidade2);
            jogador1++;
        }
        else if(densidade1 > densidade2){
            printf("%s venceu %s\n", cidade2, cidade1);
            jogador2++;
        }
        else {
            printf("Empate\n");}
        break;
    case 6:
        if (pibperCapita1 > pibperCapita2){
            printf("%s venceu %s\n", cidade1, cidade2);
            jogador1++;
        }
        else if(pibperCapita1 < pibperCapita2){
            printf("%s venceu %s\n", cidade2, cidade1);
            jogador2++;
        }
        else {
            printf("Empate\n"); }
        break;
    case 7:
        if (superPoder1 > superPoder2){
            printf("%s venceu %s\n", cidade1, cidade2);
            jogador1++;
        }
        else if(superPoder1 < superPoder2){
            printf("%s venceu %s\n", cidade2, cidade1);
            jogador2++;
        }
        else {
            printf("Empate");}
        break;
        } 
    }
    /*Resultado final*/
    printf("Resultado final\n");

    if (jogador1 > jogador2){
        printf("%s venceu\n", cidade1);
    }
    else if (jogador1 < jogador2){
        printf("%s venceu\n", cidade2);
    }
    else {
        printf("O jogo empatou!\n");
    }

return 0;
    }