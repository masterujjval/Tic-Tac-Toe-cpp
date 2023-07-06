//============================================================================
// Name        : Tic_tac_toe.cpp
// Author      : Zoro
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<unistd.h>
#include<cstdlib>
using namespace std;

char ticTac[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
int n;
void matrix() {
	system("clear");

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {
			cout << ticTac[i][j] << " ";
		}
		cout << '\n';
	}
}
void input() {
	cout << endl;

	cout << "Enter the integer where you want to cross your line : ";
	cin >> n;

	switch (n) {
	case 1:
		ticTac[0][0] = player;
		break;

	case 2:
		ticTac[0][1] = player;
		break;

	case 3:
		ticTac[0][2] = player;
		break;
	case 4:
		ticTac[1][0] = player;
		break;
	case 5:
		ticTac[1][1] = player;
		break;
	case 6:
		ticTac[1][2] = player;
		break;
	case 7:
		ticTac[2][0] = player;
		break;
	case 8:
		ticTac[2][1] = player;
		break;
	case 9:
		ticTac[2][2] = player;
		break;

	}
}
void changePlayer() {
	if (player == 'X')
		player = 'O';
	else
		player = 'X';

}

char check() {
	cout << endl;
	if (ticTac[0][0] == 'X' && ticTac[1][0] == 'X' && ticTac[2][0] == 'X') {
		return 'X';
		//left down
	} else if (ticTac[0][0] == 'X' && ticTac[1][1] == 'X'
			&& ticTac[2][2] == 'X') {
		return 'X';
		//left diagonal
	} else if (ticTac[0][0] == 'X' && ticTac[0][1] == 'X'
			&& ticTac[0][2] == 'X') {
		return 'X';
		//upper left to right

	}

	else if (ticTac[1][0] == 'X' && ticTac[1][1] == 'X'
			&& ticTac[1][2] == 'X') {
		return 'X';
		//middle left to right

	} else if (ticTac[2][0] == 'X' && ticTac[2][1] == 'X'
			&& ticTac[2][2] == 'X') {
		return 'X';
		//lower left to right

	} else if (ticTac[0][1] == 'X' && ticTac[1][1] == 'X'
			&& ticTac[2][1] == 'X') {
		return 'X';
		//middle up to down

	}

	else if (ticTac[0][2] == 'X' && ticTac[1][2] == 'X'
			&& ticTac[2][2] == 'X') {
		return 'X';
		//right up to down

	}

	else if (ticTac[0][2] == 'X' && ticTac[1][1] == 'X'
			&& ticTac[2][0] == 'X') {
		return 'X';
		//right to left diagonally

	}

	//for player2

	else if (ticTac[0][0] == 'O' && ticTac[1][0] == 'O'
			&& ticTac[2][0] == 'O') {
		return 'O';
		//left down
	} else if (ticTac[0][0] == 'O' && ticTac[1][1] == 'O'
			&& ticTac[2][2] == 'O') {
		return 'O';
		//left diagonal
	} else if (ticTac[0][0] == 'O' && ticTac[0][1] == 'O'
			&& ticTac[0][2] == 'O') {
		return 'O';
		//upper left to right

	}

	else if (ticTac[1][0] == 'O' && ticTac[1][1] == 'O'
			&& ticTac[1][2] == 'O') {
		return 'O';
		//middle left to right

	} else if (ticTac[2][0] == 'O' && ticTac[2][1] == 'O'
			&& ticTac[2][2] == 'O') {
		return 'O';
		//lower left to right

	} else if (ticTac[0][1] == 'O' && ticTac[1][1] == 'O'
			&& ticTac[2][1] == 'O') {
		return 'O';
		//middle up to down

	}

	else if (ticTac[0][2] == 'O' && ticTac[1][2] == 'O'
			&& ticTac[2][2] == 'O') {
		return 'O';
		//right up to down

	}

	else if (ticTac[0][2] == 'O' && ticTac[1][1] == 'O'
			&& ticTac[2][0] == 'O') {
		return 'O';
		//right to left diagonally

	}

	cout << endl;

}

int main() {
	string s = "Tic Tac Toe version 0.0.1. Loading....";
	for (int i = 0; i < s.length(); i++) {
		cout.flush();
		usleep(100000);
		cout << s[i];
	}
	int draw = 0;
	cout << endl;

	while (true) {
		matrix();
		input();
		draw++;
		if (check() == 'X') {
			cout << "THE WINNER IS " << check() << endl;
			break;
		} else if (check() == 'O') {
			cout << "THE WINNER IS " << check() << endl;
			break;
		}
		changePlayer();

		if (draw >= 9) {
			cout << "ITS A DRAW" << endl;
			break;
		}
	}

	return 0;
}
