//
//  main.c
//  cargo e salario
//
//  Created by Marco Antonio Zambeli on 30/05/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int cargo;
    float salario;
    printf("\ndigite um numero para cargo (tecnico=1, gerente=2, demais=3)\n");
    scanf("%d", &cargo);
    printf("informe o salario antigo:\n");
    scanf("%f", &salario);
    switch(cargo)
    {
        case 1: printf("o novo salario e igual a $%.2f reais com o aumento de 50%%",salario*1.5);
            break;
        case 2: printf("o novo salario e igual a $%.2f reais com o aumento de 30%%",salario*1.3);
            break;
        case 3: printf("o novo salario e igual a $%.2f reais com o aumento de 20%%",salario*1.2);
            break;
        default: printf("digite apenas numeros de 1 a 3 ");
            
    }
    
    
    return 0;
}

