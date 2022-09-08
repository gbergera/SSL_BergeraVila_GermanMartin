#include "libs.h"

struct nodoConstante{
    char* cadena;
    int valor;
    struct nodoConstante *sig; 
};

struct nodoConstante *primerDecimal = NULL;
struct nodoConstante *primerOctal = NULL;
struct nodoConstante *primerHexadecimal = NULL;
struct nodoConstante *primerReal = NULL;
struct nodoConstante *primerCaracter = NULL;

/////////////////////////////////   CONSTANTES DECIMALES   /////////////////////////////////

void insertarConstanteDecimal(char* cadena){
    struct nodoConstante *nuevo;
    nuevo = (struct nodoConstante*)malloc(sizeof(struct nodoConstante));
    nuevo->cadena = strdup(cadena);
    // strdup hace malloc((strlen(cadena)+1)*sizeof(char)); y strcpy(nuevo->cadena,cadena);
    nuevo->valor = atoi(cadena);
    nuevo->sig = NULL;

    if(primerDecimal == NULL){
        primerDecimal = nuevo;
    }
    else{
        struct nodoConstante* aux;
        aux = primerDecimal;

        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void constantesDecimales(char* cadena){
    insertarConstanteDecimal(cadena);
}

void reporteConstantesDecimales(){
    printf("\nReporte Constantes Decimales\n\n");
    if(primerDecimal==NULL)
        printf("\tNo se encontraron constantes decimales\n");
    else{
        int totalAcumulado = 0;
        struct nodoConstante* aux; 
    
        aux = primerDecimal; 
        while(aux != NULL){
            printf("Cadena: %s\tValor: %d\n",aux->cadena,aux->valor);
            totalAcumulado += aux->valor;
            aux = aux->sig;
        }    
        printf("Total acumulado: %d\n",totalAcumulado);
    }    
}

/////////////////////////////////   CONSTANTES OCTALES   /////////////////////////////////

void insertarConstanteOctal(char* cadena){
    struct nodoConstante *nuevo;
    nuevo = (struct nodoConstante*)malloc(sizeof(struct nodoConstante));
    nuevo->cadena = strdup(cadena);
    nuevo->valor = strtol(cadena,NULL,8);
    nuevo->sig = NULL;

    if(primerOctal == NULL){
        primerOctal = nuevo;
    }
    else{
        struct nodoConstante* aux;
        aux = primerOctal;

        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void constantesOctales(char* cadena){
    insertarConstanteOctal(cadena);
}

void reporteConstantesOctales(){
    printf("\nReporte Constantes Octales\n\n");
    if(primerOctal==NULL)
        printf("\tNo se encontraron constantes octales\n");
    else{
        struct nodoConstante* aux; 
        aux = primerOctal; 
        while(aux != NULL){
            printf("Cadena: %s\tValor: %d\n",aux->cadena,aux->valor);
            aux = aux->sig;
        }
    }
}

/////////////////////////////////   CONSTANTES HEXADECIMALES   /////////////////////////////////

void insertarConstanteHexadecimal(char* cadena){
    struct nodoConstante *nuevo;
    nuevo = (struct nodoConstante*)malloc(sizeof(struct nodoConstante));
    nuevo->cadena = strdup(cadena);
    nuevo->valor = strtol(cadena,NULL,16);
    nuevo->sig = NULL;

    if(primerHexadecimal == NULL){
        primerHexadecimal = nuevo;
    }
    else{
        struct nodoConstante* aux;
        aux = primerHexadecimal;

        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void constantesHexadecimales(char* cadena){
    insertarConstanteHexadecimal(cadena);
}

void reporteConstantesHexadecimales(){
    printf("\nReporte Constantes Hexadecimales\n\n");
    if(primerHexadecimal==NULL)
        printf("\tNo se encontraron constantes hexadecimales\n");
    else{
        struct nodoConstante* aux; 
        aux = primerHexadecimal; 
        while(aux != NULL){
            printf("Cadena: %s\tValor: %d\n",aux->cadena,aux->valor);
            aux = aux->sig;
        }
    }
}

/////////////////////////////////   CONSTANTES REALES  /////////////////////////////////

void insertarConstanteReal(char* cadena){
    struct nodoConstante *nuevo;
    nuevo = (struct nodoConstante*)malloc(sizeof(struct nodoConstante));
    nuevo->cadena = strdup(cadena);
    nuevo->sig = NULL;

    if(primerReal == NULL){
        primerReal = nuevo;
    }
    else{
        struct nodoConstante* aux;
        aux = primerReal;

        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void constantesReales(char* cadena){
    insertarConstanteReal(cadena);
}

void reporteConstantesReales(){
    int parteEntera;
    double parteDecimal;
    double valor;

    printf("\nReporte Constantes Reales\n\n");
    struct nodoConstante* aux; 
    if(primerReal==NULL)
        printf("\tNo se encontraron constantes reales\n");
    else{
        aux = primerReal; 
        while(aux != NULL)
        {
            valor = atof(aux->cadena);
            parteEntera = (int) valor;
            parteDecimal = valor - parteEntera;

            printf("Cadena: %s\tParte entera: %d\tParte decimal: %f\n", aux->cadena, parteEntera, parteDecimal);
            aux = aux->sig;
        }
    }
}

////////////////////   CONSTANTES CARACTER   ///////////////////

void insertarConstanteCaracter(char* cadena){
    struct nodoConstante *nuevo;
    nuevo = (struct nodoConstante*)malloc(sizeof(struct nodoConstante));
    nuevo->cadena = strdup(cadena);
    nuevo->sig = NULL;

    if(primerCaracter == NULL){
        primerCaracter = nuevo;
    }
    else{
        struct nodoConstante* aux;
        aux = primerCaracter;

        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void constantesCaracter(char* cadena){
    insertarConstanteCaracter(cadena);
}

void reporteConstantesCaracter(){
    printf("\nReporte Constantes Caracter\n\n");
    if(primerCaracter==NULL)
        printf("\tNo se encontraron constantes caracter\n");
    else{
        struct nodoConstante* aux;
        aux = primerCaracter; 
        while(aux != NULL){
            printf("%s\n",aux->cadena);
            aux = aux->sig;
        }
    }
}
