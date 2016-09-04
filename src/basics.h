#ifndef __BASICS__
#define __BASICS__
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define flag printf("\n**FLAG: linea %d\n\n",__LINE__)
#define init(x) (x*)malloc(sizeof(x))
#define initn(x,n) (x*)malloc(sizeof(x)*n)

// Definicion de String y Bool
typedef char* String;
typedef enum bool {FALSE, TRUE} Bool;


// Declaracion de funciones relacionadas con String

/**
	fileContents
	@param String
	@return String  
*/
String fileContents(String filename);
int str_repetition(String base, String pattern);


#endif