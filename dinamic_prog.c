#include <stdio.h>
#include <stdlib.h>

/*
	Задача о восьми ферзях — широко известная комбинаторная задача по расстановке фигур на шахматной доске. 
	Исходная формулировка: «Расставить на стандартной 64-клеточной шахматной доске 8 ферзей так, чтобы ни один из них не находился под боем другого». 
	Подразумевается, что ферзь бьёт все клетки, расположенные по вертикалям, горизонталям и обеим диагоналям.
*/

#define HEIGHT 8
#define WIDTH 8
#define QUEENS 8

int board[HEIGHT][WIDTH];

int queenCheck(int x, int y){
	for (int idx = 0; idx < HEIGHT; ++idx){
		for(int jdx = 0; jdx < WIDTH; ++jdx){
			if(board[idx][jdx] != 0){
				if(!(idx == x && jdx == y)){
					if(idx - x == 0 || jdx - y == 0) return 0;
					if(abs(idx - x) == abs(jdx - y)) return 0;
				}
			}
		}
	}
	return 1;
}

int boardCheck(){
	for (int idx = 0; idx < HEIGHT; ++idx){
		for(int jdx = 0; jdx < WIDTH; ++jdx){
			if(board[idx][jdx] != 0){
				if(queenCheck(idx, jdx) == 0){
					return 0;
				}
			}
		}
	}
	return 1;
}

void boardNull(){
	for (int i = 0; i < HEIGHT; ++i){
		for (int j = 0; j < WIDTH; ++j){
			board[i][j] = 0;
		}
	}
}

void boardPrint(){
	for (int i = 0; i < HEIGHT; ++i){
		for (int j = 0; j < WIDTH; ++j){
			printf("%2d", board[i][j]);
		}
		printf("\n");
	}
}

int queens(int queensNumber){
	if(boardCheck() == 0) return 0;
	if(queensNumber == QUEENS + 1) return 1;

	for (int idx = 0; idx < HEIGHT; ++idx){
		for(int jdx = 0; jdx < WIDTH; ++jdx){
			if(board[idx][jdx] == 0){
				board[idx][jdx] = queensNumber;
				if(queens(queensNumber + 1))
					return 1;
				board[idx][jdx] = 0;
			}
		}
	}
	return 0;
}

int main(int argc, char const *argv[]){
	
	boardNull();
	queens(1);
	boardPrint();
	return 0;
}