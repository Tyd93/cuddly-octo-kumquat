#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#ifndef GRAFO_H
#include "Libs/grafo.h"
#define GRAFO_H
#endif

int main(int argc, char const *argv[]){
	//Creamos el grafo
	int V = 5;
	grafo *g = crearGrafo(V);
	agregarArista(g, 0, 1);
	agregarArista(g, 0, 4);
	agregarArista(g, 1, 2);
	agregarArista(g, 1, 3);
	agregarArista(g, 1, 4);
	agregarArista(g, 2, 3);
	agregarArista(g, 3, 4);

	// imprime la lista de adyacencia
	imprimirGrafo(g);
	return 0;
}