//
//  main.c
//  lista 1 n34
//
//  Created by Marco Antonio Zambeli on 10/06/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int n=0,res=1;
   
    
        printf("informe numero:\n");
        scanf("%d",&n);
        
    
    printf("o fatorial de %d e :\n",n);
    while(n>=1)
    {
        res=res*n;
        if(n!=1)
            printf("%d*",n);
        else
            printf("%d=",n);
        n--;

        
        
    }
     
    printf("%d",res);
    
    return 0;
}

