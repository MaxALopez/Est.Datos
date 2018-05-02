#include<stdio.h>

int main()
{
	int arg[100];
	int n,i,j,k;
	int temp;
	int cont = 1;

	printf("Ingrese el tamano del arreglo: ");
	scanf("%d",&n);
	printf("Ingrese los elementos del arreglo:");
	printf("\n");
	for(i=0;i<n;i++)
	{
	    printf("Elemento #%d: ",cont);
		scanf("%d",&arg[i]);
		cont++;
		printf("\n");

	}
	for(i=1;i<n;i++)
	{
		temp = arg[i];
		j=i-1;
		while(temp<arg[j] && j>=0)
		{
			arg[j+1] = arg[j];
			--j;
		}
		arg[j+1]=temp;
		for(k=0;k<n;k++)
        {
            printf("%d",arg[k]);
            printf("\t");
        }
        	printf("\n");
	}
    printf("\n");
	printf("Arreglo ordenado: ");
	printf("\n");
	for(i=0; i<n; i++)
		printf("%d\t",arg[i]);
    return 0;
}
