//
//  main.c
//  calculadora
//
//  Created by Marco Antonio Zambeli on 14/05/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int n1,n2,multiplicacao,resultado;
    printf("digite um valor agora: ");
    scanf("%d",&n1);
    printf("difite um multiplicador: ");
    scanf("%d",&n2);
    multiplicacao=n1*n2;
    printf("%d*%d=%d.\n",n1,n2,multiplicacao);
    resultado=n1*n2 > 100;
    if (resultado > 100) printf("maior que cem");
    return 0;

    
    
}

