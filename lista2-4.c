//
//  main.c
//  lista 2-4
//
//  Created by Marco Antonio Zambeli on 08/07/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int contaimpar (int x, int y)
{
    int i,aux,j=0;
    if(x>y)
    {
        aux=x;
        x=y;
        y=aux;
    }
    for (i=y;i>=x;i--)
    {
        if(i%2!=0)
            j++;
    }
    return (j);
}

int main(int argc, const char * argv[])
{
    int z,w,impares;
    printf("digite o primeiro numero:\n");
    scanf("%d",&z);
    printf("digite o segundo numero:\n");
    scanf("%d",&w);
    impares=contaimpar(z,w);
    printf("existem %d numeros impares no intervalo de %d a %d",impares,z,w);
    return 0;
}


