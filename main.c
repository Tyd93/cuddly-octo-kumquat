#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#ifndef BFS_H
#include "Libs/bfs.h"
#define BFS_H
#endif

#ifndef DFS_H
#include "Libs/dfs.h"
#define DFS_H
#endif

#define V 8
#define A 12

int main(int argc, char const *argv[]){
	//Creamos el grafo
	int verti = V;
	grafo *g1 = crearGrafo(verti);
	inicializarLista(g1);
	agregarConexion(g1,0,2);//1
	agregarConexion(g1,0,5);//2
	agregarConexion(g1,0,6);//3
	agregarConexion(g1,1,4);//4
	agregarConexion(g1,1,5);//5
	agregarConexion(g1,1,7);//6
	agregarConexion(g1,2,3);//7
	agregarConexion(g1,3,7);//8
	agregarConexion(g1,4,5);//9
	agregarConexion(g1,4,6);//10
	agregarConexion(g1,4,7);//11
	agregarConexion(g1,2,6);//12

	//imprimo
	imprimirGrafo(g1);
	bfsGrafo(g1,5);
	return 0;
}