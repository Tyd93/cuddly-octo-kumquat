#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#define largo 20

/*
Modificare los nodos de dirección, ya que este grafo tendra que tener
más de dos direcciones.
Al principio lo trate como una lista enlazada.
08:35 08/09/2015
*/

typedef struct tNodo{
	//struct nodo 
	char nombre[largo]; //Largo maximo de nuestros participantes de la red social.
	int color; // Se manejara el color como una variable entera. 0 es blanco, 1 es gris, 2 es negro.
}nodo;

typedef struct tLista{
	int V;
	nodo **
}grafo;



/*
	Esbozo primario de lo que sería esta red social, la cual
	nos permitiria hacer una busqueda en profundidad y a lo ancho
	para aplicar los algoritmos de BFS y DFS.
	07-09-2015 21:28
*/

/*Usare lista enlazada
 * de adyacencia
 *08:59 08/09/2015
 * /
 
