//
//  main.c
//  lista 2-11
//
//  Created by Marco Antonio Zambeli on 11/07/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>

int menor_vetor(int vet[], int tam)
{
    int menor,i;
    menor=vet[0];
    for(i=0;i<tam;i++)
    {
        if(vet[i]<menor)
            menor=vet[i];
    }
    return menor;
}

int main(int argc, const char * argv[])
{

    int vetor[10],i,menorvalor;
    for(i=0;i<10;i++)
    {
        printf("digite um numero para a %d posicao:\n",i);
        scanf("%d",&vetor[i]);
        
    }
    menorvalor=menor_vetor(vetor,10);
    printf("o menor valor do vetor e %d",menorvalor);
    return 0;
}

