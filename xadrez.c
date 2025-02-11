#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

const int BISPO = 5, TORRE = 5, RAINHA = 8;

int main(){

    int i = 0, resp = 0;

    do //menu interativo para definir a peça a ser movimentada
    {
        printf("\nQual peça deseja movimentar?\n\n");
        printf("1. Bispo\n");
        printf("2. Torre\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. Sair\n\n");
        scanf("%d", &resp);

            switch (resp)
            {
            case 1: //movimentação do bispo
                printf("\nMovimentando Bispo...\n\n");

                    for (i = 0; i < BISPO; i++)
                    {
                        printf("Cima e Direita\n");
                    }
                break;

            case 2: //movimentação da torre
                printf("\nMovimentando Torre...\n\n");

                    for (i = 0; i < TORRE; i++)
                    {
                        printf("Direita\n");
                    }
                break;

            case 3: //movimentação da rainha
                printf("\nMovimentando Rainha...\n\n");

                    for (i = 0; i < RAINHA; i++)
                    {
                        printf("Esquerda\n");
                    }
                break;

            case 4: //movimentação do cavalo
                printf("\nMovimentando Cavalo...\n\n");

                    int i = 1;
                    while (i <= 1)
                    {
                        for (int j = 0; j <= i; j++)
                        {
                            printf("Baixo\n");
                        }
                        i++;
                        printf("Esquerda\n");
                    }
                break;

            case 5: //opção de saída

                        printf("Saindo...\n");
                    
                break;

            default:

                printf("Opção inválida!\n");
                break;
            }
                  
    } while (resp != 5);
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
