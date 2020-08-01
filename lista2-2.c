//
//  main.c
//  lista 2-2
//
//  Created by Marco Antonio Zambeli on 07/07/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int conceito (int nota)
{
    int c;
    if(nota<=49)
        c=1;
    if(nota>=50&&nota<=69)
        c=2;
    if(nota>=70&&nota<=89)
        c=3;
    if(nota>=90)
        c=4;
    return(c);

}

int main(int argc, const char * argv[])
{

    // insert code here...
    int n,conceitonota;
    printf("digite sua nota:\n");
    scanf("%d",&n);
    printf("o conceito da sua nota e: ");
    conceitonota=conceito(n);
    if(conceitonota==1) printf("D");
    if(conceitonota==2) printf("C");
    if(conceitonota==3) printf("B");
    if(conceitonota==4) printf("A");
    
    return 0;
}

