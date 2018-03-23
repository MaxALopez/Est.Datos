#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int opcion;

    printf("OPCIONES: \n");
    printf("1-Numeros romanos.\n");
    printf("2-Torre de asteriscos.\n");
    printf("Elejir una opcion: ");
    scanf("%d",&opcion);
    if (opcion == 1){

    char romano[100];
	int valor[100];
	int n,i,numero=0;
	printf("Ingresa el numero en romano ");
	gets(romano);
	n=strlen(romano);
	//Programa 1
	for(i=0;i<n;i++){
		if(romano[i] == 'I' || romano[i] == 'i')
			valor[i]=1;
		if(romano[i] == 'V' || romano[i] == 'v')
			valor[i]=5;
		if(romano[i] == 'X' || romano[i] == 'x')
			valor[i]=10;
		if(romano[i] == 'L' || romano[i] == 'l')
			valor[i]=50;
		if(romano[i] == 'C' || romano[i] == 'c')
			valor[i]=100;
		if(romano[i] == 'D' || romano[i] == 'd')
			valor[i]=500;
		if(romano[i] == 'M' || romano[i] == 'm')
			valor[i]=1000;
	}
    for (i=0;i<n;i++){
        if(i==n-1){
			numero+=valor[i];
		}
        else if (valor[i]>=valor[i+1])
        {
            numero+=valor[i];
        }
        else if (valor[i]<=valor[i+1])
        {
            numero-=valor[i];
        }
    }
    printf("El total de la suma/resta es: %d ",numero);
    //Programa 2
    }else{

    int a,b,i,j;
    printf("Ingrese el tamaño de filas y columnas: ");
    scanf("%d %d", &a,&b);
    char filas[a];
    char columnas[b];

    for(i=1;i<=a;i++){

       for(j=1;j<=a-i;j++){

            printf(" ");
       }
       for (j=1; j<=(2*i-1);j++){
        printf("*");
    }
        printf("\n");
    }
    }
    return 0;
}
