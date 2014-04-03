#include "Entrepot.h"
#include <stdio.h>
#include <stdlib.h>

int CreateProduct(Entrepot monEntrepot, produit monProduit) {
	int i;

	for (i = 0; i < 500; i++)
	{

		if(monEntrepot->Produit[i].id == monProduit.id) {
			return 0;
		}

	}
	for (i = 0; i < 500; i++)
	{
		if(monEntrepot->Produit[i].id == 0) {
			monEntrepot->Produit[i] = monProduit;
			return -1;
		}
	}
	return -1;
}


void ChangeStockProduct(Entrepot monEntrepot,int idProduit,int nbrProduit) {
	int i = 0;

	for (i = 0; i < 500; ++i)
	{
		if (monEntrepot->Produit[i].id == idProduit)
		{
			monEntrepot->Produit[i].stock += nbrProduit;
		}
	}
}

int StockBas(Entrepot monEntrepot,int nbrStockMax) {
	int i = 0;
	int nbrProduit = 0;

	for (i = 0; i < 500; i++)
	{
		if(monEntrepot->Produit[i].stock <= nbrStockMax) {
			nbrProduit++;
		}
	}
	return nbrProduit;
}


entrepot CreateWarehouse(char* unNom)
{
	int i;
	entrepot unEntrepot;
	unEntrepot.nomMagasin = unNom;
	for (i = 0; i < 500; ++i)
	{
		unEntrepot.Produit[i].id = 0;
	}
	return unEntrepot;
}


void PrintWarehouse(Entrepot monEntrepot)
{
	int i;
	printf("nom magasin : %s\n", monEntrepot->nomMagasin);
	for (i = 0; i < 500; i++)
	{
		if(monEntrepot->Produit[i].id != 0)
			printf("id produit : %d, nom produit : %s, stock : %d, baisse stock : %d \n",monEntrepot->Produit[i].id, monEntrepot->Produit[i].nom, monEntrepot->Produit[i].stock, monEntrepot->Produit[i].baisseStock);
	}
	
}