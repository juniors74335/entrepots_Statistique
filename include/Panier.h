struct produit
{
	char* nom[50];
	int id;
	float prix;
	int quantit�;
};

struct panier
{
	struct produit Produit;
};

typedef struct panier* Panier;
typedef struct panier panier;
typedef struct produit produit;