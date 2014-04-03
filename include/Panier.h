#ifndef PANIER_H
#define PANIER_H

#include <stdio.h>
#include <stdlib.h>


struct produit
{
	char nom[50];
	int id;
	float prix;
	int quantite;
};

struct panier
{
	struct produit Produit[50];
};

typedef struct panier* Panier;
typedef struct panier panier;
typedef struct produit produit;

void CreatePanier(Panier monPanier);
void AddProduct();

#endif