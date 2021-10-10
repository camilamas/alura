//
// Created by camilam on 10/10/2021.
//

#include "../catch2.h"
#include "../src/Usuario.h"
#include<string>
using std::string;

TEST_CASE("Usuario deve saber informar seu primeiro nome") {
    Usuario vinicius("Vinicius Dias");

    string primeiroNome = vinicius.recuperaPrimeiroNome();

    REQUIRE("Vinicius" == vinicius.recuperaPrimeiroNome());
}



