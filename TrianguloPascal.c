#include <stdio.h>

int main(){

   int arg[11];
   int triPas=5; //Tamaño del triangulo
   int var=0;
   int i,j;

   for (i=1; i<=triPas ; i++)
   {

    for (j=var; j>=0; j--)
    {
        if(j == var || j == 0)
        {
            arg[j] = 1;
        }
        else
        {
            arg[j] = arg[j] + arg[j-1];
        }
    }
        var++;
        printf("\n");
        for (j=1; j<=triPas-i; j++)
             printf("   ");

        for(j=0; j<var; j++)
        {
             printf("%3d   ", arg[j]);
        }
   }
return 0;
}
