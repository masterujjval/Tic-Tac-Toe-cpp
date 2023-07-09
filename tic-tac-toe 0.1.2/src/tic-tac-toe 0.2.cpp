//============================================================================
// Name        : 2.cpp
// Author      : Zoro
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<unistd.h>
#include<cstdlib>
using namespace std;

char arr[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
int n=0;
void matrix(){
	system("clear");
	cout<<"   |   |"<<endl;
	cout<<"-----------"<<endl;
for(int i=0;i<3;i++){


		for(int j=0;j<3;j++){
			if(j==2)cout<<" "<<arr[i][j];
			else cout<<" "<<arr[i][j]<<" |";




		}
cout<<'\n';
cout<<"-----------"<<endl;
	}
cout<<"   |   |"<<endl;
}

//input
void input() {
cout<<endl;

	cout << "Enter the integer where you want to cross your line : ";
	cin >> n;

	switch (n) {
	case 1:
		arr[0][0] = player;
		break;

	case 2:
		arr[0][1] = player;
		break;

	case 3:
		arr[0][2] = player;
		break;
	case 4:
		arr[1][0] = player;
		break;
	case 5:
		arr[1][1] = player;
		break;
	case 6:
		arr[1][2] = player;
		break;
	case 7:
		arr[2][0] = player;
		break;
	case 8:
		arr[2][1] = player;
		break;
	case 9:
		arr[2][2] = player;
		break;

	}
}

//changing player
void changePlayer() {
	if (player == 'X')
		player = 'O';
	else
		player = 'X';

}

//checking condition
char check() {

	if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') {
		return 'X';
		//left down
	} else if (arr[0][0] == 'X' && arr[1][1] == 'X'
			&& arr[2][2] == 'X') {
		return 'X';
		//left diagonal
	} else if (arr[0][0] == 'X' && arr[0][1] == 'X'
			&& arr[0][2] == 'X') {
		return 'X';
		//upper left to right

	}

	else if (arr[1][0] == 'X' && arr[1][1] == 'X'
			&& arr[1][2] == 'X') {
		return 'X';
		//middle left to right

	} else if (arr[2][0] == 'X' && arr[2][1] == 'X'
			&& arr[2][2] == 'X') {
		return 'X';
		//lower left to right

	} else if (arr[0][1] == 'X' && arr[1][1] == 'X'
			&& arr[2][1] == 'X') {
		return 'X';
		//middle up to down

	}

	else if (arr[0][2] == 'X' && arr[1][2] == 'X'
			&& arr[2][2] == 'X') {
		return 'X';
		//right up to down

	}

	else if (arr[0][2] == 'X' && arr[1][1] == 'X'
			&& arr[2][0] == 'X') {
		return 'X';
		//right to left diagonally

	}

	//for player2

	else if (arr[0][0] == 'O' && arr[1][0] == 'O'
			&& arr[2][0] == 'O') {
		return 'O';
		//left down
	} else if (arr[0][0] == 'O' && arr[1][1] == 'O'
			&& arr[2][2] == 'O') {
		return 'O';
		//left diagonal
	} else if (arr[0][0] == 'O' && arr[0][1] == 'O'
			&& arr[0][2] == 'O') {
		return 'O';
		//upper left to right

	}

	else if (arr[1][0] == 'O' && arr[1][1] == 'O'
			&& arr[1][2] == 'O') {
		return 'O';
		//middle left to right

	} else if (arr[2][0] == 'O' && arr[2][1] == 'O'
			&& arr[2][2] == 'O') {
		return 'O';
		//lower left to right

	} else if (arr[0][1] == 'O' && arr[1][1] == 'O'
			&& arr[2][1] == 'O') {
		return 'O';
		//middle up to down

	}

	else if (arr[0][2] == 'O' && arr[1][2] == 'O'
			&& arr[2][2] == 'O') {
		return 'O';
		//right up to down

	}

	else if (arr[0][2] == 'O' && arr[1][1] == 'O'
			&& arr[2][0] == 'O') {
		return 'O';
		//right to left diagonally

	}

	cout << endl;

}






int main() {
	string s = "Tic Tac Toe version 0.1.2. Loading....";
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
			cout << "THE WINNER IS " << 'X' << endl;
			break;
		} else if (check() == 'O') {
			cout << "THE WINNER IS " << 'O' << endl;
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
