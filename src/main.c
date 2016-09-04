#include "matriz.h"
#include "basics.h"

int main(int argc, char* argv[]){
	int x=atoi(argv[1]),y=atoi(argv[2]);
	Matriz m = nuevaMatriz(x,y);
	mostrarMatriz(m);
	flag;
	int i,j;
	for(i=0;i<m.filas;i++){
		for(j=0;j<m.columnas;j++){
			m.casillas[i][j]=i+j;
		}
	}
	mostrarMatriz(m);
	flag;
	deleteMatriz(m);
	m=nuevaMatriz(y,x);
	mostrarMatriz(m);
	exit(0);
}