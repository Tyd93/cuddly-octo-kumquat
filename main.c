#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#ifndef VERTICE_H
#include "Libs/vertice.h"
#define VERTICE_H
#endif

#ifndef GRAPH_H
#include "Libs/graph.h"
#define GRAPH_H
#endif

#define V 8
#define A 12

int main(int argc, char const *argv[]){
	//Creamos el grafo
	int verti = V;
	grafo *g1 = crearGrafo(verti);
	return 0;
}