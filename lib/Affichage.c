#include "Affichage.h"

static void StockProduit(char* unNomFichier, produit unProduit)
{
	unFichier = fopen(unNomFichier, a);
	if (unFichier != NULL)
    {
        fputs(unProduit.nom + "|" + unProduit.id + "|" + unProduit.prix + "|" + unProduit.stock + "|" + unProduit.baisseStock + "\n", unFichier);        
        fclose(unFichier); // On ferme le fichier qui a été ouvert
    }
}
static void StockEntrepot(char* unNomFichier, entrepot unEntrepot)
{
	unFichier = fopen(unNomFichier, a);
	if (unFichier != NULL)
    {
        fputs(unEntrepot.nom "\n", unFichier);
        fclose(unFichier); // On ferme le fichier qui a été ouvert
    }
}
static void StockAll(char* unNomFichier, entrepot unEntrepot)
{
	StockEntrepot(unNomFichier, unEntrepot);
	for (i = 0; i < unEntrepot.Produit.size(); ++i)
    {
        StockProduit(unNomFichier, unEntrepot.Produit[i])
    }  
    fclose(unFichier); // On ferme le fichier qui a été ouvert
}
