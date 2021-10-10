#include "Leilao.h"
#include<vector>

Leilao::Leilao(std::string descricao): descricao(descricao)
{

}

const std::vector<Lance>& Leilao::recuperaLances() const
{
    return lances;
}

void Leilao::recebeLance(const Lance& lance)
{
    if(lances.size() == 0 || Leilao::testaUsuario(lances,lance)) {
        lances.push_back(lance);
    }
}

bool Leilao::testaUsuario(const std::vector<Lance> &lances, const Lance& lance) {
    return lances.back().recuperaNomeUsuario() != lance.recuperaNomeUsuario();
}
