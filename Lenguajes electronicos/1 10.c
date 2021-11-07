#include <stdio.h>
//codigo para conseguir el numero mayor y menor de una array
int main(){

    int max = 0;
    int min = 500;
    int datos[5] = {5,-2,3,1,0};
    int i=0;
    for(i=0;i<5;i++)
    {
        if(datos[i] > max)
        max = datos[i];
        if(datos[i] < min)
        min=datos[i];

    }
    printf("min %d, max %d\n",min, max);
}


//clase user con distintos datos y funciones, la clase gerente "hereda" los datos y funciones de user
/*class user{
    string nombre;
    string email;

    void login()
    {
    }
    void register()
    {
    }
}

class gerente
    extends user{
        int roc;

        void agregarMenu()
        {

        }
        void eliminarUsuario()
        {

        }
    }*/