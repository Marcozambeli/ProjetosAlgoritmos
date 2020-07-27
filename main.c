//
//  main.c
//  alternativa dupla
//
//  Created by Marco Antonio Zambeli on 30/05/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x,y,maior;
    printf("digite um valor para x:\n");
    scanf("%d", &x);
    printf("digite um valor para y:\n");
    scanf("%d", &y);
    if(x>y)
    {
        printf("maior numero e %d",x);
    }
    else
    {
        printf("maior numero e %d",y);
    }
    return 0;
}

