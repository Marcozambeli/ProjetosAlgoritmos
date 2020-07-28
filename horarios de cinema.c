//
//  main.c
//  horarios de cinema
//
//  Created by Marco Antonio Zambeli on 30/05/13.
//  Copyright (c) 2013 Marco Antonio Zambeli. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int filme,ticket,escolha,nota;
    printf("programacao destinada ao UCI independencia shopping\n");
    printf("       Digite um codigo para o filme desejado\n Star Trek 3d=1\n Faroeste Caboclo=2\n Homem de Ferro 3 3d=3\n Reino Escondido=4\n Se Beber Nao Case 3=5\n Somos Tao Jovens=6\n Velozes e Furiosos=7\n");
    scanf("%d", &filme);
    switch(filme)
    {
        case 1: printf("horarios disponiveis para Star Trek: 20:30m, sala 3");escolha=1;
            break;
        case 2: printf("horarios disponiveis para Faroeste Caboclo: 13h00m, 15h15m, 17h30m, 19h45m, 22h00m, sala 1");escolha=2;
            break;
        case 3:printf("horarios disponiveis para Homem de Ferro3: 12h20m, 15h00m, 17h40m, sala 3");escolha=3;
            break;
        case 4: printf("horarios disponiveis para Reino Escondido:c13h15m, 15h30m, 17h45m, 20h00m, sala2");escolha=4;
            break;
        case 5: printf(" horarios disponiveis para Se Beber Nao Case:c13h30m, 15h45m, 18h00m, 20h15m, 22h30m, 00h00m, sala 5");escolha=5;
            break;
        case 6: printf("horarios disponiveis para Somos Tao Jovens: 22h15m, sala 2");escolha=6;
            break;
        case 7: printf("horarios disponiveis para Velozes e Furiosos: 13h20m, 16h00m, 18h40m, 21h20m, 00h00m, sala4");escolha=7;
            break;
    }
    printf("\nO filme escolhido foi o numero %d\n",escolha);
    printf("Digite um tipo de ingresso: meia=1 e intera=2\n");
    scanf("%d",&ticket);
    if(ticket==1)
    {
        printf("valor da meia= $9,00 reais");
    }
    else
    {
        printf("valor da inteira= $18,00 reais");
        
    }
    printf("\n De uma nota ao programa de 1 a 10\n");
    scanf("%d",&nota);
    if(nota<10)
    {
        printf("sacanagem, pq voce nao deu um 10?");
    }
    else
    {
        printf("Valeuu!!");
    }
    return 0;
}

