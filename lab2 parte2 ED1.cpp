#include<stdio.h>
#include<string.h>

int main(){
	char cad1[50], cad2[50];

	printf("Ingrese la cadena 1\n\n");
	scanf("%s", &cad1);
	printf("\n\n");
    printf("Ingrese la cadena 2\n\n");
	scanf("%s", &cad2);
	printf("\n\n");
    printf("Resultado de concatenar cadena 1 y cadena 2: %s\n\n",strcat(cad1, cad2) );
}
