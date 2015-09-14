#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef VERTICE_H
#include "vertice.h"
#define VERTICE_H
#endif

#ifndef GRAPH_H
#include "graph.h"
#define GRAPH_H
#endif

//Defino la cola para trabajar exclusivamente el grafo.
typedef struct eCola{
	int tamano; 
	vecino *inicio, *final;//basicamente guardara el numero del vertice en el arreglo
}cola;

//Funcion muy importante para ver si la cola esta vacia

int esVaciaCola(cola *c){
	if(c->tamano == 0){
		return 1;
	}
	else{
		return 0;
	}
}

//Inicializo la cola, vacia, con tamaño cero
//para posteriores operaciones.
cola *crearCola(){
	cola *aux = (cola *)malloc(sizeof(cola));
	aux->tamano = 0;
	aux->inicio = NULL;
	aux->final = NULL;
	return aux;
}


//Para mi, es más comodo guardar el vecino,
//que al final es la "clave" para los datos en la lista
//de adyacencia.
void llegada(cola *c,int num){
	if(c->tamano == 0){
		vecino *auxNodo = (vecino *)malloc(sizeof(vecino));
		auxNodo->numeroVertice = num;
		c->inicio = auxNodo;
		c->final = auxNodo;
		auxNodo->siguiente = NULL;
		c->tamano++;
	}
	else{
		vecino *auxNodo = (vecino *)malloc(sizeof(vecino));
		auxNodo->numeroVertice = num;
		auxNodo->siguiente = NULL;
		c->final->siguiente = auxNodo;
		c->final = auxNodo;
		c->tamano++;
	}
}

int atencion(cola *c){
	if(c->tamano == 0){
		printf("error\n");
		return -1;
	}
	else if(c->tamano == 1){
		int auxInt = 0;
		vecino *auxNodo;
		auxNodo = c->inicio;
		c->inicio = NULL; //libero inicio y final
		c->final = NULL;
		auxInt = auxNodo->numeroVertice;
		free(auxNodo);
		c->tamano--;
		return(auxInt);
	}
	else{
		int auxInt = 0;
		vecino *auxNodo;
		auxNodo = c->inicio;
		c->inicio = c->inicio->siguiente;
		auxInt = auxNodo->numeroVertice;
		free(auxNodo);
		c->tamano--;
		return(auxInt);
	}
}