//
//  main.c
//  lista 2-15
//
//  Created by Marco Antonio Zambeli on 11/07/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
float media_vetor(int vet[], int tam)
{
    int i,soma=0;
    float media;
    for(i=0;i<tam;i++)
    {
        soma=soma+vet[i];
    }
    media=soma/tam;
    return media;
}

int main(int argc, const char * argv[])
{
    int vetor[10],i;
    float mediadovetor;
    for(i=0;i<10;i++)
    {
        printf("digite um numero para a posicao %d do vetor;\n",i);
        scanf("%d",&vetor[i]);
    }
    mediadovetor=media_vetor(vetor,10);
    printf("a media dos elementos dos vetores e %.2f",mediadovetor);
    
    return 0;
}

