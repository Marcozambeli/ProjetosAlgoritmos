//
//  main.c
//  lista 2-3
//
//  Created by Marco Antonio Zambeli on 07/07/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
float volumesfera (float r)
{
    r=4*3.14*r*r*r/3;
    return(r);
}
int main(int argc, const char * argv[])
{

    float raio,volume;
    printf("entre com o raio da esfera em cm:\n");
    scanf("%f",&raio);
    volume=volumesfera(raio);
    printf("o volume da esfera e de %.2f cm2",volume);
    return 0;
}

