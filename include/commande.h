#ifndef COMMANDE_H
#define COMMANDE_H

#include <stdio.h>
#include <stdlib.h>


struct commande
{
	int id;
	char etat;
	panier unPanier;
};

typedef struct commande commande;

void CancelComm();
void ValideComm();
void SaveComm();
void AffichComm();


#endif