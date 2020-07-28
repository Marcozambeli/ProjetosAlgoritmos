//
//  main.c
//  calculadora soma
//
//  Created by Marco Antonio Zambeli on 14/05/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n1,n2,soma;
    printf("digite um valor agora: ");
    scanf("%d",&n1);
    printf("digite outro valor agora: ");
    scanf("%d",&n2);
    soma=n1+n2;
    printf("%d+%d=%d.\n",n1,n2,soma);
    return 0;
    
}

