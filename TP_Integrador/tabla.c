#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*----------------------------------------------------------------Estructuras--------------------------------------------------------------------------------------------------*/
typedef struct {
    char tipo[15];
    struct TipoParametro* sgte;
} TipoParametro;

typedef struct {
    char nombre[50];
    char tipo[15];
    TipoParametro* tiposParametros;    // Si no es funcion vale NULL
    struct Tabla* sgte;
} Tabla;

Tabla* tablaSimbolos = NULL;

/*----------------------------------------------------------------Funciones de Parametro----------------------------------------------------------------------------------------*/

TipoParametro* push(TipoParametro** pila, char nuevoTipo[15]) {
    TipoParametro* nuevoNodo = (TipoParametro*)malloc(sizeof(TipoParametro));
    strcpy(nuevoNodo->tipo, nuevoTipo);
    nuevoNodo->sgte = (*pila);
    (*pila) = nuevoNodo;
    return nuevoNodo;
}

TipoParametro* insertarArgumento(TipoParametro** pila, char nuevoArgumento[15]) {
    TipoParametro* nuevoNodo = (TipoParametro*)malloc(sizeof(TipoParametro));
    if ((*pila) == NULL) {
        nuevoNodo = push(pila, nuevoArgumento);
    }
    else {
        strcpy(nuevoNodo->tipo, nuevoArgumento);
        nuevoNodo->sgte = NULL;
        TipoParametro* aux = (*pila);
        while (aux->sgte != NULL) {
            aux = aux->sgte;
        }
        aux->sgte = nuevoNodo;
    }
    return nuevoNodo;
}

void mostrarTipos(TipoParametro** pila) {
    TipoParametro* aux = (*pila);
    while (aux != NULL) {
        if (aux->sgte != NULL)
            printf("%s, ", aux->tipo);
        else
            printf("%s", aux->tipo);
        aux = aux->sgte;
    }
}

int cantidadParametros(TipoParametro** pila) {
    TipoParametro* aux = *pila;
    int contador = 0;
    while (aux != NULL) {
        contador++;
        aux = aux->sgte;
    }
    return contador;
}

int compararParametros(TipoParametro** pila1, TipoParametro** pila2) {
    int flag = 0;    // sin errores: 0 --- error: 1
    if (cantidadParametros(pila1) != cantidadParametros(pila2)) {
        flag = 1;
    }
    else {
        TipoParametro* aux1 = *pila1;
        TipoParametro* aux2 = *pila2;
        while (aux1 != NULL) {
            if (strcmp(aux1->tipo, aux2->tipo) != 0) {
                flag = 1;
            }
            aux1 = aux1->sgte;
            aux2 = aux2->sgte;
        }
    }
    return flag;
}

/*----------------------------------------------------------------Funciones de Tabla----------------------------------------------------------------------------------------*/

Tabla* agregarSimbolo(char nuevoNombre[50], char nuevoTipo[15]) {
    Tabla* nuevoSimbolo = (Tabla*) malloc(sizeof(Tabla));
    strcpy(nuevoSimbolo->nombre, nuevoNombre);
    strcpy(nuevoSimbolo->tipo, nuevoTipo);
    nuevoSimbolo->tiposParametros = NULL;

    nuevoSimbolo->sgte = (Tabla*)tablaSimbolos;
    tablaSimbolos = (Tabla*)nuevoSimbolo;

    return nuevoSimbolo;
}

Tabla* buscarSimbolo(char nuevoNombre[50]) {
    Tabla* aux = tablaSimbolos;
    while (aux != NULL && strcmp(nuevoNombre, aux->nombre) != 0) {
        aux = aux->sgte;
    }
    
    return aux;
}