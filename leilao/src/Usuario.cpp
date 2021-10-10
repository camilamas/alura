#include "Usuario.h"
#include<string>
using std::string;
#include<iostream>
using std::cin;
using std::cout;

Usuario::Usuario(std::string nome): nome(nome)
{
}

string Usuario::recuperaNome() const
{
    return nome;
}

string Usuario::recuperaPrimeiroNome() {
    string primeiroNome = nome.substr(0,nome.find(' '));
    return primeiroNome;
}
