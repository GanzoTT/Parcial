#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUFFER_SIZE 1024

// Función para verificar si un carácter es un delimitador de palabra
int es_delimitador(char c) {
    return isspace(c) || ispunct(c);
}

// Función para contar las apariciones de la palabra clave en una línea
int contar_coincidencias(char *linea, const char *palabra_clave) {
    int count = 0;
    char *ptr = linea;
    size_t palabra_len = strlen(palabra_clave);

    while ((ptr = strstr(ptr, palabra_clave)) != NULL) {
        // Verificar si la coincidencia es una palabra completa
        if ((ptr == linea || es_delimitador(*(ptr - 1))) && es_delimitador(*(ptr + palabra_len))) {
            count++;
        }
        ptr += palabra_len; // Avanzar el puntero para buscar más coincidencias
    }

    return count;
}

int main(int argc, char *argv[]) {
    // Verificar el número de argumentos
    if (argc != 3) {
        fprintf(stderr, "Uso: %s <archivo> <palabra_clave>\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *nombre_archivo = argv[1];
    const char *palabra_clave = argv[2];
    FILE *archivo = fopen(nombre_archivo, "r");
    char linea[BUFFER_SIZE];
    int total_coincidencias = 0;

    // Verificar si el archivo se abrió correctamente
    if (archivo == NULL) {
        perror("Error al abrir el archivo");
        return EXIT_FAILURE;
    }

    // Leer el archivo línea por línea
    while (fgets(linea, sizeof(linea), archivo)) {
        total_coincidencias += contar_coincidencias(linea, palabra_clave);
    }

    // Cerrar el archivo
    fclose(archivo);

    // Imprimir el resultado
    printf("La palabra '%s' se repite %d veces en el texto.\n", palabra_clave, total_coincidencias);

    return EXIT_SUCCESS;
}

