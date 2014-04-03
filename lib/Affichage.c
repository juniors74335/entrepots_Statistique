#include "Affichage.h"

static void StockProduit(FILE* unFichier, produit unProduit)
{
	if (unFichier != NULL)
    {
        fprintf(unFichier, "%s|%d|%f|%d|%d\n", unProduit.nom, unProduit.id, unProduit.prix, unProduit.stock, unProduit.baisseStock);// On stock les produits un à un    
    }
}
static void StockEntrepot(FILE* unFichier, entrepot unEntrepot)
{
	if (unFichier != NULL)
    {
        fprintf(unFichier, "%s\n", unEntrepot.nomMagasin);// On stock le nom de l'entrepot
    }
}
void StockAll(char* unNomFichier, entrepot unEntrepot)
{
    int i;
    FILE* unFichier;
    unFichier = fopen(unNomFichier, "w");
	StockEntrepot(unFichier, unEntrepot); // On stock le nom de l'entrepot
	for (i = 0; i < 500; ++i)
    {
        StockProduit(unFichier, unEntrepot.Produit[i]); // On stock les produits un à un
    } 
    fclose(unFichier);
}
entrepot ExtractionEntrepot(char* unNomFichier)
{
    FILE* unFichier = NULL;
    unFichier = fopen(unNomFichier, "r");
    if (unFichier != NULL)
    {
        
    } 
    fclose(unFichier); // On ferme le fichier qui a été ouvert
}
