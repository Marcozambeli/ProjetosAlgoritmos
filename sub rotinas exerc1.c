//
//  main.c
//  lab subrotinas exerc1
//
//  Created by Marco Antonio Zambeli on 18/06/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void imprimeintervalo(int a,int b)
{
    int i,aux;
    if(a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    for(i=a;i<=b;i++)
    {
        printf("%d.",i);
    }
}

int main(int argc, const char * argv[])

{
    int x,y;
    printf("digite numero:\n");
    scanf("%d",&x);
    printf("digite numero:\n");
    scanf("%d",&y);
    printf("o intervalo entre esses numeros e :\n");
    imprimeintervalo(x,y);
    
    
    
    return 0;
}

