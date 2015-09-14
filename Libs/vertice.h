#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

/*
*el eVecino nos dira "solo" una referencia al nodo.
*Ya que el nodo original esta en la lista de Adyacencia.
*/

typedef struct eVecino{
	int numeroVertice;
	struct eVecino *siguiente;
}vecino;

typedef struct eVertice{
	char nombre;
	int color; //-1 blanco, 0 gris, 1 negro.
	vecino *listaAdyacente;
}vertex;