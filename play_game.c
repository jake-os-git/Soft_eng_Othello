#include "play_game.h"
#include "initalise_game.h"
#include <stdbool.h>


bool isValid(enum othelloColour boardArr[SIZE][SIZE], player Player,int row, int col) {
    player currentPlayer = Player;
    bool valid = false;
    int i, j;
    // for (int i = 0; i < SIZE; ++i) {
    //    for (int j = 0; j < SIZE; ++j) {

//generic checks
    if (boardArr[row][col] == BLACK || boardArr[row][col] == WHITE) {//if move already contains a player
        valid = false;
    } else if (row < 0 || row >= SIZE || col < 0 || col >= SIZE) {//if move is off the board
        valid = false;
    }
        //check horizontally right
        else if( (row+1) >= SIZE || (col+1) != EMPTY || (row+1) == currentPlayer.colour){//if position to right is off the board, or empty, or has a disc of same colour
              valid = false;
           }
    else {
        valid = true;
    }

    while (valid == true) {
        //check left
        //needs to be opponants colour
        if (col > 1 && (boardArr[row][col - 1] != currentPlayer.colour || boardArr[row][col - 1] != EMPTY)) {

            for (j = col - 2; j >= 0; j--) {
                if (boardArr[row][j] == currentPlayer.colour) {
                    result += 1;
                    count += n - j - 1;
                    break;
                }
            }
            if (board[m][j] == NONE) {
                break;
            }
        }
    }



        }


        // }
    }

    /*    for ( j=y-2; j >= 0; j-- ) {
                   if ( boardArr[x][j] == currentPlayer.colour ) {
                       result += 1;
                       count += n-j-1;
                       break; }
               }
                   if ( board[m][j] == NONE ) {
                       break;
                   }
               }
               */



}