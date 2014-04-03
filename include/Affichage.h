#ifndef AFFICHAGE_H
#define AFFICHAGE_H


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Entrepot.h"

static void StockProduit(FILE* unFichier, produit unProduit);
static void StockEntrepot(FILE* unFichier, entrepot unEntrepot);
void StockAll(char* unNomFichier, entrepot unEntrepot);
entrepot ExtractionEntrepot(char* unNomFichier);
void SaveComm(FILE* unFicComm, commande uneCommande);

#endif