//
//  main.c
//  aulasubrot exec3 por funcao
//
//  Created by Marco Antonio Zambeli on 18/06/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
float calculavolume(float R)
{
    return (4*3.14*R*R*R)/3;
}

int main(int argc, const char * argv[])
{

    float volume,r;
    printf("digite o raio:\n");
    scanf("%f",&r);
    volume=calculavolume(r);
    printf("%f metros cubicos",volume);
    
    
    return 0;
}

