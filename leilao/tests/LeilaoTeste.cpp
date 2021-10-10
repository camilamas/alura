//
// Created by camilam on 10/10/2021.
//
#include "../catch2.h"
#include "../src/Leilao.h"

TEST_CASE("Leilao nao deve receber lances repetidos do mesmo usuario") {
    //Arrange
    Leilao leilaor("Fiat 147 0km");
    Usuario vinicius("Vinicius Dias");
    Lance primeiroLance(vinicius,1000);
    Lance segundoLance(vinicius,1500);
    //Act
    leilaor.recebeLance(primeiroLance);
    leilaor.recebeLance(segundoLance);
    //Assert
    REQUIRE(1 == leilaor.recuperaLances().size());
    REQUIRE(1000 == leilaor.recuperaLances()[0].recuperaValor());
}