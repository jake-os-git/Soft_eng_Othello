#include <stdio.h>
#include "initalise_game.h"

enum othelloColour boardArr[SIZE][SIZE]={ {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
{EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
{EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
{EMPTY, EMPTY, EMPTY, WHITE, BLACK, EMPTY, EMPTY, EMPTY},
{EMPTY, EMPTY, EMPTY, BLACK, WHITE, EMPTY, EMPTY, EMPTY},
{EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
{EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
{EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
};



void get_players(){

    printf("  xxx  Welcome to my Othello game  xxx   \n\n");
    printf("Please enter the name of Player 1 (Black):");
    scanf("\n%s",player1.name);
    player1.colour = BLACK;
    printf("Please enter the name of Player 2 (White):");
    scanf("\n%s",player2.name);
    player2.colour = WHITE;



}

void init_board(){

    printf("    ---+---+---+---+---+---+---+---\n");
    printf("1  | %c | %c | %c | %c | %c | %c | %c | %c |\n", boardArr[0][0], boardArr[0][1], boardArr[0][2], boardArr[0][3], boardArr[0][4], boardArr[0][5], boardArr[0][6], boardArr[0][7]);
    printf("    ---+---+---+---+---+---+---+---\n");
    printf("2  | %c | %c | %c | %c | %c | %c | %c | %c |\n", boardArr[1][0], boardArr[1][1], boardArr[1][2], boardArr[1][3], boardArr[1][4], boardArr[1][5], boardArr[1][6], boardArr[1][7]);
    printf("    ---+---+---+---+---+---+---+---\n");
    printf("3  | %c | %c | %c | %c | %c | %c | %c | %c |\n", boardArr[2][0], boardArr[2][1], boardArr[2][2], boardArr[2][3], boardArr[2][4], boardArr[2][5], boardArr[2][6], boardArr[2][7]);
    printf("    ---+---+---+---+---+---+---+---\n");
    printf("4  | %c | %c | %c | %c | %c | %c | %c | %c |\n", boardArr[3][0], boardArr[3][1], boardArr[3][2], boardArr[3][3], boardArr[3][4], boardArr[3][5], boardArr[3][6], boardArr[3][7]);
    printf("    ---+---+---+---+---+---+---+---\n");
    printf("5  | %c | %c | %c | %c | %c | %c | %c | %c |\n", boardArr[4][0], boardArr[4][1], boardArr[4][2], boardArr[4][3], boardArr[4][4], boardArr[4][5], boardArr[4][6], boardArr[4][7]);
    printf("    ---+---+---+---+---+---+---+---\n");
    printf("6  | %c | %c | %c | %c | %c | %c | %c | %c |\n", boardArr[5][0], boardArr[5][1], boardArr[5][2], boardArr[5][3], boardArr[5][4], boardArr[5][5], boardArr[5][6], boardArr[5][7]);
    printf("    ---+---+---+---+---+---+---+---\n");
    printf("7  | %c | %c | %c | %c | %c | %c | %c | %c |\n", boardArr[6][0], boardArr[6][1], boardArr[6][2], boardArr[6][3], boardArr[6][4], boardArr[6][5], boardArr[6][6], boardArr[6][7]);
    printf("    ---+---+---+---+---+---+---+---\n");
    printf("8  | %c | %c | %c | %c | %c | %c | %c | %c |\n", boardArr[7][0], boardArr[7][1], boardArr[7][2], boardArr[7][3], boardArr[7][4], boardArr[7][5], boardArr[7][6], boardArr[7][7]);
    printf("    ---+---+---+---+---+---+---+---\n");
    printf("     a   b   c   d   e   f   g   h\n");
}