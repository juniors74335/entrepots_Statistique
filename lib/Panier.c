#include "Panier.h"
#include <stdio.h>
#include <stdlib.h>

int CreatePanier(Panier monPanier, produit monProduit) {
	int i;

	for (i = 0; i < 50; i++)
	{

		if(monPanier->Produit[i].id == monProduit.id) {
			return 0;
		}

	}
	for (i = 0; i < 50; i++)
	{
		if(monPanier->Produit[i].id == 0) {
			monPanier->Produit[i] = monProduit;
			return -1;
		}
	}
	return -1;
}