#include<stdio.h>
#include<windows.h>
#include<stdlib.h>






int main(){
    int x;
    char cad1[50];
	char cad2[50];
	int num;
	int num2;
	char b='a';
	char cad3[50];
	char *ptr;



    printf("Cargando por favor espere ");
    Sleep(950);
    printf(".");
    Sleep(950);
    printf(".");
    Sleep(950);
    printf(".\n\n\n");

    do{
        printf("Seleccione la opcion ha realizar \n\n");

        printf("1. COPIAR CADENAS \n");
        printf("2. CONCATENAR CADENAS \n");
        printf("3. COMPARAR CADENAS \n");
        printf("4. LONGITUD DE CADENA \n");
        printf("5. BUSCAR CARACTER EN UNA CADENA \n");
        printf("6. Salir \n\n");
        scanf("%d",&x);
        printf("\n\n");

    switch(x){
    case 1:




	printf("Introduzca la cadena 1: \n\n");
	scanf("%s", &cad1);
	printf("\n\n");
	printf("Por favor, introduzca la cadena que desea copiar en la cadena 1\n\n");
	scanf("%s", &cad2);
	printf("\n\n");
    printf("Cadena 1 actualizada: %s",strcpy(cad1, cad2) );
    printf("\n\n");


    break;


    case 2:

    printf("Ingrese la cadena 1\n\n");
	scanf("%s", &cad1);
	printf("\n\n");
    printf("Ingrese la cadena 2\n\n");
	scanf("%s", &cad2);
	printf("\n\n");
    printf("Resultado de concatenar cadena 1 y cadena 2: %s\n\n",strcat(cad1, cad2) );
    printf("\n\n");



    break;



    case 3:


	printf("Ingrese la cadena 1:\n\n");
	scanf("%s", &cad1);
    printf("\n");
    printf("Ingrese la cadena 2:\n\n");
	scanf("%s", &cad2);
	printf("\n");

	num=strcmp(cad1, cad2);
	if(num==0)
        printf("%s y %s son excatamente iguales\n\n",cad1,cad2);
    else
        printf("%s y %s no son iguales\n\n",cad1,cad2);





        break;



    case 4:
        printf("Ingrese la cadena 1\n\n");
        scanf("%s",cad1);
        printf("\n\n");

        num2=strlen(cad1);
        printf("La longitud de %s es %d\n\n\n",cad1,num2);


        break;



    case 5:
        printf("Ingrese la cadena 1\n\n");
        scanf("%s",&cad3);
        printf("\n");
        printf("Se buscara la vocal 'a' dentro de la cadena1 \n\n");


        ptr=strchr(cad3,b);
        if (*ptr==b)
            printf("%c si esta en la cadena1: %s\n\n\n",b,cad3);
        else
            printf("%c no esta en la cadena1: %s\n\n\n",b,cad3);



        break;



    case 6:
        printf("Gracias por utilizar el programa. \n\n");
        printf("Realizado por Guillermo Rivas & Joy Nelaton un 3 de Abril del 2019.\n\n");

        break;

    default:
        printf("Eleccion fuera de rango \n\n");



   }



    }while(x!=6);
























}
