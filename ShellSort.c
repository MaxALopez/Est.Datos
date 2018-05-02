#include <stdio.h>

int main()
{

	int num,cont=1;
	int i,j,k;
	int mitad,temp;

	printf("Algoritmo de ordenamiento Shell Sort\n");
	printf("Ingrese el numero de elementos:\n");
	scanf("%d",&num);

	int arreglo[num];

	for (i = 1; i <=num; ++i)
	{
		printf("Ingrese el elemento#%d:",cont);
		scanf("%d",&arreglo[i]);
		printf("\n");
		cont++;
	}

	mitad = num/2;

	while(mitad>0)
	{
		for (i = mitad+1; i <=num; i++)
		{
			j=i-mitad;

			while(j>0)
			{

				if(arreglo[j]>=arreglo[j+mitad])
				{

					temp = arreglo[j];
					arreglo[j] = arreglo[j+mitad];
					arreglo[j+mitad] = temp;
				}
				else
				{
					j=0;
				}
				j=j-mitad;
				printf("\n");
				for(k=1;k<=num;k++)
                {
                    printf("%d\t",arreglo[k]);
                }
			}
		}
		mitad = mitad/2;
	}
    printf("\n");
	printf("El arreglo ordenado es:\n");
	for (i = 1; i <=num; i++)
	{
		printf("%d\t",arreglo[i]);
	}

	return 0;
}
