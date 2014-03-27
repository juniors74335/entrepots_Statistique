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


typedef struct entrepot* Entrepot;
typedef struct entrepot entrepot;
typedef struct produit produit;



int CreateProduct(Entrepot monEntrepot, produit monProduit);
void ChangeStockProduct(Entrepot monEntrepot,int idProduit,int nbrProduit);
int StockBas(Entrepot monEntrepot,int nbrStockMax);