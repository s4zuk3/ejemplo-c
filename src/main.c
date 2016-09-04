/**
 * @file main.c
 * Este es un ejemplo de como organizar los programas en C
 * este archivo solo contiene el bloque de "main", y hace uso
 * de las funciones declaradas en basics.h
 * 
 * @author Pablo Ulloa
 * @version 1.0.1
 */
#include "basics.h"

/**
 * Funcion main 
 * recibe argumentos via consola el primer argumento corresponde a la ruta de 
 * un archivo de texto, relativa al programa el segundo argumento corresponde 
 * a una palabra que se busca dentro de este texto
 * @param int argc corresponde a la cantidad de argumentos
 * @param char* argv[] corresponde a un arreglo de strings con los argumentos entregados por consola
 */
int main(int argc, char* argv[]){
	String nombreArchivo=argv[1];
	String buscar=argv[2];
	printf("El archivo a leer es: %s\n\n",nombreArchivo);
	String contenido=fileContents(nombreArchivo);
	flag;
	printf("%s\n", contenido);
	int repeticiones=str_repetition(contenido,buscar);
	printf("Se encontro %d veces la palabra %s\n", repeticiones,buscar);
	exit(0);
}