#include "matriz.h"

Matriz nuevaMatriz(int m, int n){
	int i,j;
	Matriz* M = init(Matriz);
	M->filas=m;
	M->columnas=n;
	M->casillas=initn(int*,m);
	for(i=0;i<m;i++){
		M->casillas[i]=initn(int,n);
		for(j=0;j<n;j++){
			M->casillas[i][j]=0;
		}
	}
	return *M;
}

void mostrarMatriz(Matriz m){
	int i,j;
	for(i=0;i<m.filas;i++){
		for(j=0;j<m.columnas;j++){
			printf("|%d|",m.casillas[i][j]);
		}
		printf("\n");
	}
	return;
}

/*void updateCell(Matriz m, int fila, int col, int valor){
	m.casillas[fila][col]=valor;
	return;
}*/

void deleteMatriz(Matriz m){
	int i;
	for(i=0;i<m.filas;i++)free(m.casillas[i]);
	free(m.casillas);
	m.filas=0;
	m.columnas=0;
	return;
}
