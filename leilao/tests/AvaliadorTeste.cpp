//
// Created by camilam on 10/9/2021.
//

#include "../src/Avaliador.h"
#include<iostream>

int main() {

    // Preparando -- Arrange -- Given
    Lance primeiroLance(Usuario("Vinicius Dias"),1000);
    Lance segundoLance(Usuario("Ana Maria"),2000);
    Leilao leilao("Fiat 147 0km");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    Avaliador leiloeiro;
    // Executando o c?digo a ser testado -- Act -- When
    leiloeiro.avalia(leilao);

    float valorEsperado = 2000;
    // Verificando se deu certo -- Assert -- Then
    if(valorEsperado == leiloeiro.recuperaMaiorValor()) {
        std::cout << "Teste ok!" << std::endl;
    } else {
        std::cout << "Teste falhou..." << std::endl;
    }
    return 0;
}