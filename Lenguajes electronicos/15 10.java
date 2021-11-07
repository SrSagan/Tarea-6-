//TODO ESTO ESTA EN JAVA, NO VA A FUNCIONAR >:(
class motor{
    int velocidad;
    boolean dir;
    int pin_1;
    int pin_2;

    public void motor(int pin_1, int pin_2)
    {
        this.pin_1=pin_1; //this es similar a self en python
        this.pin_2=pin_2;
    }

    public void definirVelocidad(int velocidad)
    {
        this.velocidad=velocidad;
    }
    public int getVelocidad()
    {
        return this.velocidad;
    }
}

motor m_1 = new motor(3,5);

class user{
    String nombre;
    String apellido;
    String email;

    public void login()
    {

    }
    public void logout()
    {

    }
}
class client extends user{
    int rol;
    int id_local;
    public client()
    {
        super();
    }
    public void comprar()
    {
        //codigo lol xd salu2
    }
}