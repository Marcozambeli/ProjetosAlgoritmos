//
//  main.c
//  lista 1 n30
//
//  Created by Marco Antonio Zambeli on 10/06/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int nota;
    printf("digite:\f 1 para notas entre 10 e 9\f digite 2 para notas entre 8 e 7\f digite 3 para notas entre 6 e 5\f digite 4 para notas menores que 5:\n ");
    scanf("%d",&nota);
    switch(nota)
    {
        case 1:printf("sua nota %d recebe A",nota);
            break;
        case 2:printf("sua nota %d recebe B",nota);
            break;
        case 3: printf("sua nota %d recebe C",nota);
            break;
        case 4:printf("sua nota %d recebe D",nota);
            break;
        default:printf("codigo invalido");
    }
    return 0;
}

