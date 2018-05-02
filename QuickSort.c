#include<stdio.h>

void quicksort(int arg[100],int primero,int ultimo,int tam){
   int i,j,k;
   int pivote, temp;

   if(primero<ultimo){
      pivote=primero;
      i=primero;
      j=ultimo;

      while(i<j){
         while(arg[i]<=arg[pivote]&&i<ultimo)
            i++;
         while(arg[j]>arg[pivote])
            j--;
         if(i<j){
            temp=arg[i];
            arg[i]=arg[j];
            arg[j]=temp;
         }
      }

      temp=arg[pivote];
      arg[pivote]=arg[j];
      arg[j]=temp;
      printf("\n" );
      for(k=0;k<tam;k++)
      {
         printf("%d",arg[k]);
         printf("\t" );
      }
      quicksort(arg,primero,j-1,tam);
      quicksort(arg,j+1,ultimo,tam);

   }
}

int main(){
   int i, tam; // tam = tamaño del arreglo
   int aux = 1;

   printf("Ingrese la cantidad de elementos: ");
   scanf("%d",&tam);

   int arg[tam];

   for(i=0;i<tam;i++)
   {
      printf("Ingrese el elemento #%d: ",aux);
      scanf("%d",&arg[i]);
      printf("\n");
      aux++;
   }
   quicksort(arg,0,tam-1,tam);
   printf("\n");
   printf("Elemento ordenado: ");
   for(i=0;i<tam;i++)
      printf(" %d",arg[i]);

   return 0;
}
