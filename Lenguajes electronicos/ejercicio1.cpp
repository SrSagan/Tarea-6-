#include <stdio.h>

int numeros[10]={1,2,3,4,5,6,7,8,9,10};

//int resultado=0;

int main()
{
    for(int fila=0;fila<=10;fila++)
    {
        printf("\n");
        for(int columna=0;columna<10;columna++)
        {

            printf("%dx%d = %d\n", fila, numeros[columna], fila*numeros[columna]);
        }
    }

    return 0;
}
