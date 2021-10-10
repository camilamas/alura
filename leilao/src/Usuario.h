#ifndef Usuario_h
#define Usuario_h
#include <string>
using std::string;

class Usuario
{
private:
    string nome;
    string primeiroNome;
public:
    Usuario(string);
    string recuperaNome() const;
    string recuperaPrimeiroNome();

};

#endif /* Usuario_h */
