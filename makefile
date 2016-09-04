PROGRAMA=test
# Makefile de ejemplo
# los comentarios se ponen con un gato (como en python)

# primero se pueden declarar variables

# generalmente se usa una variable CC para el C Compiler (Compilador de C) 
CC=gcc

# luego, suele existir una variable CFLAGS para las opciones del compilador (tambien llamadas Flags o banderas)


# tambien se puede definir las rutas de las carpetas a utilizar
SRC_D=src
OBJ_D=obj

# se pueden usar variables para buscar automaticamente los archivos
# con la funcion wildcard, se buscara de forma automatica los archivos que cumplan ciertas caracteristicas
# en este caso, TDAS y SRCS buscaran todos los archivos .h y .c dentro del directorio SRC_D
TDAS=$(wildcard $(SRC_D)/*.h)
SRCS=$(wildcard $(SRC_D)/*.c)

# en esta linea, OBJS_ tendra los mismos nombres de archivos que SRCS, considerando solo los .c
# y reemplazando el .c por un .o, para asi tener los nombres de los objetos que se deben compilar
OBJS_=$(SRCS:.c=.o)

# la funcion subst reemplaza strings utilizando la siguiente formula:
# subst _textoAReemplazar_, _reemplazarPor_, _textoBase_
# por lo que en este caso cambiara el nombre de la carpeta de SRC_D por la carpeta definida en OBJ_D
OBJS=$(subst $(SRC_D),$(OBJ_D),$(OBJS_))

# finalmente, vienen las 'reglas' del make. por defecto make buscara el primer proceso para
# para estas reglas, se tiene la siguiente sintaxis
# regla : prerequisito
# (tab) receta
# donde la regla es un nombre declarado como un string, el prerequisito (opcional) puede ser 
# la existencia de archivos o el llamado a otra regla y la receta es el comando de consola a ejecutar
# en estas reglas se pueden usar las variables definidas previamente y tambien ciertos caracteres especiales
# para usar una variable, se antepone un $ y se envuelve en parentesis. por ejemplo $(CC)
# los caracteres especiales mas comunes son:
#	* : se usa como un comodin. por ejemplo *.c va a buscar todos los archivo con extension .c
# 	% : se utiliza como un comodin de igualdad, por ejemplo %.o: %.c
#  $@ : repite el nombre de la regla
#  $< : repite los prerequisitos

# esta primera regla lo que hace es que por cada objeto .o que necesite el programa, lo compilara por separado
$(OBJ_D)/%.o: $(SRC_D)/%.c $(TDAS)
	$(CC) -c -o $@ $< 

# esta regla es la que enlaza a todos los objetos en un unico programa ejecutable, el cual tendra el nombre
# definido en la variable PROGRAMA definida al inicio de este makefile
all : $(OBJS)
	$(CC) -o $(PROGRAMA) $^

# es buena practica que exista la regla 'clean', la cual se encargue de eliminar todos los archivos creados por el makefile
# para que esta regla este bien implementada, se debe incluir tambien lo siguiente
.PHONY : clean

# para ejecutar el make clean, se utiliza mediante la linea de comandos de forma 'make clean'
clean :
	rm -f -r $(OBJ_D)/*.o & rm $(PROGRAMA)