/*
 ============================================================================
 Name        : PruebaEstructuras.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "coches.h"

int main(void) {

	//coche c1;
	coche c2 = {"2222RRR",250,"FDSFSDGDSSV43","Mercedes", "SLK 320", 135789};
	coche c3;

//	puts("Introduce el coche: ");
//	//pedirCoche(&c1);
//
//	puts("Tu coche es ");
//	mostrarCoche(c1);

	puts("El coche definido por extension es ");
	mostrarCoche(c2);
	c3=c2; // hace una copia de los datos

	puts("El coche copiado es ");
	mostrarCoche(c3);


	strcpy(c3.modelo,"SLK 500");
	puts("\nEl coche 2 es ");
	mostrarCoche(c2);
	puts("\n\nEl coche 3 es ");
	mostrarCoche(c3);

	//c2.modelo=c3.modelo; // ERROR hay que usar strcpy
	strcpy(c2.modelo,c3.modelo);

	if (c2.potencia==c3.potencia) {
		printf("los dos coches tienen la misma potencia");
	}


	if(strcmp(c2.bastidor,c3.bastidor)==0) {
		printf("Los dos coches son iguales");
	} else {
		printf("Los dos coches son distintos");
	}

	puts("\nEl coche 2 es ");
	mostrarCoche(c2);
	puts("\n\nEl coche 3 es ");
	mostrarCoche(c3);

	return EXIT_SUCCESS;
}
