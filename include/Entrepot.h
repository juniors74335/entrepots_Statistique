#ifndef ENTREPOT_H
#define ENTREPOT_H




struct produit
{
	char* nom[50];
	int id;
	float prix;
	int stock;
	int baisseStock;
};

struct entrepot
{
	char* nomMagasin;
	struct produit Produit[500];
};


typedef struct entrepot* Entrepot;
typedef struct entrepot entrepot;
typedef struct produit produit;



entrepot CreateWarehouse(char* unNom);
int CreateProduct(Entrepot monEntrepot, produit monProduit);
void ChangeStockProduct(Entrepot monEntrepot,int idProduit,int nbrProduit);
int StockBas(Entrepot monEntrepot,int nbrStockMax);

#endif