//
// Created by camilam on 10/9/2021.
//

#ifndef LEILAO_AVALIADOR_H
#define LEILAO_AVALIADOR_H

#include "Leilao.h"
#include "Lance.h"

class Avaliador {
private:
    float maiorValor;
public:
    void avalia(Leilao);
    float recuperaMaiorValor() const;

};


#endif //LEILAO_AVALIADOR_H
