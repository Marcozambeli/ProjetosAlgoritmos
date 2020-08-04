//
//  main.c
//  lista 02-9
//
//  Created by Marco Antonio Zambeli on 09/07/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int vetneg (float vetor[],int tam)
{
    int i,neg=0;
    for(i=0;i<=tam;i++)
    {
        if(vetor[i]<0)
            neg++;
    }
    return neg;
}

int main(int argc, const char * argv[])
{

    int i,negativos;
    float vet[10];
    printf("criacao de um vetor de tamanho 10");
    for(i=0;i<10;i++)
    {
        printf("\ndigite o valos do vetor na %d posicao:\n",i);
        scanf("%f",&vet[i]);
    }
    negativos=vetneg(vet,10);
    printf("existem %d numero(s) negativo(s) nesse vetor",negativos);
    
    
    return 0;
}

