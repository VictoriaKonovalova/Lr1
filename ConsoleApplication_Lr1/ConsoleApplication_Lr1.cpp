﻿#include <iostream>
using namespace std;
int main() {
	/* Объявление двумерного массива*/
	const int N = 2, M = 3;
	int A[N][M];
	/*заполняем элементы матрицы с клавиатуры построчно*/
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			cin >> A[i][j];

	
	for (i = 0; i < N; i++) {  
		for (j = 0; j < M; j++)  
			cout << A[i][j] << " ";
		cout << endl; 
	}
	return 0;
}