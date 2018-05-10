#include <stdio.h>
#include <stdlib.h>

typedef int* TRIARR;

TRIARR triNew(int N) {

	TRIARR array = malloc(N * N * sizeof(int));

	for (int y = 0; y < N; y++)
		for(int x = 0; x < N; x++) 
			*(array + x*N + y) = 0;

	return array;
}

int triStore(TRIARR as, int N, int row, int col, int val) {

	if(row > N || col > N || col > row || N < 0 || row < 0 || col < 0 || as == NULL) {
		return -1;
	}

	*(as + row*N + col) = val;

	return 0;
}

int triFetch(TRIARR as, int N, int row, int col) {
	
	if(row > N || col > N || col > row || N < 0 || row < 0 || col < 0 || as == NULL) {
		return -1;
	}

	return *(as + row*N + col);

}