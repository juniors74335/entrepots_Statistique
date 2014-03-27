#include "Entrepot.h"
#include <stdio.h>
#include <stdlib.h>










int main(){
	Entrepot ptrUnEntrepot;
	entrepot unEntrepot;
	char unNom[50];
	produit monProduit;

	scanf("%s",unNom);
	unEntrepot = CreateWarehouse(unNom);
	ptrUnEntrepot = &unEntrepot;
	printf("%s",ptrUnEntrepot->nomMagasin);
	monProduit.
	return 0;
}