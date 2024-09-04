# Parcial
## Validador de Expresiones Lambda 2do punto

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
   gcc lex.yy.c -o lambda_validator -lfl
   
  Aquí, -lfl es necesario para enlazar con la biblioteca Flex. Esto generará un archivo lex.yy.c.

**Preparar el archivo de entrada:** 
   Crea un archivo de texto que contenga las líneas que deseas validar. Por ejemplo, guarda el siguiente contenido en un archivo llamado `archivo.txt` y `archivonovalido.txt`: 
     
      myVar = lambda(x) : myFunction**3
      myVar = lambda(x) : myFunction**abc
      
4. **Ejecutar el analizador:**
   Ejecuta el programa proporcionando el archivo de entrada como argumento:
   ```bash
   ./lambda archivo.txt
   
**Ejemplo de ejecución:**

archivo.txt: ACEPTA

archivonovalido.txt: NO ACEPTA

En este ejemplo, las primeras dos líneas son aceptadas ya que cumplen con el formato esperado, mientras que la última línea no.

## Secuencia de pasos 4to punto

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
