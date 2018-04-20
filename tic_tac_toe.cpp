/*
 * tic_tac_toe.cpp
 *
 *  Created on: Apr 19, 2018
 *      Author: Luke
 */

using namespace std;

void displayBoard(char board[3][3]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<board[i][j];
			cout<<"\n";
		}
	}
}

int determineWin(char board[3][3]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j< 3; j++){
			if(board[i][j] == board[i+1][j] == board[i+2][j]){
				if(board[i][j] == "X"){
					return 1;
				}else{
					return 2;
				}
			}else{
				return 0;
			}
		}
	}
}


int main(){
	char board[3][3] =
	{{"*","*","*"},
	{"*","*","*"},
	{"*","*","*"}};

	int p1_1, p1_2;
	int p1_1, p1_2;
	int winCondition = 0;

	cout << "Player 1 is X, player 2 is O.";

	do {
		do {
			cout<<"Player 1, enter row.";
			cin>>p1_1;
		} while (p1_1<4);
		do {
			cout<<"Player 1, enter column.";
			cin>>p1_2;
		} while (p1_2<4);

		board[p1_1,p1_2] = "X";

		displayBoard(board);

		winCondition = determineWin(board);
		if(determineWin(board) == 1){
			cout<<"Player 1 wins!";
			return 0;
		}



		do {
			cout<<"Player 2, enter row.";
			cin>>p2_1;
		} while (p2_1<4);
		do {
			cout<<"Player 2, enter column.";
			cin>>p2_2;
		} while (p2_2<4);

		board[p2_1,p2_2] = "O";

		displayBoard(board);
		if(determineWin(board) == 2){
			cout<<"Player 2 wins!";
			return 0;
		}

	} while (winCondition == false);

}



