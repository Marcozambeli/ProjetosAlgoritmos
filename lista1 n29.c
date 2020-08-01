//
//  main.c
//  lista 1 n29
//
//  Created by Marco Antonio Zambeli on 10/06/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int x,y,codigo;
    printf("digite um valor para x\n");
    scanf("%d",&x);
    printf("digite um valor para y\n");
    scanf("%d",&y);
    printf("digite um codigo de 1 a 3:\n");
    scanf("%d",&codigo);
    switch(codigo)
    {
        case 1:printf("%d+%d=%d",x,y,x+y);
            break;
        case 2:printf("%dx%d=%d",x,y,x*y);
            break;
        case 3:printf("%d-%d=%d",x,y,x-y);
            break;
        default : printf("codigo %d invalido",codigo);
    }
    return 0;
}

