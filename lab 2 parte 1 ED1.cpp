#include <stdio.h>
#include <string.h>



int main(){
	char cad1[50];
	char cad2[50];


	printf("Introduzca la cadena 1: \n\n");
	scanf("%s", &cad1);
	printf("\n\n");
	printf("Por favor, introduzca la cadena que desea copiar en la cadena 1\n\n");
	scanf("%s", &cad2);
	printf("\n\n");
    printf("Cadena 1 actualizada: %s",strcpy(cad1, cad2) );


}
