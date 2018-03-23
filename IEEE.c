#include <stdio.h>

int binario(int n, int i)
{
    int k;
    for (i--; i >= 0; i--)
   {
      k = n >> i;
      if (k & 1)
          printf("1");
      else
         printf("0");
    }
}
typedef union
{
      float val;
      struct
      {
            unsigned int mantissa : 23;
            unsigned int exponente : 8;
            unsigned int signo : 1;
       } campo ;
} complemento;
int main()
{

    complemento IEEE ;
    printf("Corvertir numero decial a binario utilizando complemento IEEE\n");
    printf("Ingrese un numero: ");
    scanf("%f",&IEEE.val);
    printf("%d ",IEEE.campo.signo);
    binario(IEEE.campo.exponente, 8);
    printf(" ");
    binario(IEEE.campo.mantissa, 23);
    printf("\n");

return 0;
}
