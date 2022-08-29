#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinhação!\n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int chute;
    int acertou = 0;
    int nivel;
    int chutesdados = 1;
    double pontos = 1000;

    srand(time(0));
    int numerosecreto = rand() % 100;
    
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodechutesdados;

    switch(nivel) {
        case 1:
            numerodechutesdados = 20;
            break;

        case 2:
            numerodechutesdados = 15;
            break;
        
        default:
            numerodechutesdados = 6;
            break;
    }
    
    for(int i = 1; i <= numerodechutesdados; i++) {

        printf("Tentativa %d\n", chutesdados);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("\nSeu chute foi %d \n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            i--;
            continue;
        }

        int acertou = (chute == numerosecreto);

        if (acertou) {
            break;
        } else if(chute > numerosecreto) {
            printf("Seu chute foi maior que o número secreto!\n\n");
        } else {
            printf("Seu chute foi menor que o número secreto!\n\n");
        }

        chutesdados++;

        double pontosperdidos = (double)(chute - numerosecreto) / (double)2;
        pontos = pontos - abs(pontosperdidos);
    
    }

    printf("Fim de jogo!\n");

    if(acertou == 1) {

        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("Parabéns! Você ganhou!\n");
        printf("Você acertou em %d chutesdados!\n", chutesdados);
        printf("Total de pontos: %.1f\n", pontos);

    } else {

        printf("Você perdeu! Tente de novo!\n");

        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");

    }
}