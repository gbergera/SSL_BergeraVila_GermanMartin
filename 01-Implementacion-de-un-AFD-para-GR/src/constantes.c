//Grupo 6 - C_Aprueba

/*Integrantes:
        Lischinsky
        Bergera Vila
        Jimenez Ferrer
        Gil de la cruz
        Beronne
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "./libreria.h"

int columna(int carcterASCII, int estadoAnterior)
{//la funcion "columna" se esta hecha para saber a que columna de la matriz de estados hay que ir
//la fila ya establece usando el valor que esta en "estadoActual"
//devuelve un numero entero "columnaAlaQuevoy" para saber a que columna ir en la matriz
    int columnaAlaQuevoy;
// la variable "estadoAnterior" se utiliza para controlar a que estado se puede ir y tambien para saber si la cadena resulta "NO RECONOCIDA"
    switch (estadoAnterior)
    {// el Switch utiliza el "estadoAnterior" para saber a que columnas se puede ir de la matriz, es decir,
    //estaria controlando a que estados puede ir pero teniendo en cuenta en que estado esta actualmente,
    // asi resulta mas facil establecer de que tipo es la cadena o si debe ir a la columna 5, que seria la columna que solo tiene estados de error en la matriz
    case 0: //el estado anterior es 0
        if (carcterASCII == '0')
        { //columna 0
            columnaAlaQuevoy = 0;
        }
        else if (carcterASCII >= '1' && carcterASCII <= '7')
        { //columna [1-7]
            columnaAlaQuevoy = 1;
        }
        else if (carcterASCII >= '8' && carcterASCII <= '9')
        { //[8-9]
            columnaAlaQuevoy = 2;
        }
        else
        { // columna Error
            columnaAlaQuevoy = 5;
        }
        break;
// en cada caso se analiza con IFs a que columna de la matriz ir, compara caracter por caracter usando como base el codigo ASCII
    case 1: // el estado anterior es 1
        if (carcterASCII == '0')
        { //columna 0
            columnaAlaQuevoy = 0;
        }
        else if (carcterASCII >= '1' && carcterASCII <= '7')
        { //columna [1-7]
            columnaAlaQuevoy = 1;
        }
        else if (carcterASCII >= 'X' && carcterASCII <= 'x')
        { //columna [xX]
            columnaAlaQuevoy = 4;
        }
        else
        { // columna Error
            columnaAlaQuevoy = 5;
        }
        break;

    case 2: //el estado anterior es 2
        if (carcterASCII == '0')
        { //columna 0
            columnaAlaQuevoy = 0;
        }
        else if (carcterASCII >= '1' && carcterASCII <= '7')
        { //columna [1-7]
            columnaAlaQuevoy = 1;
        }
        else if (carcterASCII >= '8' && carcterASCII <= '9')
        { //[8-9]
            columnaAlaQuevoy = 2;
        }
        else
        { // columna Error
            columnaAlaQuevoy = 5;
        }
        break;

    case 3: //el estado anterior es 3
        if (carcterASCII == '0')
        { //columna 0
            columnaAlaQuevoy = 0;
        }
        else if (carcterASCII >= '1' && carcterASCII <= '7')
        { //columna [1-7]
            columnaAlaQuevoy = 1;
        }
        else if (carcterASCII >= '8' && carcterASCII <= '9')
        { //[8-9]
            columnaAlaQuevoy = 2;
        }
        else if ((carcterASCII >= 'a' && carcterASCII <= 'f') || (carcterASCII >= 'A' && carcterASCII <= 'F'))
        { //columna [afA-F]
            columnaAlaQuevoy = 3;
        }
        else
        { // columna Error
            columnaAlaQuevoy = 5;
        }
        break;

    case 4: // el estdo anterior es 4
        if (carcterASCII == '0')
        { //columna 0
            columnaAlaQuevoy = 0;
        }
        else if (carcterASCII >= '1' && carcterASCII <= '7')
        { //columna [1-7]
            columnaAlaQuevoy = 1;
        }
        else if (carcterASCII >= '8' && carcterASCII <= '9')
        { //[8-9]
            columnaAlaQuevoy = 2;
        }
        else if ((carcterASCII >= 'a' && carcterASCII <= 'f') || (carcterASCII >= 'A' && carcterASCII <= 'F'))
        { //columna [afA-F]
            columnaAlaQuevoy = 3;
        }
        else
        { // columna Error
            columnaAlaQuevoy = 5;
        }
        break;

    case 5: // el estado anterior es 5
        if (carcterASCII == '0')
        { //columna 0
            columnaAlaQuevoy = 0;
        }
        else if (carcterASCII >= '1' && carcterASCII <= '7')
        { //columna [1-7]
            columnaAlaQuevoy = 1;
        }
        else
        { // columna Error
            columnaAlaQuevoy = 5;
        }
        break;
    }
    return columnaAlaQuevoy; // mejorar if else
}

char *stateToString(int state)
{
    char *printState = NULL;
    switch (state)
    {
    case 1:
        printState = "OCTAL";
        break;

    case 2:
        printState = "DECIMAL";
        break;

    case 4:
        printState = "HEXADECIMAL";
        break;

    case 5:
        printState = "OCTAL";
        break;

    case 6:
        printState = "NO RECONOCIDA";
        break;
    }

    return printState;
}

char *analice(char *number)
{
    int estadoActual = 0;
    int estadoAnterior = 0;
    int columnaAlaQuevoy;
    int posicion = 0;
// la variable "estadoActual" se usa para saber en que estados va pasando la cadena y para guarda cuando llegue al estado final y saber de que tipo es la cadena
//la variable "posicion" se usa para recorrer cada cadena, caracter por caracter
    int matriz[7][6] = {
        //0 [1-7] [8-9] [a-fA-F] [xX] Otro caracter(columna error)
        {1,   2,    2,     6,     6,        6}, //q0
        {5,   5,    6,     6,     3,        6}, //q1
        {2,   2,    2,     6,     6,        6}, //q2
        {4,   4,    4,     4,     6,        6}, //q3
        {4,   4,    4,     4,     6,        6}, //q4
        {5,   5,    6,     6,     6,        6}, //q5
        {6,   6,    6,     6,     6,        6}, //q6
    };
    while (number[posicion] != '\0')
    //el "WHILE" recorre posicion por posicion de la cadena, leyendo cada caracter
    {
        estadoAnterior = estadoActual;
        estadoActual = matriz[estadoActual][columnaAlaQuevoy = columna(number[posicion], estadoAnterior)];
    // el "estadoActual" se inicializa en 0 como si fuera el automata, empieza en q0
    // el "estadoActual" see actualiza caracter por caracter, por cada caracter leido se calcula a que columna ir con la funcion "columnaAlaQuevoy"
    // y para la fila se utiliza el mismo valor que esta en "estadoActual", ya que cada fila representaria cada estado Qn,
    // usando esta informacion actualizo el valor de "estadoActual" igualandolo a la posicion que calcule de la matriz de estados, que representaria a qeu estado ir
        posicion++;
    // se aumenta la "posicion" para que vaya recorriendo la cadena
    }

    return stateToString(estadoActual);
}

void splitPrint(char *entrada) // separa numero a numero, lo analiza y lo graba
{
    FILE *handler = fopen("Salida.txt", "a+"); // Concatena en la siguente linea
    char *number;
    number = strtok(entrada, ","); // Por cada numero en el string
    while (number != NULL) // mientras no sea el fin 
    {
        writeFile(handler, number, analice(number)); // magia (pasa el numero actual a la funcion analice para que devuelva UN ESTADO y luego ser grabado)
        number = strtok(NULL, ","); // siguiente
    }
    fclose(handler); // Cierra el archivo de salida 
}

int main(int argc, char const *argv[])
{
    reset("Salida.txt"); // llama a la funcion reset con el nombre de salida
    char *buffer = readFile("Entrada.txt"); // almacena en buffer el string 
    splitPrint(buffer); // se le pasa en string 

    free(buffer); // libera memoria
    system("Salida.txt"); //Abre TXT
    return 0;             //F
}