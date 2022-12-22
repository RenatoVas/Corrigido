#ifndef _PESSOAFISICA_HPP_
#define _PESSOAFISICA_HPP_

#include "Pessoa.hpp"


class PessoaFisica : public Pessoa
{
    public:

        PessoaFisica(const string & n, const string & c);

        string getcpf()const;
        void setcpf(const string & c);

    private:
    
        string cpf;
};

#endif