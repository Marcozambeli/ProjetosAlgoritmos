//
//  main.c
//  lista 2 -1
//
//  Created by Marco Antonio Zambeli on 07/07/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int idadedias (int a,int m,int d)
{
    a=a*365;
    m=m*30;
    d=d;
    return(a+m+d);}

int main(int argc, const char * argv[])
{

    int anos,meses,dias,iddias;
    printf("digite sua idade em anos, meses, dias:\n");
    scanf("%d%d%d",&anos,&meses,&dias);
    iddias=idadedias(anos,meses,dias);
    printf("sua idade em dias e de %d dias",iddias);
    return 0;
}

