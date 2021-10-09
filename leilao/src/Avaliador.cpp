//
// Created by camilam on 10/9/2021.
//

#include "Avaliador.h"
#include "Lance.h"

void Avaliador::avalia(Leilao leilao) {
    std::vector<Lance> lances = leilao.recuperaLances();
    for (Lance lance: lances) {
        if(lance.recuperaValor() > maiorValor) {
            maiorValor = lance.recuperaValor();
        }

    }
}

float Avaliador::recuperaMaiorValor() const {
    return maiorValor;
}