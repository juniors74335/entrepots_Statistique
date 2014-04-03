#include "Panier.h"
#include <stdio.h>
#include <stdlib.h>

void CreatePanier(Panier monPanier) 
{
	int i;

	for (i = 0; i < 50; i++)
	{

		monPanier->Produit[i].id = 0;

	}
}