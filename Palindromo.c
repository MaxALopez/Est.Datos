#include <stdio.h>
#include <string.h>

  main()
  {
    char palabra[80];
    int x,y,z;

    printf("Escribe una  palabra: ");
    scanf(" %s",palabra);
    x=strlen(palabra);
    x=x-1;
    for(y=0,z=x;y<=x/2;y++,z--)
    {
    }
        if(palabra[y]==palabra[z])
        printf("Es palindromo");
        else
        printf("No es palindromo");
    getch();
  }
