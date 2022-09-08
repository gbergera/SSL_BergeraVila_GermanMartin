#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "librerias/libreria.h"

char pop(struct NodoPila **pila);
void push(struct NodoPila **pilaAutomata, char dato);
int automataColumna(char caracter, int estadoActual);

int main(int argc, char *argv[])
{
    int posicion = 0;         // la posicion la usamos para recorrer la cadena
    int estadoActual = 0;     // estadoActual para ir recorriendo los estados del automata
    int columnaAlaQuevoy = 0; // columnaAlaQuevoy la usamos para saber a que columna ir, ya sea la matriz $ o R, y asi cambiar el valor del estadoActual
    char cimaPila;            // cimaPila lo usamos para agarrar lo que hay en la cima de la Pila y asi fijarnos su estado
    char cadena[50] = "";     // aca almacenamos la cadena recibida
                              // la matriz 3x3 establecimos que en profundidad 1 esta el automata relacionado con el caracter $ y en la profundidad 2 relacionado con R
    int EstadoCimaPila[2][4][6] = {
        //prof: 2, filas: 4, columnas: 6
        // matriz $
        {
            {3, 1, 3, 0, 3, 3}, //q0
            {1, 1, 0, 3, 3, 3}, //q1+
            {3, 3, 0, 3, 3, 3}, //q2+
            {3, 3, 3, 3, 3, 3}, //q3
        },
        // matriz R
        //0 [1-9] { + , - , * , / }         "("    ")"       Otro caracter(columna error)
        {
            {3, 1, 3, 0, 3, 3}, //q0
            {1, 1, 0, 3, 2, 3}, //q1 Epsilon
            {3, 3, 0, 3, 2, 3}, //q2 Epsilon
            {3, 3, 3, 3, 3, 3}, //q3
        },
    };
    struct NodoPila *pilaAutomata = NULL; //vaciamos la Pila
    push(&pilaAutomata, '$');             // pusheamos $ para idicar que la Pila esta vacia

    printf("ingrese la cadena: ");

    gets(cadena); // guardo la cadena ingresada

    while (cadena[posicion] != '\0') // recorremos la cadena almacenada en el puntero
    {
        if (cadena[posicion] != ' ')
        {

            if (isEmpty(pilaAutomata) == 0)
            {
                cimaPila = pop(&pilaAutomata); // con POP saco lo que hay en la cima de la pila y lo almacenamos en la varaibel "cimaPila"
                if (cimaPila == 'E')
                {
                    printf("La expresion NO es sintacticamente correcta\n");
                    break;
                }
            }
            else
            {
                break;
            }
            // para establecer de un principio a que tabla ir, $ o R, preguntamos el estado de la pila
            if (cimaPila == '$')
            { // si la Pila esta vacia, primero analizamos el estado del automata para un caracter
                // despues en base al estadoActual modificamos la pila
                switch (estadoActual)
                {
                case 0: // (q0 , $)
                    if (cadena[posicion] == '(')
                    {
                        push(&pilaAutomata, '$');
                        push(&pilaAutomata, 'R');
                    }
                    else if (cadena[posicion] >= '1' && cadena[posicion] <= '9')
                    {
                        push(&pilaAutomata, '$');
                    }
                    else if (cadena[posicion] == ')' || cadena[posicion] == '0' || cadena[posicion] == '+' || cadena[posicion] == '-' || cadena[posicion] == '*' || cadena[posicion] == '/')
                    {
                        push(&pilaAutomata, 'E');
                    }
                    break;

                case 1: // (q1 , $)+
                    if (cadena[posicion] >= '0' && cadena[posicion] <= '9')
                    {
                        push(&pilaAutomata, '$');
                    }
                    else if (cadena[posicion] == '+' || cadena[posicion] == '-' || cadena[posicion] == '*' || cadena[posicion] == '/')
                    {
                        push(&pilaAutomata, '$');
                    }
                    else if (cadena[posicion] == '(' || cadena[posicion] == ')')
                    {
                        push(&pilaAutomata, 'E');
                    }
                    break;

                case 2: // (q2, $)+
                    if (cadena[posicion] == '+' || cadena[posicion] == '-' || cadena[posicion] == '*' || cadena[posicion] == '/')
                    {
                        push(&pilaAutomata, '$');
                    }
                    else if (cadena[posicion] == '(' || cadena[posicion] == ')' || cadena[posicion] >= '0' && cadena[posicion] <= '9')
                    {
                        push(&pilaAutomata, 'E');
                    }
                    break;
                }
                estadoActual = EstadoCimaPila[0][estadoActual][columnaAlaQuevoy = automataColumna(cadena[posicion], estadoActual)];
            }
            else if (cimaPila == 'R')
            { // en caso que la pila no este vacia, de la misma forma analizamos primero el estado del automata para uncaracter

                switch (estadoActual)
                {
                case 0: // (q0 , R)
                    if (cadena[posicion] == '(')
                    {
                        push(&pilaAutomata, 'R');
                        push(&pilaAutomata, 'R');
                    }
                    else if (cadena[posicion] >= '1' && cadena[posicion] <= '9')
                    {
                        push(&pilaAutomata, 'R');
                    }
                    else if (cadena[posicion] == ')' || cadena[posicion] == '0' || cadena[posicion] == '+' || cadena[posicion] == '-' || cadena[posicion] == '*' || cadena[posicion] == '/')
                    {
                        push(&pilaAutomata, 'E');
                    }
                    break;

                case 1: // (q1, R)
                    if (cadena[posicion] >= '0' && cadena[posicion] <= '9')
                    {
                        push(&pilaAutomata, 'R');
                    }
                    else if (cadena[posicion] == '+' || cadena[posicion] == '-' || cadena[posicion] == '*' || cadena[posicion] == '/')
                    {
                        push(&pilaAutomata, 'R');
                    }
                    else if (cadena[posicion] == '(')
                    {
                        push(&pilaAutomata, 'E');
                    }
                    break; // para el caso de (q2, epsilon), no se vuelve a ingresar nada en la pila, y el propia While continua el analisis sintactico

                case 2: // (q2, R)
                    if (cadena[posicion] == '+' || cadena[posicion] == '-' || cadena[posicion] == '*' || cadena[posicion] == '/')
                    {
                        push(&pilaAutomata, 'R');
                    }
                    else if (cadena[posicion] == '(' || cadena[posicion] >= '0' && cadena[posicion] <= '9')
                    {
                        push(&pilaAutomata, 'E');
                    }
                    break;
                    // para el caso de (q2, epsilon), no se vuelve a ingresar nada en la pila, y el propia While continua el analisis sintactico
                }
                estadoActual = EstadoCimaPila[1][estadoActual][columnaAlaQuevoy = automataColumna(cadena[posicion], estadoActual)];
            }
                }

        posicion++;
    }

    if (isEmpty(pilaAutomata) == 0 || cimaPila != 'E')
    {
        cimaPila = pop(&pilaAutomata);
    }

    if (cimaPila == '$') // pregunta si la pila esta vacia para analizar si el automata termino en un estado final
    {
        switch (estadoActual)
        {
        case 0:
            printf("La expresion NO es sintacticamente correcta\n");
            break;
        case 1:
            printf("La expresion  es sintacticamente correcta\n");
            break;

        case 2:
            printf("La expresion  es sintacticamente correcta\n");
            break;

        case 3:
            printf("La expresion NO es sintacticamente correcta\n");
            break;
        }
    }
    else if ((cimaPila == 'E' && cadena[posicion] == '\0') || cimaPila == 'R')
        printf("La expresion NO es sintacticamente correcta\n");

    getchar();
    return 0;
}
