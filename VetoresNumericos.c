//
//  main.c
//  vetoresnumericos slide ex 2
//
//  Created by Marco Antonio Zambeli on 09/07/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10
void levetor (int vet[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("informe o valor do vetor na posicao %d\n:",i);
        scanf("%d",&vet[i]);
    }
    
}
void imprimevetor (int vet[], int tam)
{
    int i;
    printf("vetor: ");
    for(i=0;i<tam;i++)
        printf("%d,",vet[i]);
}
int maiorelemento (int vet [], int tam)
{
    int i,maior=vet[0];
    for(i=0;i<tam;i++)
    {
        if(vet[i]>maior)
            maior=vet[i];
    }
    return(maior);
    
}
int menorelemento (int vet[],int tam)
{
    int i,menor=vet[0];
    for(i=0;i<tam;i++)
    {
        if(vet[i]<menor)
            menor=vet[i];
    }
    return(menor);
}
float mediavetor (int vet[],int tam)
{
    int i,soma=0;
    for(i=0;i<tam;i++)
    {
        soma=soma+vet[i];
    }
    return (soma/(float)tam);
}

int main(int argc, const char * argv[])
{

    int v[TAMANHO];
    levetor(v,TAMANHO);
    imprimevetor(v,TAMANHO);
    printf("\no maior elemento do vetor e %d\n",maiorelemento(v,TAMANHO));
    printf("\no menor elemento do vetor e %d\n",menorelemento(v,TAMANHO));
    printf("\na media dos elementos do vetor e %.2f\n",mediavetor(v,TAMANHO));
    
    return 0;
}

