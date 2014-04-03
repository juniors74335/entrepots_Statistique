#include "Affichage.h"

static void StockProduit(char* unNomFichier, produit unProduit)
{
    FILE* unFichier = NULL;
	unFichier = fopen(unNomFichier, "a");
	if (unFichier != NULL)
    {
        fprintf(unFichier, "%s|%d|%f|%d|%d\n", unProduit.nom, unProduit.id, unProduit.prix, unProduit.stock, unProduit.baisseStock);// On stock les produits un à un    
        fclose(unFichier); // On ferme le fichier qui a été ouvert
    }
}
static void StockEntrepot(char* unNomFichier, entrepot unEntrepot)
{
    FILE* unFichier = NULL;
	unFichier = fopen(unNomFichier, "a");
	if (unFichier != NULL)
    {
        fprintf(unFichier, "%s\n", unEntrepot.nomMagasin);// On stock le nom de l'entrepot
        fclose(unFichier); // On ferme le fichier qui a été ouvert
    }
}
void StockAll(char* unNomFichier, entrepot unEntrepot)
{
    int i;
	StockEntrepot(unNomFichier, unEntrepot); // On stock le nom de l'entrepot
	for (i = 0; i < 500; ++i)
    {
        StockProduit(unNomFichier, unEntrepot.Produit[i]); // On stock les produits un à un
    }  
}
/*void AffichageEntrepot(char* unNomFichier)
{
    FILE* unFichier = NULL;
    unFichier = fopen(unNomFichier, "r");
    if (unFichier != NULL)
    {

        fclose(unFichier); // On ferme le fichier qui a été ouvert
    }  

}*/
