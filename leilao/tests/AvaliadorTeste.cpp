//
// Created by camilam on 10/9/2021.
//

#include "../src/Avaliador.h"
#include "../catch2.h"
#include<iostream>

using std::vector;

Leilao emOrdemCrescente() {
    Lance primeiroLance(Usuario("Vinicius Dias"), 1000);
    Lance segundoLance(Usuario("Ana Maria"), 2000);
    Leilao leilao("Fiat 147 0km");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);
    return leilao;
}

Leilao emOrdemDecescente() {
    Lance primeiroLance(Usuario("Ana Maria"), 2000);
    Lance segundoLance(Usuario("Vinicius Dias"), 1000);
    Leilao leilao("Fiat 147 0km");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);
    return leilao;
}

TEST_CASE("Avaliador") {
// Preparando -- Arrange -- Given
    Avaliador leiloeiro;

    SECTION("Leiloes ordenados") {
        Leilao leilao = GENERATE(emOrdemCrescente(), emOrdemDecescente());

        SECTION("Deve recuperar maior lance de leilao") {
            // Executando o c?digo a ser testado -- Act -- When
            leiloeiro.avalia(leilao);
            // Verificando se deu certo -- Assert -- Then
            REQUIRE(2000 == leiloeiro.recuperaMaiorValor());
        }

        SECTION("Deve recuperar menor lance de leilao") {
            // Executando o c?digo a ser testado -- Act -- When
            leiloeiro.avalia(leilao);
            // Verificando se deu certo -- Assert -- Then
            REQUIRE(1000 == leiloeiro.recuperaMenorValor());
        }
    }

    SECTION("Deve recuperar os tres maiores lances") {
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
        // Executando o c?digo a ser testado -- Act -- When
        leiloeiro.avalia(leilao);
        // Verificando se deu certo -- Assert -- Then
        vector<Lance> maiores3Lances = leiloeiro.recuperaMaiores3Lances();
        REQUIRE(3 == maiores3Lances.size());
        REQUIRE(4000 == maiores3Lances[0].recuperaValor());
        REQUIRE(3000 == maiores3Lances[1].recuperaValor());
        REQUIRE(2000 == maiores3Lances[2].recuperaValor());
    }
}