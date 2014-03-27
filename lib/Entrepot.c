#include "Entrepot.h"

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