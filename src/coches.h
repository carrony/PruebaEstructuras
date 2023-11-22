/*
 * coches.h
 *
 *  Created on: 22 nov 2023
 *      Author: Usuario
 */

#ifndef COCHES_H_
#define COCHES_H_
#define MAXMATRICULA 8
#define MAXBASTIDOR 20
#define MAXMARCA 30
#define MAXMODELO 30


//	struct t_coche {
//		char matricula[MAXMATRICULA];
//		int potencia;
//		char bastidor[MAXBASTIDOR];
//		char marca[MAXMARCA];
//		char modelo[MAXMODELO];
//		int kms;
//	};
//
//	typedef struct t_coche coche;

	typedef struct  {
		char matricula[MAXMATRICULA];
		int potencia;
		char bastidor[MAXBASTIDOR];
		char marca[MAXMARCA];
		char modelo[MAXMODELO];
		int kms;
	} coche;


	void pedirCoche(coche *c);
	void mostrarCoche(coche c);


#endif /* COCHES_H_ */
