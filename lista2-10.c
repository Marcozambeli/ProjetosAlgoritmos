//
//  main.c
//  lista 2-09
//
//  Created by Marco Antonio Zambeli on 09/07/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
#define TAMANHO 10
int retornainteiros (int vetor[],int tam)
{
    int i, maior;
    for(i=0;i<=tam;i++)
    {
        if(i==0)
            maior=vetor[i];
        else if(vetor[i]>maior)
            maior=vetor[i];
    }
    return (maior);
}

int main(int argc, const char * argv[])
{
    int vet[TAMANHO],i,maiornumero;
    for(i=0;i<TAMANHO;i++)
    {
        printf("\ndigite um numero para a posicao %d deste vetor:",i);
        scanf("%d",&vet[i]);
    }
    maiornumero=retornainteiros(vet,TAMANHO);
    printf("o maior numero desse vetor e %d",maiornumero);
    return 0;
    
}

