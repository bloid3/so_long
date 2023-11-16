# Libft - Tu propia biblioteca estándar

![42 Logo](https://www.42.fr/wp-content/themes/42/images/42_logo_black.svg)

Este proyecto, llamado `libft`, es el primer proyecto que los estudiantes de la escuela 42 deben completar. El objetivo principal de `libft` es crear una biblioteca personalizada en C que contenga una serie de funciones útiles que se utilizarán en proyectos futuros. Esta biblioteca estándar personalizada facilita el desarrollo de otros proyectos, ya que permite a los estudiantes reutilizar sus propias funciones en lugar de depender exclusivamente de las funciones proporcionadas por la biblioteca estándar de C.

## Tabla de Contenidos

1. [Introducción](#introducción)
2. [Funcionalidades](#funcionalidades)
3. [Uso](#uso)
4. [Compilación](#compilación)
5. [Ejemplos](#ejemplos)
6. [Contribución](#contribución)
7. [Autor](#autor)
8. [Agradecimientos](#agradecimientos)

## Introducción

El proyecto `libft` es una introducción esencial al desarrollo en C y proporciona a los estudiantes una base sólida en programación en C. Consiste en la implementación de funciones básicas de la biblioteca estándar de C, como `malloc`, `free`, `read`, `write`, y muchas más, así como funciones adicionales que pueden ser útiles en futuros proyectos.

## Funcionalidades

La biblioteca `libft` contiene una variedad de funciones organizadas en varias categorías, incluyendo:

- Funciones de manejo de memoria
- Funciones de manejo de cadenas de caracteres
- Funciones de manejo de listas enlazadas
- Funciones de manejo de archivos y entrada/salida

## Uso

Para utilizar la biblioteca `libft` en tu proyecto, simplemente debes incluir el archivo de cabecera `libft.h` en tu código fuente y compilarlo junto con tus archivos.

```c

#include "libft.h"

int main() {
    ft_putstr("Hola, mundo!\n");
    return 0;
}

```
## Compilación

Puedes compilar tu proyecto junto con la biblioteca `libft` utilizando el compilador GCC (o cualquier otro de tu elección) de la siguiente manera:
gcc -o libft libft.c -L. -lft

## Ejemplos

El directorio test en este repositorio contiene ejemplos de uso de las funciones de la biblioteca libft. Puedes consultarlos para obtener ejemplos prácticos de cómo utilizar las funciones en tu proyecto.


## Contribución

Si deseas contribuir a la biblioteca libft, te invitamos a abrir solicitudes de extracción (pull requests) con tus mejoras o correcciones. Asegúrate de seguir las normas de estilo y buenas prácticas de la escuela 42.

## Autor
Este proyecto fue desarrollado por Pablo Pereira. Si tienes alguna pregunta o comentario sobre la biblioteca libft, no dudes en ponerte en contacto conmigo.

## Agradecimientos
Agradecemos a la escuela 42 por proporcionar la oportunidad de aprender y mejorar nuestras habilidades de programación en C mediante este proyecto.
