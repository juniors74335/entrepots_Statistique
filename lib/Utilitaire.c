#include "Utilitaire.h"

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