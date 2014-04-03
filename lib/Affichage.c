#include "Affichage.h"

static void StockProduit(char* unNomFichier, produit unProduit)
{
    FILE* unFichier = NULL;
	unFichier = fopen(unNomFichier, "a");
	if (unFichier != NULL)
    {
        fprintf(unProduit.nom + "|" + unProduit.id + "|" + unProduit.prix + "|" + unProduit.stock + "|" + unProduit.baisseStock + "\n", unFichier);// On stock les produits un à un    
        fclose(unFichier); // On ferme le fichier qui a été ouvert
    }
}
static void StockEntrepot(char* unNomFichier, entrepot unEntrepot)
{
    FILE* unFichier = NULL;
	unFichier = fopen(unNomFichier, "a");
	if (unFichier != NULL)
    {
        fprintf(unEntrepot.nom  + "\n", unFichier);// On stock le nom de l'entrepot
        fclose(unFichier); // On ferme le fichier qui a été ouvert
    }
}
public void StockAll(char* unNomFichier, entrepot unEntrepot)
{
    int i;
	StockEntrepot(unNomFichier, unEntrepot); // On stock le nom de l'entrepot
	for (i = 0; i < 500; ++i)
    {
        StockProduit(unNomFichier, unEntrepot.Produit[i]); // On stock les produits un à un
    }  
    fclose(unFichier); // On ferme le fichier qui a été ouvert
}
void AffichageEntrepot(char* unNomFichier)
{
    FILE* unFichier = NULL;
    unFichier = fopen(unNomFichier, "r");
    if (unFichier != NULL)
    {

        fclose(unFichier); // On ferme le fichier qui a été ouvert
    }  

}
