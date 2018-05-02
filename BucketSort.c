#include<stdio.h>

void BinSort(int Arreglo[], int num)
{
 int i, j;
 int cont[num];
 for(i=0; i < num; i++)
 {
  cont[i] = 0;
 }
 for(i=0; i < num; i++)
 {
  (cont[Arreglo[i]])++;
 }
 for(i=0,j=0; i < num; i++)
 {
  for(; cont[i]>0;(cont[i])--)
  {
   Arreglo[j++] = i;
  }
 }
}
int main()
{
 int num;
 int i;
 int cont=1;
 printf("Ingrese la cantidad de elementos: ");
 scanf("%d",&num);
 int arreglo[num];
 for(i = 0; i < num; i++ )
 {
  printf("Ingrese el elemento#%d:",cont);
  scanf("%d",&arreglo[i]);
  printf("\n");
  cont++;
 }
 printf("El arreglo ordenado es: ");
 printf("\n");
 BinSort(arreglo, num);
 for (i = 0;i < num;i++)
 {
  printf("%d ",arreglo[i]);
 }
 return 0;
}
