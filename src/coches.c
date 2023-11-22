/*
 * coches.c
 *
 *  Created on: 22 nov 2023
 *      Author: Usuario
 */
#include "coches.h"
#include <stdio.h>

void pedirCoche(coche *c) {
	puts("Introduce Matricula:");
	fflush(stdout);
	scanf("%s", c->matricula);

	puts("Potencia: ");
	fflush(stdout);
	scanf("%d", &c->potencia);

	puts("Bastidor: ");
	// borra el buffer
	fflush(stdin);
	fflush(stdout);
	scanf("%s", c->bastidor);

	puts("Marca: ");
	fflush(stdout);
	scanf("%s", c->marca);

	puts("modelo: ");
	fflush(stdout);
	scanf("%s", c->modelo);

	puts("Kilometros: ");
	fflush(stdout);
	scanf("%d", &c->kms);
}


void mostrarCoche(coche c) {
	printf("Matricula: %s\n", c.matricula);
	printf("Potencia: %d\n", c.potencia);
	printf("Bastidor: %s\n", c.bastidor);
	printf("Marca: %s\n", c.marca);
	printf("Modelo: %s\n", c.modelo);
	printf("Kilómetros: %d\n", c.kms);
}
