#include <stdio.h>
#include <string>
#include <stdlib.h>
#define a 30
int main()
{
    time_t t;//asi tava como dijo el tipo
    bool maps[16][4] = {
        // D  C  B  A
        {0, 0, 0, 0},
        {0, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 0, 1, 1},
        {0, 1, 0, 0},
        {0, 1, 0, 1},
        {0, 1, 1, 0},
        {0, 1, 1, 1},
        {1, 0, 0, 0},
        {1, 0, 0, 1},
        {1, 0, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 1, 0},
        {1, 1, 1, 1}};
    //   ←  ↓  ↑  →
    bool random[a][4];//array random

    srand((unsigned)time(&t)); //macumba de stack overflow

    int x = 0;

    for (int i = 0; i < a; i++) //poner en la array random los DCBA random
    {
        int val = (rand() % 15);
        for (x = 0; x < 4; x++)
        {
            random[i][x] = maps[val][x];
        }
    }
    for (int i = 0; i < a; i++)//selecciona en Y
    {
        for (x = 0; x < 4; x++)//selecciona en x
        {
            if (random[i][x] == 1)//se fija si el valor de la val X es uno
            {
                switch (x)// se fija cual el valor de X y lo asigna a una flecha
                {
                case 0:
                    printf("←");
                    break;

                case 1:
                    printf("↓");
                    break;
                case 2:
                    printf("↑");
                    break;
                case 3:
                    printf("→");
                    break;

                default:
                    break;
                }
            }
            else// si el valor en q X apunta es 0 deja un espacio
            {
               printf(" ");
            }
        }
        printf("\n");// imprime to lindo precioso
    }

    return 0;
}