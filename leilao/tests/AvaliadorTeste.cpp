//
// Created by camilam on 10/9/2021.
//

#include "../src/Avaliador.h"
#include<iostream>
#define CATCH_CONFIG_MAIN
#include "../catch2.h"

using std::vector;

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

TEST_CASE("Deve recuperar os tres maiores lances") {
    // Preparando -- Arrange -- Given
    Lance primeiroLance(Usuario("Ana Maria"), 2000);
    Lance segundoLance(Usuario("Vinicius Dias"), 1000);
    Lance terceiroLance(Usuario("Rita Silva"), 4000);
    Lance quartoLance(Usuario("Joao Mendes"), 3000);
    Leilao leilao("Fiat 147 0km");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);
    leilao.recebeLance(terceiroLance);
    leilao.recebeLance(quartoLance);

    Avaliador leiloeiro;
    // Executando o c?digo a ser testado -- Act -- When
    leiloeiro.avalia(leilao);
    // Verificando se deu certo -- Assert -- Then
    vector<Lance> maiores3Lances = leiloeiro.recuperaMaiores3Lances();
    REQUIRE(3 == maiores3Lances.size());
    REQUIRE(4000 == maiores3Lances[0].recuperaValor());
    REQUIRE(3000 == maiores3Lances[1].recuperaValor());
    REQUIRE(2000 == maiores3Lances[2].recuperaValor());
}
