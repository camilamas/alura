#ifndef Lance_h
#define Lance_h
#include "Usuario.h"
#include<string>

using std::string;

class Lance
{
private:
    Usuario usuario;
    float valor;
public:
    Lance(Usuario usuario, float valor);
    float recuperaValor() const;
    string recuperaNomeUsuario() const;

};

#endif /* Lance_h */
