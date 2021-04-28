//
// Created by jakeo on 14/04/2021.
//

#ifndef SOFT_ENG_OTHELLO_INITALISE_GAME_H
#define SOFT_ENG_OTHELLO_INITALISE_GAME_H
#define SIZE 8
void get_players();
void init_board();
enum othelloColour{
    BLACK = 'B',
    WHITE = 'W',
    EMPTY = ' '
}colour;
extern enum othelloColour boardArr[SIZE][SIZE];
typedef struct players{
    char name[20];
    enum othelloColour colour;
    int score;
} player;
player player1, player2;

#endif //SOFT_ENG_OTHELLO_INITALISE_GAME_H
