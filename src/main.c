#include "matriz.h"
#include "basics.h"

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