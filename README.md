# Ejemplo de estructura de programa en C #

Este ejemplo consiste de 3 archivos fuente
*	main.c
*	basics.c
*	basics.h

Adicionalmente contiene 2 archivos utiles para la prueba del programa
*	makefile
*	texto.txt

Para compilar usando el makefile basta con lo siguiente:

### Linux ###
```bash
$ make makefile
```


En windows se debe primero editar el archivo makefile y a la constante PROGRAMA agregarle '.exe' al final

### Windows ###
```bash
> mingw32-make makefile
```

Finalmente, para ejecutar el programa puedes escribir en la consola (terminal):

### Linux ###
```bash
$ ./test "texto.txt" "hola soy un texto"
```

### Windows ###
```bash
> test "texto.txt" "hola soy un texto"
```
