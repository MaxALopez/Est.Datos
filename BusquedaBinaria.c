#include <stdio.h>

int main()
{

	int tam;
	int i=0;
	int primero,ultimo,central;
	int num,cont=0;

	printf("Busqueda Binaria\n");
	printf("Ingese el tamaño del arreglo\n");
	scanf("%d",&tam);
	printf("Ingrese el numero que quiere buscar:\n");
	scanf("%d",&num);

	int arreglo[tam];

	primero = 0;
	ultimo = tam;

	central = (primero+ultimo)/2;

	for (i = 0; i < tam; i++)
	{
		arreglo[i] = i;
	}

	while(arreglo[i] != num && ultimo!=primero)
	{
		cont++;
		if (arreglo[central]== num)
		{
			printf("Numero encontrado\n");
			break;
		}
		if(arreglo[central] > num)
		{
			ultimo = central;
			central = (ultimo+primero)/2;
		}
		if (arreglo[central] < num)
		{
			primero = central;
			central = (ultimo+primero)/2;
		}
	}
	printf("Numero de busquedas %d",cont);

	return 0;
}
