#ifndef _ESTAGIARIO_HPP_
#define _ESTAGIARIO_HPP_

#include "Funcionario.hpp"
#include <iostream>

using namespace std;

#define TC_PADRAO 0


enum TipoEstagiario
{
    Jovem_aprendiz,
    Universitario
};

class Estagiario : public Funcionario
{

    public:

        Estagiario(const string &n, const string &c, int mat,
                   float sb, float ch, float ht, const int & tc, const TipoEstagiario & est);

        int getTempo_de_contrato()const;
        TipoEstagiario getestagiario() ;

        void setTempo_de_contrato(const int tc);
        void setestagiario( TipoEstagiario est);

        float calculaBonus();
        float calculaSalarioBruto();

    private:

        int Tempo_de_contrato;
        TipoEstagiario estagiario;

        
};

#endif