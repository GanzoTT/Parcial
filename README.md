# Parcial
## 2do punto: Validador de Expresiones Lambda 

## Descripción

Este proyecto contiene un analizador que valida expresiones lambda simples usando Flex (anteriormente conocido como Lex). El analizador verifica si una línea de texto sigue un formato específico de una expresión lambda y muestra si la línea es aceptada o no.

## Archivos

- `lambda.l`: Archivo de especificaciones de Flex que contiene el analizador.
- `Makefile`: (Opcional) Archivo de construcción para compilar el analizador.

## Requisitos

- Flex (para generar el analizador a partir del archivo `.l`)
- Un compilador de C (como `gcc`)

## Cómo Compilar

1. **Guardar el archivo:**
   Guarda el código en un archivo llamado `lambda.l`.

2. **Generar el archivo C desde el archivo `.l`:**
   Abre una terminal y navega al directorio donde se encuentra `lambda.l`. Luego, ejecuta:
   ```bash
   lex lambda.l
   
3. **Compilar el archivo C generado:**
   Utiliza un compilador de C para compilar el archivo:
   ```bash
   gcc lex.yy.c -o a.out -lfl
   
  Aquí, -lfl es necesario para enlazar con la biblioteca Flex. Esto generará un archivo lex.yy.c.

**Preparar el archivo de entrada:** 
   Crea un archivo de texto que contenga las líneas que deseas validar. Por ejemplo, guarda el siguiente contenido en un archivo llamado `archivo.txt` y `archivonovalido.txt`: 
     
      archivo.txt:  myVar = lambda(x) : myFunction**3
      archivonovalido.txt:  myVar = lambda(x) : myFunction**abc
      
4. **Ejecutar el analizador:**
   Ejecuta el programa proporcionando el archivo de entrada como argumento:
   ```bash
   ./a.out archivo.txt
   
**Ejemplo de ejecución:** 

                     archivo.txt: ACEPTA
                     archivonovalido.txt: NO ACEPTA

En este ejemplo, las primeras dos líneas son aceptadas ya que cumplen con el formato esperado, mientras que la última línea no.

## 3er punto: Contador de Palabras Clave en un Archivo

Este proyecto proporciona un programa en C que cuenta las apariciones de una palabra clave específica en un archivo de texto. El programa asegura que la coincidencia sea una palabra completa y no una parte de otra palabra.

## Descripción

El programa lee un archivo de texto línea por línea y cuenta cuántas veces aparece una palabra clave específica. Solo se cuentan las coincidencias que son palabras completas, es decir, aquellas que están delimitadas por espacios u otros caracteres no alfabéticos.

## Archivos

- `palabras.c`: Código fuente en C que realiza la búsqueda y cuenta las coincidencias de la palabra clave.

## Requisitos

- Un compilador de C (como `gcc`)

## Cómo Compilar

1. **Guardar el archivo:**
   Guarda el código en un archivo llamado `palabras.c`.

2. **Compilar el código:**
   Abre una terminal y navega al directorio donde se encuentra `palabras.c`. Luego, ejecuta:
   ```bash
   gcc palabras.c -o palabras

## Cómo Ejecutar

1. **Preparar el archivo de entrada:**
   Crea un archivo de texto que contenga el texto en el que deseas buscar. Por ejemplo, guarda el siguiente contenido en un archivo llamado `archivoprueba.txt`:

         Este es un ejemplo de archivo de texto.
         La palabra clave puede estar en diferentes lugares.
         Por ejemplo, la palabra clave se repite varias veces.
         Cada vez que decimos "clave", se cuenta como una coincidencia.
         La palabra clave también puede estar al final de la línea clave.

2. **Ejecutar el programa:**
   Ejecuta el programa proporcionando el archivo de entrada y la palabra clave como argumentos:

   - Ejemplo de ejecución:
      ```bash
     ./palabras archivoprueba.txt clave

**Salida esperada:**

      La palabra 'clave' se repite 5 veces en el texto.

En este ejemplo, la palabra 'clave' aparece dos veces en el archivo texto.txt.


## 4to punto: Secuencia de pasos 

Este proyecto contiene dos implementaciones del algoritmo de la secuencia de pasos, uno en C y otro en Python.

## Archivos

- `pasos.c`: Implementación en C del algoritmo de la secuencia de Collatz.
- `pasos.py`: Implementación en Python del algoritmo de la secuencia de Collatz.

## Ejecución del Código

### Código en C

1. **Guardar el archivo:**
   Guarda el código en un archivo llamado `pasos.c`.

2. **Compilar el código:**
   Abre una terminal y navega al directorio donde se encuentra `pasos.c`. Luego, usa un compilador de C como `gcc` para compilar el código:
   ```bash
   gcc pasos.c -o pasos
### Código en Python

1. **Guardar el archivo:**
   Guarda el código en un archivo llamado `pasos.py`.

2. **Ejecutar el script:**
   Abre una terminal y navega al directorio donde se encuentra `pasos.py`. Luego, usa el intérprete de Python para ejecutar el script:
   ```bash
   python pasos.py
   python3 pasos.py
   
## Ejemplo de ejecución:
  ```bash
  Introduce un número entero positivo: 6
  
  Secuencia para 6:
  
  6 -> 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
  
  Finalizada en 8 pasos.
