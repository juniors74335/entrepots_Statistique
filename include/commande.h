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

void CancelComm(commande uneCommande);
void ValideComm(commande uneCommande);
void SaveComm(commande uneCommande);
void AffichComm(commande uneCommande);


#endif