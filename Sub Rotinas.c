//
//  main.c
//  aula subrotina
//
//  Created by Marco Antonio Zambeli on 18/06/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>
int quadrado (int x)
{
    return (x*x);
}


int main(int argc, const char * argv[])
{
    int numero, res;
    printf("digite um numero:\n");
    scanf("%d",&numero);
    while(numero!=0)
    {
        res=quadrado(numero);
        printf("o quadrado de %d e %d\n",numero,res);
        printf("digite um numero:\n");
        scanf("%d",&numero);
    }
    return 0;
}

