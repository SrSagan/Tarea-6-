//funciones
/*<tipo de dato> <nombre de funcion> <parametros opcionales>
Tipos: int char void float string bool etc*/
#include <stdio.h>

int porcentaje(int val1, int porc){
    return (val1*porc)/100;
}
int valor=32423;
int percent=50;
int main(){

printf("%d", porcentaje(valor, percent));

return 0;
}