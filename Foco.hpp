class Foco
{
private:
    bool encendido;

public:
    Foco(){}
    void Encender()
    {
        encendido = true;
    }
    void Apagar()
    {
        encendido = false;
    }
    bool LeerEstado()
    {
        return encendido;
    }
};