#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#define largo 20

typedef struct tNodo{
	struct nodo *ant;
	struct nodo *sig;
	char nombre[largo]; //Largo maximo de nuestros participantes de la red social.
	int color; // Se manejara el color como una variable entera. 0 es blanco, 1 es gris, 2 es negro.
	int nUsuario; // Basicamente lo usare para enumerar los usuarios. Vere la utilidad de esta función más adelante.
}nodo;

typedef struct tLista{
	struct nodo *raiz;
	int total;
}red;

/*
	Esbozo primario de lo que sería esta red social, la cual
	nos permitiria hacer una busqueda en profundidad y a lo ancho
	para aplicar los algoritmos de BFS y DFS.
	07-09-2015 21:28
*/