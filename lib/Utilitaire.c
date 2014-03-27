#include "Utilitaire.h"
#include <stdio.h>

entrepot CreateWarehouse(char * unNom)
{
	int i;
	entrepot unEntrepot;
	unEntrepot.nomMagasin = unNom;
	for (i = 0; i < Produit.size(); ++i)
	{
		unEntrepot.Produit[i] = 0;
	}
}

void PrintWarehouse (Warehouse myWarehouse)
{
	printf("nom magasin : %s, id produit : %s, nom produit : %s, stock : %s, baisse stock : %s ", nomMagasin, idProduit, nomProduit, Stock, BaisseStock);
}
