char *readFile(char *filename) // Funcion de lectura
{
    char *buffer = NULL; // Donde va todo el "string" del archivo entrada
    int string_size, read_size;
    FILE *handler = fopen(filename, "r"); // Abre archivo de entrada

    if (handler)
    {
        fseek(handler, 0, SEEK_END); // Coloca la posicion actual al final del archivo 
        string_size = ftell(handler); // tamaño total del archivo
        rewind(handler); // vuelve a la posicion 0 

        buffer = (char *)malloc(sizeof(char) * (string_size + 1)); //Uso de memoria dinamica (liberar luego) 

        read_size = fread(buffer, sizeof(char), string_size, handler); //Lee 

        buffer[string_size] = '\0'; // Agrega final del "string"

        if (string_size != read_size) // si no es gual el tamaño leido que el del archivo
        {
            free(buffer); // libera
            buffer = NULL;
        }

        fclose(handler); // cierra archivo entrada
    }

    return buffer; // devuelve string
}

char *writeFile(FILE *handler, char *number, char *state) // fUncion de escritura
{
    int n = 10-strlen(number); // para que los espacios queden parejos toma 10 espacios y le resta la longitud del string 
    fprintf(handler, "%s %*s %s \n", number, n, "", state); // Graba en el archivo en salto de linea
}

void reset(char *filename) // Para eliminar el archivo de salioda anterior si ya se corrio 
{
    FILE *handler = fopen(filename, "w"); //Crea de nuevo el archivo salida
    fclose(handler); // cierra
}
