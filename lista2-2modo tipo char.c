//
//  main.c
//  lista 2-2 modo tipo char
//
//  Created by Marco Antonio Zambeli on 08/07/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

char conceito (int media)
{
    if(media>=0&&media<=49)
        return 'D';
    if(media>=50&&media<=69)
        return 'C';
    if(media>=70&&media<=89)
        return 'B';
    if(media>=90&&media<=100)
        return 'A';
    else
        return 'N';

}


int main(int argc, const char * argv[])
{
    int m;
    char conc;
    printf("informe a media");
    scanf("%d",&m);
    conc=conceito(m);
    if(conc!='N')
        printf("o conceito e %c",conc);
    return 0;
}

