//
// Created by camilam on 10/9/2021.
//

#ifndef LEILAO_AVALIADOR_H
#define LEILAO_AVALIADOR_H

#include "Leilao.h"
#include "Lance.h"

class Avaliador {
private:
    float maiorValor = INT_MIN;
    float menorValor = INT_MAX;
    std::vector<Lance> maiores3Lances;
    static bool ordenaLances(const Lance&, const Lance&);
public:
    Avaliador();
    void avalia(Leilao);
    float recuperaMaiorValor() const;
    float recuperaMenorValor() const;
    std::vector<Lance> recuperaMaiores3Lances() const;
};


#endif //LEILAO_AVALIADOR_H
