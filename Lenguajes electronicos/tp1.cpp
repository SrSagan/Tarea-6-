#include <stdio.h>
#include <iostream>
using namespace std;

class msg{

    public:
        void saludar()
        {
            cout << "MI PRIMERA FUNCION EN C++ LOL XD SALU2\n";
            cout << "noo le dieron el copilot al profe F\n";
        }

    private:
        char *mensaje;

    public:
        void setMsg(char *m)
        {
            mensaje=m;
        }
    
    public: 
        char *getMsg()
        {
            return mensaje;
        }

    public:
        msg(char* m)
        {
            mensaje=m;
        }
};

class sensor{
    int valor();
    int leer(){
        //logica de arduino
    }
};

class notification{
    char* email;
    public:
        notificacion(char* e){
            email = e;
        }
};

class actuador{
    int pin;
    public:
        actuador(int p){
            pin = p;
        }
    void abrir(){
        digitalWrite(pin, HIGH);
    }
    void cerrar()
    {
        digitalWrite(pin, LOW);
    }
};

setup(){
actuador dc = actuador(3);
sensor s = sensor();
notificacion email = notificacion("blalb@gmail.com");
}

loop(){
    if(s.leer() < 30){
        dc.abrir();
    }else dc.cerrar();

    if(s.leer() < 30 && email.enviar()){
        email.enviar()
    }
}

int main(){

    msg m1= msg("Fasoprimero\n");
    cout << m1.getMsg();
    m1.setMsg("FasoII\n");
    cout << m1.getMsg();

    return 0;

}