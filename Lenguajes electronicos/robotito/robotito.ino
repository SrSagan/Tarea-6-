#include <Arduino.h>

class motor
{
  private:
    int p_pwm, p_d, vel;
    bool invertir = false;
  
  public: //ingresar bool inv para el metodo bonito en motor
    motor(int pwm, int p1){
      p_pwm=pwm;
      p_d=p1;
      //invertir=inv;
      //metodo bonito que al profe no le gusta
      pinMode(p_d, OUTPUT);
      pinMode(pwm, OUTPUT);
    }

    //para invertir el motor (obviamente)
    void invertirMotor()
    {
      invertir=true;
    }

    //funcion para controlar la velocidad
    void avanzar()
    {
      analogWrite(p_pwm, 255);
      if(invertir) digitalWrite(p_d, HIGH);
      else digitalWrite(p_d, LOW);
    }

    //funcion para retroceder
    void retroceder()
    {
      analogWrite(p_pwm, 255);
      if(invertir) digitalWrite(p_d, LOW);
      else digitalWrite(p_d, HIGH);
    }

    //funcion para frenar (STAP)
    void stop()
    {
      analogWrite(p_pwm, 0);
      //digitalWrite(p_d, LOW)
    }


};


void setup() {
  // put your setup code here, to run once:
  motor M1 = motor(5, 4);
  motor M2 = motor(6, 7);

  //5seg adelante
  //3seg derecha
  //4seg atras
  //2seg izquierda

  M1.invertirMotor();

  M1.avanzar();
  M2.avanzar();

}

void loop() {
  // put your main code here, to run repeatedly:

}
