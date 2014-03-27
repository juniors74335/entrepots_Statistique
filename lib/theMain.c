#include "Entrepot.h"
#include <stdio.h>
#include <stdlib.h>










int main(){
	Entrepot ptrUnEntrepot;
	entrepot unEntrepot;
	char unNom[50];

	scanf("%s",unNom);
	unEntrepot = CreateWarehouse(unNom);
	printf("%s",unEntrepot.nomMagasin);
	return 0;
}