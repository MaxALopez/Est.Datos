#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int op; //Opcion ingresada por el usuario
    int tam; // tamaño del arreglo
    int i,j,aux=0;
    int minimo=0,val=1;
    int k;

    printf("Algoritmos de ordenamiento.(Orden ascendente)\n");
    printf("Ingrese el tamanio del arreglo: ");
    scanf("%d",&tam);
    printf("1-Bubblesort\n");
    printf("2-Selection Sort\n");
    printf("Seleccione una opcion: ");
    scanf("%d",&op);
    printf("\n");
    int arg[tam];

    for (i=0;i<tam;i++)
    {
        printf("Ingrese el valor %d : \n",val);
        scanf("%d",&arg[i]);
        val++;
    }
    printf("El arreglo es:\n");
    for (i=0;i<tam;i++)
    {
         printf("\t");
        printf("%d",arg[i]);
    }
    printf("\n");
    switch(op)
    {
    case 1:
        for(i=0;i<tam;i++)
        {
            for(j=0;j<tam-i;j++)
            {
                if(arg[j]>arg[j+1])
                {
                        aux = arg[j];
                        arg[j] = arg[j+1];
                        arg[j+1] = aux;
                        printf("\n");
                for(k=0;k<tam;k++)
                {
                    printf("\t");
                    printf("%d",arg[k]);
                }
              }
            }
        }
        printf("\nEl arreglo ordenado es:\n");
        for (i=0;i<tam;i++)
        {
         printf("\t");
         printf("%d",arg[i]);
        }
        break;
    case 2:
        for(i=0;i<tam-1;i++)
        {
            minimo = i;
            for(j=i+1;j<tam;j++)
            {
                if(arg[j]<arg[minimo])
                    minimo = j;
            }
             aux = arg[i];
             arg[i] = arg[minimo];
             arg[minimo] = aux;
            printf("\n");
            for(k=0;k<tam;k++)
            {
             printf("\t");
             printf("%d",arg[k]);
            }
        }
        printf("\nEl arreglo ordenado es:\n");
        for (i=0;i<tam;i++)
        {
         printf("\t");
         printf("%d",arg[i]);
        }
        break;
        default:
        printf("Opcion Incorrecta\n");
        break;
    }

return 0;
}
