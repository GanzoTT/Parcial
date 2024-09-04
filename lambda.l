%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex(void);
%}

%option noyywrap

%%

^[ \t]*[a-zA-Z_][a-zA-Z_0-9]*[ \t]*=[ \t]*lambda[ \t]*\([ \t]*[a-zA-Z_][a-zA-Z_0-9]*[ \t]*\)[ \t]*:[ \t]*[a-zA-Z_][a-zA-Z_0-9]*[ \t]*\*\*[ \t]*[0-9]+[ \t]*$ {
    printf("ACEPTA\n");
    exit(0);
}

.|\n { /* Ignorar otros caracteres y líneas */ }

%%

void yyerror(const char *s) {
    // No se usa, pero debe estar presente
}

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("fopen");
        return 1;
    }

    yyin = file;
    yylex();
    fclose(file);

    // Si el archivo no contiene ninguna expresión válida
    printf("NO ACEPTA\n");
    return 0;
}

