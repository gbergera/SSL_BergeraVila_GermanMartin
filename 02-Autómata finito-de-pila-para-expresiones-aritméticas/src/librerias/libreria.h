#include <stdio.h>
#include <stdlib.h>

struct NodoPila
{
    char dato;
    struct NodoPila *siguiente;
};

struct NodoPila *nuevoNodo(char dato)
{
    struct NodoPila *nodoPila = (struct NodoPila *)malloc(sizeof(struct NodoPila));
    nodoPila->dato = dato;
    nodoPila->siguiente = NULL;
    return nodoPila;
}

int isEmpty(struct NodoPila *pilaAutomata)
{
    return pilaAutomata == NULL ? 1 : 0;
}

void push(struct NodoPila **pilaAutomata, char dato) // Recibo la pila y el dato el cual quiero ingresar
{
    struct NodoPila *nodoPila = nuevoNodo(dato); // se crea una estructura temporal que apunta a un nuevo nodo con los datos recibidos
    nodoPila->siguiente = *pilaAutomata;         // luego se enlaza el nuevo nodo creado y se apunto la posicion siguiente a donde esta apuntando la pila enlazando asi el dato
    *pilaAutomata = nodoPila;                    // Se asigna la informacion de la pila creada a la pila original
}

char pop(struct NodoPila **pila) //recibo la pila a la cual se le va a remover un valor
{
    struct NodoPila *nodoTemporal = *pila; // creo una estructura temporal donde guardo la informacion del nodo de la pila original
    *pila = (*pila)->siguiente;            // apunta al Nodo que le sigue
    char popeado = nodoTemporal->dato;     // almaceno en una variable el caracter a analizar

    free(nodoTemporal); // limpio el nodo temporal

    return popeado; // devuelvo caracter para analizarlo
}

int automataColumna(char caracter, int estadoActual)
{
    int columnaAlaQuevoy = 0;

    switch (estadoActual)
    {
    case 0:
        if (caracter == '(')
            //columna 0
            columnaAlaQuevoy = 3;

        else if (caracter >= '1' && caracter <= '9')
            //columna [1-9]
            columnaAlaQuevoy = 1;

        else
            // columna Error
            columnaAlaQuevoy = 5;

        break;

    case 1: // el estado actual es 1
        if (caracter >= '0' && caracter <= '9')
            //columna [1-9]
            columnaAlaQuevoy = 0;

        else if (caracter == '+' || caracter == '-' || caracter == '*' || caracter == '/')

            columnaAlaQuevoy = 2;

        else if (caracter == ')')
            //columna ')'
            columnaAlaQuevoy = 4;

        else
            // columna Error
            columnaAlaQuevoy = 5;

        break;

    case 2: //el estado actual es 2
        if (caracter == '+' || caracter == '-' || caracter == '*' || caracter == '/')
            //columna
            columnaAlaQuevoy = 2;

        else if (caracter == ')')
            //columna ')'
            columnaAlaQuevoy = 4;
        else
            // columna Error
            columnaAlaQuevoy = 5;

        break;
    }
    return columnaAlaQuevoy;
}
