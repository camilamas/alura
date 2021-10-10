#include "Lance.h"
#include<string>
#include "Usuario.h"

using std::string;

Lance::Lance(Usuario usuario, float valor): usuario(usuario), valor(valor)
{
}

float Lance::recuperaValor() const
{
    return valor;
}

string Lance::recuperaNomeUsuario() const {
    return usuario.recuperaNome();
}
