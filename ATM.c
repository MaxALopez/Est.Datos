#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct fecha {
unsigned dia,mes,anio;
};

struct tiempo{
unsigned hh,mm,ss;
};

struct registro_operaciones{
long numCuenta;
int cantidad;
int tipo_operacion;
int historial_cuenta[10];

struct fecha F;
struct tiempo T;
};

int main(){

    struct registro_operaciones atm;
    int saldo;
    int deposito;
    int retiro;
    int i,c=0;
    char op;

    time_t tiempo = time(NULL);
    struct tm *tlocal = localtime(&tiempo);
    char tiempo1[11];
    char tiempo2[11];
    strftime(tiempo1,11,"%d/%m/%y",tlocal);
    strftime(tiempo2,11,"%H:%M:%S",tlocal);

    saldo = 10000;
    atm.cantidad = saldo;

    printf("Bienvenidos a cajeros ATM MAX :D \n");
    printf("Ingresa su numero de cuenta: ");
    scanf("%li",&atm.numCuenta);

    do{
    printf("=====MENU=====\n");
    printf("Tipo de operacion a realizar: ");
    printf("\n1- Depositar.");
    printf("\n2- Retirar fondos");
    printf("\n3- Estado de cuenta \n");
    scanf("%d",&atm.tipo_operacion);

    if (atm.tipo_operacion == 1 ){
        printf("Ingrese la cantidad a depositar: ");
        scanf("%d",&deposito);
        atm.cantidad += deposito;
        printf("Su saldo actual es: ");
        printf("%d\n",atm.cantidad);
        printf("Fecha: %s\n",tiempo1);
        printf("Hora: %s\n",tiempo2);
        atm.historial_cuenta[c] = deposito;
        c++;

    }else if (atm.tipo_operacion == 2 ){
        printf("Ingrese la cantidad a retirar: ");
        scanf("%d",&retiro);

        if (retiro <= atm.cantidad){
             printf("Su saldo actual es: ");
             atm.cantidad-=retiro;
             printf("%d\n",atm.cantidad);
             printf("Fecha: %s\n",tiempo1);
             printf("Hora: %s\n",tiempo2);
             atm.historial_cuenta[c] = retiro;
             c++;
        }else{
            printf("No tiene dinero suficiente :( \n ");
            printf("Fecha: %s\n",tiempo1);
            printf("Hora: %s\n",tiempo2);
        }
            }
            else if (atm.tipo_operacion == 3) {
                printf("Su numero de cuenta es: %li\n",atm.numCuenta);
                printf("Su saldo actual es: %d \n",atm.cantidad);
                for(i=0;i<=c-1;i++){
                    printf("Se realizo un movimiento de Deposito/Retiro: %li\n",atm.historial_cuenta[i]);
                }
                printf("Fecha: %s\n",tiempo1);
                printf("Hora: %s\n",tiempo2);

            }
            else {
                printf("Operacion invalida, intentelo de nuevo");
            }
        printf("\nDesea realizar una operacion mas? Si = s , No = n ");
        scanf("%s",&op);
        system("cls");
    }while(op == 's');

    printf("Gracias por su preferencia :D.\nVuelva pronto.");

    return 0;
}
