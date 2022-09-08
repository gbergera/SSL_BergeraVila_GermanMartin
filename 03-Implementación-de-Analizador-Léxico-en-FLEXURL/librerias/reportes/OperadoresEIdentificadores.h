#include "libs.h"
/////////////////////////////////   OPERADORES Y CARACTERES DE PUNTUACION   /////////////////////////////////

struct nodoOpCarPuntc{
    char* cadena;
    int cantidad;
    struct nodoOpCarPuntc *sig; 
};

struct nodoOpCarPuntc* primerOpCarPuntc = NULL;

void insertarOperadorCaracterPuntc(char* cadena){
    if(primerOpCarPuntc == NULL){
        
        struct nodoOpCarPuntc* nuevo;
        nuevo = (struct nodoOpCarPuntc*)malloc(sizeof(struct nodoOpCarPuntc));
        nuevo->cadena = strdup(cadena);
        // strdup hace malloc((strlen(cadena)+1)*sizeof(char)); y strcpy(nuevo->cadena,cadena);
        nuevo->cantidad = 1;
        nuevo->sig = NULL;
        primerOpCarPuntc = nuevo; 
    }
    else{
        struct nodoOpCarPuntc* aux = primerOpCarPuntc;
        while((strcmp(cadena,aux->cadena) != 0) && aux->sig != NULL){ // si no existe el caracter y NO estoy parado en el ultimo de la lista
            aux = aux->sig;
        }

        if(aux->sig == NULL){ // si estoy parado en el ultimo de la lista
            struct nodoOpCarPuntc* nuevo;
            nuevo = (struct nodoOpCarPuntc*)malloc(sizeof(struct nodoOpCarPuntc));
            nuevo->cadena = strdup(cadena);
            // strdup hace malloc((strlen(cadena)+1)*sizeof(char)); y strcpy(nuevo->cadena,cadena);
            nuevo->cantidad = 1;
            nuevo->sig = NULL;
            aux->sig = nuevo;
        }
        else{ // si ya existe el caracter
            aux->cantidad = aux->cantidad +1;
        }
    }
}

void operadoresCaracteresPuntc(char* cadena){
    insertarOperadorCaracterPuntc(cadena);
}

void reporteOperadoresCaracteresPuntc(){
    printf("\nReporte Operadores/Caracteres de Puntuacion\n\n");
    struct nodoOpCarPuntc* aux = primerOpCarPuntc;
    if(primerOpCarPuntc==NULL)
        printf("\tNo se encontraron Operadores/Caracteres de Puntuacion\n");
    while(aux != NULL){
        printf("Operador/Caracter: %s\tCantidad: %d\n",aux->cadena,aux->cantidad);
        aux = aux->sig;
    }
} 

//////////////////////////  IDENTIFICADORES  ////////////////////////////////////

struct nodoID{
	char* cadena;
	int cantidad;
	struct nodoID* sig;		
};

struct nodoID* primerID = NULL;

int buscarIdentificador(char* cadena){
	struct nodoID* aux = primerID;
	while(strcmp(cadena,aux->cadena)!=0 && aux->sig != NULL){
		aux = aux->sig;
	}
	
	if(strcmp(cadena,aux->cadena)==0){
		aux->cantidad = aux->cantidad + 1;
		return 1;
	}
	else if(aux->sig == NULL){
		return 0;
	}		
}

int criterioOrdenamiento(char* cadena1,char* cadena2){
	
	int resultado = strcasecmp(cadena1,cadena2); 
	
	if(resultado < 0)		// Si minuscula1 tiene menor ascii devuelve < 0    	ej: a y z 
		return 0;
	else if(resultado > 0)	// Si minuscula1 tiene mayor ascii devuelve > 0		ej: z y a
		return 1;
	else{ // Caso cuando en minusculas son iguales			ej: A y a
		resultado = strcmp(cadena1,cadena2); // Comparo con las cadenas originales
		if(resultado < 0)
			return 0;   // Devuelve 0 cuando cadena1 es mayus antes de cadena2 	ej: A y a
		else 
			return 1;	// Devuelve 1 cuando cadena1 es mayus despues de cadena2 	ej: a y A
	}
}

void insertarIdentificadorOrdenado(char* cadena){
	if(primerID == NULL){ // si la lista esta vacia
		struct nodoID* nuevo;
		nuevo = (struct nodoID*)malloc(sizeof(struct nodoID));
        nuevo->cadena = strdup(cadena);
        // strdup hace malloc((strlen(cadena)+1)*sizeof(char)); y strcpy(nuevo->cadena,cadena);
		primerID = nuevo;
		strcpy(primerID->cadena,cadena);
		primerID->cantidad = 1;
		primerID->sig = NULL;
	}
	else{
		if(!(criterioOrdenamiento(cadena,primerID->cadena))){ // si el ID a insertar es el nuevo primero (o sea no tendria que avanzar con el criterio de ordenamiento)
			struct nodoID* nuevo;
			nuevo = (struct nodoID*)malloc(sizeof(struct nodoID));
        	nuevo->cadena = strdup(cadena);
        	// strdup hace malloc((strlen(cadena)+1)*sizeof(char)); y strcpy(nuevo->cadena,cadena);
			nuevo->sig = primerID;
			nuevo->cantidad = 1;
			primerID = nuevo;
		}
		else if(!buscarIdentificador(cadena)){ // si el ID ya estaba en la lista lo incremento de cantidad
			// si el ID no estaba en la lista lo inserto ordenado
			struct nodoID* aux = primerID;
			while(aux->sig != NULL && criterioOrdenamiento(cadena,aux->sig->cadena)){ // busco la posicion donde insertar el ID
				aux = aux->sig;
			}
			struct nodoID* nuevo;
			nuevo = (struct nodoID*)malloc(sizeof(struct nodoID));
        	nuevo->cadena = strdup(cadena);
        	// strdup hace malloc((strlen(cadena)+1)*sizeof(char)); y strcpy(nuevo->cadena,cadena);
			nuevo->cantidad = 1;
			nuevo->sig = aux->sig;
			aux->sig = nuevo;				
		}	
	}
}

void identificadores(char* cadena){
    insertarIdentificadorOrdenado(cadena);
}

void reporteIdentificadores(){
    printf("\nReporte Identificadores\n\n");
	struct nodoID* aux;
	aux = primerID;
	while(aux != NULL){
		printf("Identificador: %s\tcantidad: %d\n",aux->cadena,aux->cantidad);
		aux = aux->sig;
	}
    if (primerID == NULL){
        printf("\tNo se encontraron identificadores\n");
        }
}