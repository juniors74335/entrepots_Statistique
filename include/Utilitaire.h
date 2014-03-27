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
	struct Produit[500];
};

Entrepot CreateWarehouse(char * unNom);

typedef struct entrepot* Entrepot;
typedef struct entrepot entrepot;
typedef struct produit produit;