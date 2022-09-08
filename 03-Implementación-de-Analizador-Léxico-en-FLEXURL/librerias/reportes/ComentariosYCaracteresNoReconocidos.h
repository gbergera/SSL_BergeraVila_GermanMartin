#include "libs.h"
//////////////////////////  COMENTARIOS  ////////////////////////////////////

struct nodoComentarios{
	char* cadena;
	char* tipo;
	struct nodoComentarios* sig;		
};

struct nodoComentarios *primerComentario = NULL;

void insertarComentarios(char* cadena,char* tipo){
    struct nodoComentarios *nuevo;
    nuevo = (struct nodoComentarios*)malloc(sizeof(struct nodoComentarios));
    nuevo->cadena = strdup(cadena);
    nuevo->tipo = tipo;
    nuevo->sig = NULL;

    if(primerComentario == NULL){
        primerComentario = nuevo;
    }
    else{
        struct nodoComentarios* aux;
        aux = primerComentario;

        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void comentarios(char* cadena,char* tipo){
    insertarComentarios(cadena,tipo);
}

void reporteComentarios(){
    printf("\nReporte Comentarios\n\n");
    if(primerComentario == NULL)
        printf("\tNo se encontraron comentarios\n");
    else{
        struct nodoComentarios* aux;
        aux = primerComentario;
        while(aux != NULL){
            printf("%s\n%s\n\n",aux->tipo,aux->cadena);
            aux = aux->sig;
        }
    }
}

//////////////////////////  CARACTERES NO RECONOCIDOS  ////////////////////////////////////

struct nodoCarNoReconocidos{
	char* cadena;
	int linea;
	struct nodoCarNoReconocidos* sig;		
};

struct nodoCarNoReconocidos *primerCarNoReconocido = NULL;

void insertarCarNoReconocidos(char* cadena,int linea){
    struct nodoCarNoReconocidos *nuevo;
    nuevo = (struct nodoCarNoReconocidos*)malloc(sizeof(struct nodoCarNoReconocidos));
    nuevo->cadena = strdup(cadena);
    nuevo->linea = linea;
    nuevo->sig = NULL;

    if(primerCarNoReconocido == NULL){
        primerCarNoReconocido = nuevo;
    }
    else{
        struct nodoCarNoReconocidos* aux;
        aux = primerCarNoReconocido;

        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

char cadenaNoReconocidos[100]="";

void caracNoReconocidos(char* caracterNoReconocido,int linea){
    
    // Cuando el caracter no reconocido NO es un espacio y NO es un salto de linea
    if(strcmp(caracterNoReconocido," ")!=0 && strcmp(caracterNoReconocido,"\n")!=0){ 
        strcat(cadenaNoReconocidos,caracterNoReconocido);
    }
    else{            
        if(strcmp(cadenaNoReconocidos,"")!=0){ // Cuando la cadena de no reconocidos no está vacia
            if(strcmp(caracterNoReconocido," ")==0) // Cuando el caracter no reconocido es un espacio
                insertarCarNoReconocidos(cadenaNoReconocidos,linea);
            else                                    // Cuando el caracter no reconocido es un salto de linea
                insertarCarNoReconocidos(cadenaNoReconocidos,linea-1);
            
            strcpy(cadenaNoReconocidos,"");
        }
    }
}

void reporteCaracNoReconocidos(){
    printf("\nReporte Cadenas de caracteres no reconocidos\n\n");
    if(primerCarNoReconocido == NULL)
        printf("\tNo se encontraron cadenas de caracteres no reconocidos\n\n");
    else{
        struct nodoCarNoReconocidos* aux;
        aux = primerCarNoReconocido;
        while(aux != NULL){
            printf("Cadena: %s\tlinea: %d\n",aux->cadena,aux->linea);
            aux = aux->sig;
        }
    }
}
