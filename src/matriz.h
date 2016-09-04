#ifndef __MATRIZ__
#define __MATRIZ__
#include "basics.h"

// definicion de TDA matriz
typedef struct matriz{
	int** casillas;
	int filas;
	int columnas;
}Matriz;


/* CRUD de un TDA
 * CRUD es el acronimo de Create, Read, Update y Delete
 * por lo que el CRUD de un Tipo de Dato Abstracto, se refiere al conjunto de funciones
 * que permiten que este dato pueda ser: 
 * 		creado (con espacio de memoria asignado correctamete)
 * 		leido (puede ser retornando un string o como sea necesario en la situacion)
 *		actualizado (capacidad de cambiar sus valores internos)
 *		eliminado (liberando su espacio en memoria)
 */

// Create matriz
Matriz nuevaMatriz(int m, int n);

// Read matriz
void mostrarMatriz(Matriz m);

// Update matriz

// void updateCell(Matriz m, int fila, int col, int valor);

// Delete matriz

void deleteMatriz(Matriz m);

#endif