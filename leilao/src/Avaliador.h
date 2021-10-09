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
public:
    void avalia(Leilao);
    float recuperaMaiorValor() const;
    float recuperaMenorValor() const;
};


#endif //LEILAO_AVALIADOR_H
