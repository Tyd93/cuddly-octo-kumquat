#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#ifndef VERTICE_H
#include "vertice.h"
#define VERTICE_H
#endif

typedef struct eGraph{
	int v; // Vertices
	int a; //aristas
	vertex *arreglo;
}grafo;

/*
*Crearemos el vertice con los datos recibidos
*/
vecino *crearVecino(int destino){
	vecino *aux = (vecino *)malloc(sizeof(vecino));
	aux->numeroVertice = destino;
	aux->siguiente = NULL;
	return aux; 
}


// Agregare los nombres automaticamente desde acá.
// En futuras versiones lo ideal seria hacerlo desde el main.
void inicializarLista(grafo *g){
	g->arreglo[0].nombre = "Salsipuedes";
	g->arreglo[1].nombre = "Peor es nada";
	g->arreglo[2].nombre = "Entrepiernas";
	g->arreglo[3].nombre = "La Calor";
	g->arreglo[4].nombre = "Chigualoco";
	g->arreglo[5].nombre = "Mortandad";
	g->arreglo[6].nombre = "Mississippi";
	g->arreglo[7].nombre = "Roma";
	for(int i = 0; i < g->v; i++){
		g->arreglo[i].color = -1;
	}
}

grafo *crearGrafo(int verti){
	grafo *gAux = (grafo *)malloc(sizeof(grafo));
	gAux->v = verti;
	gAux->arreglo = (vertex *)malloc(verti * sizeof(vertex));
	for (int i = 0; i < verti; i++){
		gAux->arreglo[i].listaAdyacente = NULL;
	}
	inicializarLista(gAux);
	return gAux;
}
/*
*Anadimos una conexion al principio del tipo no dirigida
*/
void agregarConexion(grafo *g, int origen, int destino){
	vecino *auxVecino = crearVecino(destino);
	auxVecino->siguiente = g->arreglo[origen].listaAdyacente;
	g->arreglo[destino].listaAdyacente = auxVecino;
	//Parte de lo no dirigido
	vecino *auxVecino2 = crearVecino(origen);
	auxVecino2->siguiente = g->arreglo[destino].listaAdyacente;
	g->arreglo[destino].listaAdyacente = auxVecino2;
}

/*
*Imprimo strings, el nombre de las ciudades.
*/

void imprimirGrafo(grafo *g){
	for (int v = 0; v < g->v; v++){
		vecino *auxPrint = g->arreglo[v].listaAdyacente;
		printf("Ciudades con ruta hacia \n%s", g->arreglo[v].nombre);
		while(auxPrint != NULL){
			printf("-> %s ", g->arreglo[auxPrint->numeroVertice].nombre);
			auxPrint = auxPrint->siguiente;
		}
		printf("\n");
	}
}