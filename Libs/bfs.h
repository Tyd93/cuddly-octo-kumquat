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

void bfsGrafo(grafo *g, int raiz){ //el parametro es un indice que se usara en el grafo para hallar el nodo fuente.
	int u = 0; //iniciamos este int que nos servira de auxiliar para recorrer y operar.
	g->arreglo[raiz].color = 0; //marco gris la raiz
	cola *c;
	c = crearCola(); //Creo una cola vacia
	llegada(c,raiz); //encolo a el nodo raiz
	while(c->tamano == 0){
		u = atencion(c); //Quito de la cola a
		while(g->arreglo[u].listaAdyacente = NULL){
			if(g->arreglo[g->arreglo[u].listaAdyacente->numeroVertice].color == -1){ //pregunto si el vertice es blanco
				printf("%c -> %c\n", g->arreglo[u].nombre, g->arreglo[g->arreglo[u].listaAdyacente->numeroVertice].nombre); //imprimo el paso de vertices
				g->arreglo[g->arreglo[u].listaAdyacente->numeroVertice].color = 0;//marco como gris el nodo agregado
				llegada(c, g->arreglo[g->arreglo[u].listaAdyacente->numeroVertice].listaAdyacente->numeroVertice); //encolo el vertice visitado
			}
			g->arreglo[u].listaAdyacente = g->arreglo[u].listaAdyacente->siguiente; //en el caso de no encontrar nada, avanzo
		}
		g->arreglo[u].color = 1; //marco como negro el nodo ya completado
	}
}
