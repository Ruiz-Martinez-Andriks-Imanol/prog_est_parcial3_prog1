/* Autor: Andriks Imanol Ruiz M�rtinez, Realizado: 28/04/2022
Escuela: Universidad del Valle de M�xico Campus Villahermosa
Materia: Programaci�n Estructurada 
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programaci�n Estructurada<br>
Muestra el uso de:
  
    -Variables enteros y en cadena
    -printf para mostrar mensajes y variables
    -fgets
    -scanf
    -El uso de include para las librer�as
    -Librer�as de la funci�n string.h
    -Uso de condicionales
    -Archivos en cpp y tipo Header
    -#define MAX
    -Ciclos
    -fflush
    -Funciones
    -FILE: open/close
    -Comentarios para la documentaci�n interna del programa
*/ 
#include<stdio.h>
#include"milibreria.h"
//Principal
int main(){
	//Declaraciones
	char nombre[50],c;	
	FILE *f;
	int n=0, lineas=0;
	leers("Nombre del archivo: ", nombre, 50);
	//Abrir el arhivo en modo lectura
	f=fopen(nombre,"r");
	//Verificar si se abrio correctamente el archivo
	if(f==NULL){ //Condicional
		printf("Error al tratar de abrir el archivo\n");
	}
	else {//Proceso
		while (1){
			c=fgetc(f); //Leer un caracter del archivo
			printf("%c",c);
			n++;
			if(c==EOF){
				break;
			}
			else if(c==10){
				lineas++;
			}
		}
		//Cerrar
		fclose(f);
		printf("\n----------->El archivo contiene %d caracteres\n",n);
		printf("\n----------->El archivo contiene %d lineas\n",lineas); //Salida
	}
	return 0;
}
