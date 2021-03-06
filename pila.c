#include <stdio.h>
#include <stdlib.h>

//#define TAMPILA 100

typedef double TipoDato;

enum boolean{
    FALSE,TRUE
};

int crearPila(int pila[], int longitud){
    int i;
    for(i=0;i<longitud;i++)
    {
        pila[i] = 0;
    }
    return *pila; /*Retornamos los datos del arreglo*/
}

enum boolean pilaVacia(int cima){
    if(cima == -1){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

enum boolean pilaLlena(int cima, int longitud){
    if(cima == longitud){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int push(int pila[], int cima, int longitud){
    if(pilaLlena(cima+1,longitud))
    {
        printf("La pila se encuentra llena, no puede agregar un elemento");
        return FALSE;
    }
    else{
        printf("Ingresa el elemnto agergar en la pila: ");
        scanf("%d",&pila[cima+1]);
        return *pila;
    }
}

int pop(int pila[],int cima)
{
    if(pilaVacia(cima)){
        printf("La pila se encuentra vacia, no puede retirar un elemento");
        return FALSE;
    }
    else{
        printf("Elemento sacado de la pila: %d \n",pila[cima]);
        pila[cima]=0;
        return *pila;
    }
}


void imprimirPila(int pila[],int longitud)
{
    int i;
    printf("Pila\n");
    for(i = longitud-1 ; i >= 0 ; i--)
    {
        printf("|%d|",pila[i]);
        printf(" - %d\n",i);
    }

}
int limpiarPila(int pila[], int longitud){
    int i;
    for(i=0;i<longitud;i++)
    {
        pila[i] = 0;
    }
    return *pila; /*Retornamos los datos del arreglo*/
}

void main(){

    int cima=-1;
    int longitud = 5;
    TipoDato pila[longitud];
    int operacion; /*variable del menu*/

    printf("Bienvenidos a la simulacion de una pila\n");
    do{
        printf("Operacion que podemos realizar\n");
        printf("\t1.-Crear Pila\n");
        printf("\t2.-Push\n");
        printf("\t3.-Pop\n");
        printf("\t4.-Valor de cima\n");
        printf("\t5.-Tamano de pila\n");
        printf("\t6.-Visualizar pila\n");
        printf("\t7.-Limpiar pila\n");
        printf("\t8.-Salir\n");
        printf("Elige una opcion: ");
        scanf("%d",&operacion);
        switch(operacion){
            case 1:
                *pila = crearPila(pila,longitud);/*Creamos la pila y almacenamos la pila vacia*/
                break;
            case 2:
                *pila = push(pila,cima,longitud);/*Reaqlizamos el push y lo almacenamos la nueva pila*/
                if(cima<longitud){
                   cima++;
                }
                break;
            case 3:
                *pila = pop(pila,cima);/*Realizamos el pop y almacenamos la nueva pila*/
                if(cima > -1){
                    cima--;
                }
                break;
            case 4:
                printf("Cima se encuentra en %d con valor %d\n",cima,pila[cima]);
                break;
            case 5:
                printf("El tamaño de la pila es %d\n",longitud);
                break;
            case 6:
                imprimirPila(pila,longitud);/*Imprimimos la pila*/
                break;
            case 7:
                *pila = limpiarPila(pila,longitud);
                break;
            case 8:
                printf("Adios\n");
                break;
            default:
                printf("No has selecionado un opcion correcta \n");
                break;
        }
        system("pause");
        system("cls");
    }while(operacion!=8);
}
