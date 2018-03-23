#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void binario2dec(int n)
{
		if ( n != 0)
		{
				binario2dec ( n / 2);
				printf ("%d", n % 2);
		}
}

int main(){

    int op;
    int num=0,num2,temp=0;
    char opcion;
    double binario,decimal;
    do{
    printf("Calculadora decimales a binarios y viceversa.\n");
    printf("1-Decimal a binario.\n");
    printf("2-Binario a decimal\n");
    printf("Selecciona una opcion: ");
    scanf("%d",&op);
    if(op == 1){
        int numero;

		printf ("Introduce un numero: ");
		scanf ("%d", &numero);

		binario2dec(numero);
		printf ("\n");
    }else if (op == 2){
            printf("Introduce el numero en binario (0 y 1): ");
            scanf("%lf",&binario);
            while(((int)(binario/10)!=0)){
                num2 = (int)binario%10;
                decimal = decimal + num2 * pow(2,temp);
                temp++;
                binario = (int)(binario/10);
            }
            decimal = decimal + binario * pow(2,temp);
            printf("El numero en decimal es: %.0lf \n",decimal);
        } else {
            printf("Opcion invalida :( \n");
        }
    printf("Intentar de nuevo? Si = s y No = cualquier otra tecla: ");
    scanf("%s",&opcion);
    system("cls");
    }while(opcion == 's');
    return 0;
}
