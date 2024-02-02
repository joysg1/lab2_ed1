#include<stdio.h>
#include<string.h>

int main(){
	char cad1[50], cad2[50];
	int num;
	printf("Ingrese la cadena 1:\n\n");
	scanf("%s", &cad1);
    printf("\n");
    printf("Ingrese la cadena 2:\n\n");
	scanf("%s", &cad2);
	printf("\n");

	num=strcmp(cad1, cad2);
	if(num==0)
        printf("%s y %s son excatamente iguales",cad1,cad2);
    else
        printf("%s y %s no son iguales",cad1,cad2);

}
