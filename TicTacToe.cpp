//
//  TicTacToe.cpp
//  TicTacToe
//
//  Created by Claire Jansen on 2019-01-23.
//  Copyright © 2019 Claire Jansen. All rights reserved.
//

#include <iostream>
using namespace std;

char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player = 'X';

void Board(){
    for(int i=0; i<3; i++){ //loop three times for three lines
        for(int j=0; j<3; j++){ //loop for three elements per line

            cout << matrix[i][j] << " "; 
        }
    cout << endl;
    }
} 
void Input(){
    int a;
    cout << "Enter the number for the field to be filled: " << endl;
    cin >> a;

    if(a==1)
        matrix[0][0] = player;
    else if(a==2)
        matrix[0][1] = player;
    else if(a==3)
        matrix[0][2] = player;
    else if(a==4)
        matrix[1][0] = player;
    else if(a==5)
        matrix[1][1] = player;
    else if(a==6)
        matrix[1][2] = player;
    else if(a==7)
        matrix[2][0] = player;
    else if(a==8)
        matrix[2][1] = player;
    else if(a==9)
        matrix[2][2] = player;

}
void TogglePlayer(){ //function to change player after each turn
    if(player == 'X')
        player = 'O';
    else
        player = 'X';
}
char Win(){ //function to check if a player has won the game
//could write out if(martix[0][0] == matrix[0][1] == matrix[0][2]); but very inefficient
    //rows
    if(matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if(matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if(matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    
    //columns
    if(matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if(matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if(matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';

    //diagonals
    if(matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if(matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        return 'X';

    //rows
    if(matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if(matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if(matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    
    //columns
    if(matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if(matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if(matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';

    //diagonals
    if(matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if(matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
        return '0';
}

int main (){
    
        Board();
        while(1){
            Input();
            Board();
            if(Win() == 'X'){
                cout << "Player X Wins" << endl;
                break;
            }
            else if (Win() == 'O') {
                cout << "Player O Wins" << endl;
                break;
            }
        TogglePlayer(); 
        }
   /*
    1 2 3
    4 5 6
    7 8 9
    (requires a matrix)
    */
    return 0;
}
