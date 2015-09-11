#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#ifndef STRING_H
#include <string.h>
#define STRING_H
#endif

/*
*Estructura basica del nodo contenido
*en la lista de adyacencia de la cual
*se formara el grafo.
*/

typedef struct nodoA{
    int dest;
    char nombre[20];
    struct nodoA* sig;
}nodo;

/*
*Puntero al inicio de nuestra lista 
*de adyacencia.
*/

typedef struct listaAdy{
    struct nodoA *origen; //puntero al origen de la lista
}listaAd;

/*
*Esta estructura representara un arreglo de
*listas de adyacencia, mejor conocida
*como grafos.
*/

typedef struct eGrafo{
    int V;
    struct listaAdy* arreglo;
}grafo;

/*
*Función para crear nuevos nodos 
*en la lista de adyacencia.
*/

nodo *nuevoNodoA(int dest, char nombre[]){
    nodo *nuevoNodo = (nodo *) malloc(sizeof(nodo));
    nuevoNodo->dest = dest;
    nuevoNodo->nombre = nombre;
    nuevoNodo->sig = NULL;
    return nuevoNodo;
}

/*
*Función que nos permite 
*crear un grafo de VERTEX vertices.
*Si se desean más vertices, sientase 
*libre de modificar la variable VERTEX.
*/

grafo* crearGrafo(int V){
    grafo *g = (grafo *) malloc(sizeof(grafo));
    g->V = V;

    //Creamos el grafo y le asignamos el valor para el numero de vertices.
    g->arreglo = (listaAd *) malloc(V * sizeof(listaAd));

    //Inicializo cada lista de adyacencia como vacia,
    //haciendo de cada inicio un NULL.
    int i;
    for (i = 0; i < V; ++i){
        g->arreglo[i].origen = NULL;
    }
    return g;
}
 
/*
*Función que agregara una arista
*a nuestro grafo. La arista se agregara
*entre un vertice y otro.
*/

void agregarArista(grafo *g, int src, int dest, char nombre[]){
    //Agrega una arista desde un nodo de 
    //adyacencia a un nodo destino.
    //Nota: el nuevo nodo enlazado quedara en principio.
    nodo *nuevoNodo = nuevoNodoA(dest,nombre);
    nuevoNodo->sig = g->arreglo[src].origen;
    g->arreglo[src].origen = nuevoNodo;
 
    //Dado que el grafo en no dirigido,
    //tenemos que apuntar en ambas direcciones.
    nuevoNodo = nuevoNodoA(src, nombre);
    nuevoNodo->sig = g->arreglo[dest].origen;
    g->arreglo[dest].origen = nuevoNodo;
}
 
/*
*Funcion que nos permitira
*imprimir un grafo.
*/
void imprimirGrafo(grafo *g){
    int v;
    for (v = 0; v < g->V; ++v){
        nodo *pCrawl = g->arreglo[v].origen;
        printf("\n Lista de adyacencia del vertice %d\n origen ", v);
        while (pCrawl){
            printf("-> %s", pCrawl->nombre);
            pCrawl = pCrawl->sig;
        }
        printf("\n");
    }
}