#include <iostream>
using namespace std;

int sudoku[9][9];

bool checkRow(int i){
	bool arr[9] = {};
	for (int k=0;k<9;k++){
		if (!arr[sudoku[i][k]-1]) arr[sudoku[i][k]-1]=1;
		else return 0;
	}
	return 1;
}

bool checkSqr(int I, int J){
	bool arr[9] = {};
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			if (!arr[sudoku[I*3+i][J*3+j]-1]) arr[sudoku[I*3+i][J*3+j]-1]=1;
			else return 0;
		}
	}
	return 1;
}

bool checkCol(int j){
	bool arr[9] = {};
	for (int k=0;k<9;k++){
		if (!arr[sudoku[k][j]-1]) arr[sudoku[k][j]-1]=1;
		else return 0;
	}
	return 1;
}

int main(){
	while (true){
		bool isCorrectSudoku = true;
		for (int i=0;i<9;i++){
			for (int j=0;j<9;j++){
				cin >> sudoku[i][j];
				if (sudoku[i][j]==cin.eof()) return 0;
			}
		}
		for (int i=0;i<9;i++){
			if(checkRow(i)==0) isCorrectSudoku = false;
		}
		for (int j=0;j<9;j++){	
			if(checkCol(j)==0) isCorrectSudoku = false;
		}
		for (int I=0;I<3;I++){
			for (int J=0;J<3;J++){
				if(checkSqr(I, J)==0) isCorrectSudoku = false;	
			}
		}
		cout << ((isCorrectSudoku)?"yes\n":"no\n");
	}
	return 0;
}
