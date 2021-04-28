#include "play_game.h"
#include "initalise_game.h"
#include <stdbool.h>


bool isValid(enum othelloColour boardArr[SIZE][SIZE], player Player,int row, int col) {
    player currentPlayer = Player;
    bool valid = false;
    int i, j;
    int result =0;

//generic checks
    if (boardArr[row][col] == BLACK || boardArr[row][col] == WHITE) {//if move already contains a player
        valid = false;
    }
    if (row < 0 || row >= SIZE || col < 0 || col >= SIZE) {//if move is off the board
        valid = false;
    }
    else {
        valid = true;
    }

    while (valid == true) {
        //check horizontally left
        //needs to be opponants colour
        if (col > 1 && (boardArr[row][col - 1] != currentPlayer.colour || boardArr[row][col - 1] != EMPTY)) {

            for (j = col - 2; j >= 0; j--) {
                if (boardArr[row][j] == currentPlayer.colour) {
                    result += 1;
                   // count += n-j-1;
                    valid = true;
                    break;
                }
            }
            if (boardArr[row][j] == EMPTY){
                break;
            }
        }
        //check horizontally right
        //if positon not currentPlayer.colour and not blank i.e. opponents colour
        if ( col < SIZE-2 && (boardArr[row][col + 1] != currentPlayer.colour || boardArr[row][col - 1] != EMPTY)) {
            for ( j=col+2; j < SIZE; j++ ) {
                if ( boardArr[row][j] == currentPlayer.colour ) {
                    result += 2;
                    valid = true;
                   // count += j-n-1;
                    break;
                }
                if ( boardArr[row][j] == EMPTY ) {
                    break;
                }
            }
        }
        //check vertically up
        if ( row > 1 && (boardArr[row-1][col] != currentPlayer.colour || boardArr[row][col - 1] != EMPTY) ) {
            for ( i=row-2; i >= 0; i-- ) {
                if ( boardArr[i][col] == currentPlayer.colour) {
                    result += 4;
                    valid = true;
                    //count += m-i-1;
                    break;
                }
                if ( boardArr[i][col] == EMPTY ) {
                    break;
                }
            }
        }
        //check vertically down
        if ( row < SIZE-2 && (boardArr[row + 1][col] != currentPlayer.colour || boardArr[row][col - 1] != EMPTY) ) {
            for ( i=row+2; i < SIZE; i++ ) {
                if ( boardArr[i][col] == currentPlayer.colour ) {
                    result += 8;
                   // count += i-m-1;
                    valid = true;
                    break;
                }
                if ( boardArr[i][col] == EMPTY) {
                    break; }
            }
        }
        //check up diagonal left
        if ( row > 1 && col > 1 && (boardArr[row-1][col-1] != currentPlayer.colour || boardArr[row][col - 1] != EMPTY) ) {
            for ( i=row-2, j=col-2;  i>=0 && j>=0;  i--, j-- ) {
                if ( boardArr[i][j] == currentPlayer.colour ) {
                    result += 16;
                    //count += n-j-1;
                    valid = true;
                    break; }
                if ( boardArr[i][j] == EMPTY    ) {
                    break;
                }
            }
        }
        //check down diagonal left
        if ( row < SIZE-2 && col > 1 && (boardArr[row+1][col-1] != currentPlayer.colour || boardArr[row][col - 1] != EMPTY) ) {
            for ( i=row+2, j=col-2;  i<SIZE && j>=0;  i++, j-- ) {
                if ( boardArr[i][j] == currentPlayer.colour ) {
                    result += 32;
                    //count += n-j-1;
                    valid = true;
                    break;
                }
                if ( boardArr[i][j] == EMPTY ) {
                    break;
                }
            }
        }
        //check down diagonal left
        if ( row > 1 && col < SIZE-2 && (boardArr[row+1][col-1] != currentPlayer.colour || boardArr[row][col - 1] != EMPTY) ) {
            for ( i=row-2, j=col+2;  i>=0 && j<SIZE;  i--, j++ ) {
                if ( boardArr[i][j] == currentPlayer.colour ) {
                    result += 64;
                   // count += j-n-1;
                    valid = true;
                    break; }
                if ( boardArr[i][j] == EMPTY    ) {
                    break;
                }
            }
        }
        //check down diagonal right
        if ( row < SIZE-2 && col < SIZE-2 && (boardArr[row+1][col+1] != currentPlayer.colour || boardArr[row][col - 1] != EMPTY) ) {
            for ( i=row+2, j=col+2;  i < SIZE && j < SIZE;  i++, j++ ) {
                if ( boardArr[i][j] == currentPlayer.colour ) {
                    result += 128;
                   // count += j-n-1;
                    valid = true;
                    break;
                }
                if ( boardArr[i][j] == EMPTY    ) {
                    break;
                }
            }
        }




    }



    return valid;



        }


        // }






