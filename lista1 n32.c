//
//  main.c
//  lista 1 n32
//
//  Created by Marco Antonio Zambeli on 10/06/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int x,i,cont=0;

    
    for(i=1;i<6;i++)
    {
        printf("digite o numero%d :\n",i);
        scanf("%d",&x);
        
        if(x<0)cont++;
    
    }
    printf("voce digitou %d numeros\n",i);
    printf("voce digitou %d numero(s) negativo(s)",cont);

    return 0;
}

