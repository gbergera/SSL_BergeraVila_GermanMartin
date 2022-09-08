#include "libs.h"
/////////////////////////////////   LITERALES CADENAS   /////////////////////////////////

struct nodoLiteralCadena{
    char* cadena;
    int longitud;
    struct nodoLiteralCadena *sig; 
};
struct nodoLiteralCadena *primerLiteralCadena = NULL;

void insertarLiteralCadena(char* cadena){
    struct nodoLiteralCadena *nuevo;
    nuevo = (struct nodoLiteralCadena*)malloc(sizeof(struct nodoLiteralCadena));
    nuevo->cadena = strdup(cadena);
    nuevo->longitud = strlen(cadena)-2;
    nuevo->sig = NULL;

    if(primerLiteralCadena == NULL){
        primerLiteralCadena = nuevo;
    }
    else{
        struct nodoLiteralCadena* aux;
        aux = primerLiteralCadena;

        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void literalesCadena(char* cadena){
    insertarLiteralCadena(cadena);
}

void reporteLiteralesCadena(){
    printf("\nReporte Literales cadena\n\n");
    if(primerLiteralCadena==NULL)
        printf("\tNo se encontraron literales cadena\n");
    else{
        struct nodoLiteralCadena* aux; 
        aux = primerLiteralCadena; 
        while(aux != NULL){
            printf("%s\tLongitud: %d\n",aux->cadena,aux->longitud);
            aux = aux->sig;
        }
    }
}

/////////////////////////////////   PALABRAS RESERVADAS    /////////////////////////////////

struct nodoPalabraReservada{
    char* cadena;
    char* tipo;
    struct nodoPalabraReservada *sig; 
};

struct nodoPalabraReservada *primerPalabraReservada = NULL;

void insertarPalabraReservada(char* cadena,char* tipo){
    struct nodoPalabraReservada *nuevo;
    nuevo = (struct nodoPalabraReservada*)malloc(sizeof(struct nodoPalabraReservada));
    nuevo->cadena = strdup(cadena);
    nuevo->tipo = tipo;
    nuevo->sig = NULL;

    if(primerPalabraReservada == NULL){
        primerPalabraReservada = nuevo;
    }
    else{
        struct nodoPalabraReservada* aux;
        aux = primerPalabraReservada;

        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void palabrasReservadas(char* cadena,char* tipo){
    insertarPalabraReservada(cadena,tipo);
}

void reportePalabrasReservadas(){
    printf("\nReporte Palabras Reservadas\n\n");
    if(primerPalabraReservada==NULL)
        printf("\tNo se encontraron palabras reservadas\n");
    else{
        struct nodoPalabraReservada* aux;
        aux = primerPalabraReservada;
        while(aux != NULL){
            printf("%s\t(%s)\n",aux->cadena,aux->tipo);
            aux = aux->sig;
        }
    }
}