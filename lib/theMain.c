#include "Entrepot.h"
#include <stdio.h>
#include <stdlib.h>










int main(){
	Entrepot ptrUnEntrepot;
	entrepot unEntrepot;
	char unNom[50] = "\0";
	produit monProduit;
	int i;


	printf("Nom de mon entrepot :\n");
	scanf("%s",unNom);
	unEntrepot = CreateWarehouse(unNom);
	ptrUnEntrepot = &unEntrepot;
	printf("%s\n",ptrUnEntrepot->nomMagasin);


	for(i=1;i<6;i++) {
		printf("Nom de mon produit %d:\n",i);
		scanf("%s", monProduit.nom);

		monProduit.id = i;
		monProduit.prix = 12;
		monProduit.stock = 100;
		
		CreateProduct(ptrUnEntrepot,monProduit);
	}

	


	


	/*for(i=0;i< 500;i++) {
		if(ptrUnEntrepot->Produit[i].id != 0) {
			printf("Nom Produit : %s\n",ptrUnEntrepot->Produit[i].nom);
			printf("	Stock : %d\n",ptrUnEntrepot->Produit[i].stock);
		}
	}*/
	
	PrintWarehouse(ptrUnEntrepot);

	return 0;
}