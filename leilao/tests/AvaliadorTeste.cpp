//
// Created by camilam on 10/9/2021.
//

#include "../src/Avaliador.h"
#include<iostream>
#define CATCH_CONFIG_MAIN
#include "../catch2.h"

TEST_CASE("Deve recuperar maior lance de leilao em ordem crescente") {
    // Preparando -- Arrange -- Given
    Lance primeiroLance(Usuario("Vinicius Dias"), 1000);
    Lance segundoLance(Usuario("Ana Maria"), 2000);
    Leilao leilao("Fiat 147 0km");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    Avaliador leiloeiro;
    // Executando o c?digo a ser testado -- Act -- When
    leiloeiro.avalia(leilao);
    // Verificando se deu certo -- Assert -- Then
    REQUIRE(2000 == leiloeiro.recuperaMaiorValor());
}
TEST_CASE("Deve recuperar maior lance de leilao em ordem decrescente") {
    // Preparando -- Arrange -- Given
    Lance primeiroLance(Usuario("Ana Maria"), 2000);
    Lance segundoLance(Usuario("Vinicius Dias"), 1000);
    Leilao leilao("Fiat 147 0km");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    Avaliador leiloeiro;
    // Executando o c?digo a ser testado -- Act -- When
    leiloeiro.avalia(leilao);
    // Verificando se deu certo -- Assert -- Then
    REQUIRE(2000 == leiloeiro.recuperaMaiorValor());
}
TEST_CASE("Deve recuperar menor lance de leilao em ordem crescente") {
    // Preparando -- Arrange -- Given
    Lance primeiroLance(Usuario("Vinicius Dias"), 1000);
    Lance segundoLance(Usuario("Ana Maria"), 2000);
    Leilao leilao("Fiat 147 0km");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    Avaliador leiloeiro;
    // Executando o c?digo a ser testado -- Act -- When
    leiloeiro.avalia(leilao);
    // Verificando se deu certo -- Assert -- Then
    REQUIRE(1000 == leiloeiro.recuperaMenorValor());
}
TEST_CASE("Deve recuperar menor lance de leilao em ordem decrescente") {
    // Preparando -- Arrange -- Given
    Lance primeiroLance(Usuario("Ana Maria"), 2000);
    Lance segundoLance(Usuario("Vinicius Dias"), 1000);
    Leilao leilao("Fiat 147 0km");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    Avaliador leiloeiro;
    // Executando o c?digo a ser testado -- Act -- When
    leiloeiro.avalia(leilao);
    // Verificando se deu certo -- Assert -- Then
    REQUIRE(1000 == leiloeiro.recuperaMenorValor());
}
