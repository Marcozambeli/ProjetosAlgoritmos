//
//  main.c
//  aula subrot exerc3
//
//  Created by Marco Antonio Zambeli on 18/06/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void calcula (float raio)
{
    int pi=3.14,v;
    v=(4 * pi * raio*raio*raio)/3;
    printf("o volume da esfera e %.2f metros cubicos",(float)v);
}
int main(int argc, const char * argv[])
{

    float r;
    printf("digite o raio de uma esfera em metros:\n");
    scanf("%f",&r);
    calcula(r);
    return 0;
}

