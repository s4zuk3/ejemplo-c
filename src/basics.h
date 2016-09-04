/**
 * @file basics.h
 * Este es un ejemplo de como organizar los programas en C
 * este archivo contiene las firmas de las funciones a definir
 * en basics.c
 * 
 * @author Pablo Ulloa
 * @version 1.0.1
 */

#ifndef __BASICS__
/**
 * @def __BASICS__
 * se define una constante de preprocesador para que no se 
 * sobreescriba los contenidos de este archivo
 */
#define __BASICS__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * @def flag
 * se define una constante de preprocesador para usar como debugger
 * al momento de utilizar flag; se escribe en consola una bandera
 * con el numero de linea donde se encuentra el flag
 */
#define flag printf("\n**FLAG: linea %d\n\n",__LINE__)

/**
 * @def init(x)
 * se define una funcion de preprocesador para facilitar el uso 
 * de malloc, de modo que al utilizar init(x); se ejecutara
 * (x*)malloc(sizeof(x));
 * @param x corresponde a un tipo de dato valido para el programa
 */
#define init(x) (x*)malloc(sizeof(x))

/**
 * @def initn(x,n)
 * se define una funcion de preprocesador para facilitar el uso 
 * de malloc, de modo que al utilizar initn(x,n); se ejecutara
 * (x*)malloc(sizeof(x)*n);
 * @param x corresponde a un tipo de dato valido para el programa
 * @param n corresponde a un entero que indica la cantidad de espacios se deben reservar
 */
#define initn(x,n) (x*)malloc(sizeof(x)*n)

// Definicion de String y Bool

/**
 * @typedef char* String
 * se define el tipo de dato String, el cual equivale a un puntero de caracteres
 */
typedef char* String;

/**
 * @typedef enum bool {FALSE, TRUE} Bool
 * se define el tipo de dato Bool, el cual equivale a un enum bool, donde se declara
 * que FALSE=0 y TRUE=1
 */
typedef enum bool {FALSE, TRUE} Bool;


/**
 * Funcion fileContents
 * recibe de argumento la ruta de un archivo a leer y retorna 
 * su contenido como un String
 * @param String filename corresponde a la ruta del archivo a leer
 * @return String buffer con el texto leido del archivo especificado
 */
String fileContents(String filename);

/**
 * Funcion str_repetition
 * recibe de argumento un string base y un string con un texto a 
 * buscar dentro del string base, para contar cuantas veces se repite
 * y retornar un entero con esta cantidad
 * @param String base corresponde al texto base dentro del cual se busca el patron
 * @param String pattern corresponde al texto a buscar en la base
 * @return int count con la cantidad de repeticiones de pattern
 */
int str_repetition(String base, String pattern);


#endif