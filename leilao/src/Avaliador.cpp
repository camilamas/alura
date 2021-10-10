//
// Created by camilam on 10/9/2021.
//

#include "Avaliador.h"
#include "Lance.h"
#include<vector>
#include<algorithm>
#include<iostream>

using std::vector;
using std::cout;
using std::sort;
using std::endl;

Avaliador::Avaliador() {
}

void Avaliador::avalia(Leilao leilao) {
    vector<Lance> lances = leilao.recuperaLances();
    for (Lance lance: lances) {
        if(lance.recuperaValor() > maiorValor) {
            maiorValor = lance.recuperaValor();
        }
        if(lance.recuperaValor() < menorValor) {
            menorValor = lance.recuperaValor();
        }
    }
    sort(lances.begin(),lances.end(),ordenaLances);
    size_t tamanho = lances.size() > 3 ? 3 : lances.size();
    maiores3Lances = vector<Lance>(lances.begin(), lances.begin() +tamanho);
}
vector<Lance> Avaliador::recuperaMaiores3Lances() const {
    return maiores3Lances;
}

bool Avaliador::ordenaLances(const Lance &lance1, const Lance &lance2) {
    return lance1.recuperaValor() > lance2.recuperaValor();
}

float Avaliador::recuperaMaiorValor() const {
    return maiorValor;
}
float Avaliador::recuperaMenorValor() const {
    return menorValor;
}