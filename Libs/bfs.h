#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef COLA_H
#include "cola.h"
#define COLA_H
#endif

#ifndef VERTICE_H
#include "vertice.h"
#define VERTICE_H
#endif

#ifndef GRAPH_H
#include "graph.h"
#define GRAPH_H
#endif

/*
*Programa BFS hecho en C
*Lo primordial es agregar una funcion de impresion
*Dentro del codigo BFS.
*/

void bfsGrafo(grafo *g, int nodoFuente){ //el parametro es un indice que se usara en el grafo para hallar el nodo fuente.
	g->arreglo[nodoFuente].color = 0;
	int padre
}