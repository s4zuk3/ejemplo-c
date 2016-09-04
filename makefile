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
TDAS=$(wildcard $(SRC_D)/*.h)
SRCS=$(wildcard $(SRC_D)/*.c)
OBJS_=$(SRCS:.c=.o)
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
#  $^ : repite los prerequisitos

$(OBJ_D)/%.o: $(SRC_D)/%.c $(TDAS)
	$(CC) -c -o $@ $< 

all : $(OBJS)
	$(CC) -o $(PROGRAMA) $^

# es buena practica que exista la regla 'clean', la cual se encargue de eliminar todos los archivos creados por el makefile
# para que esta regla este bien implementada, se debe incluir tambien lo siguiente
.PHONY : clean

clean :
	rm -f -r $(OBJ_D)/*.o & rm $(PROGRAMA)