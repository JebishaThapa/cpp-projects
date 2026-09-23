#include <iostream>

char board[3][3]= { 
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};
char currentMarker;
int currentPlayer;

void drawBoard(){
    std::cout << "\n";
    std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " \n";
    std::cout << "---|---|---\n";
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " \n";
    std::cout << "---|---|---\n";    
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " \n";
    std::cout << "---|---|---\n";   
    std::cout << "\n"; 
}

bool placeMarker(int slot){
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != '0'){
        board[row][col] = currentMarker;
        return true;
    }
    return false;
}

int checkWinner(){
    for(int i =0; i<3; i++){
        if(board[i][0] == board[i][1] && board[i][1]== board[i][2]) return currentPlayer;
        if(board[0][i] == board[1][i] && board[1][i]== board[2][i]) return currentPlayer;        
    }
    if(board[0][0] == board[1][1] && board[1][1]== board[2][2]) return currentPlayer;
    if(board[0][2] == board[1][1] && board[1][1]== board[2][0]) return currentPlayer;    

    return 0;
}

void swapPlayerAndMarker(){
    if(currentMarker == 'X'){
        currentMarker = '0';
        currentPlayer = 2;
    }
}