#ifndef _CLIENTE_HPP_
#define _CLIENTE_HPP_

#include "PessoaFisica.hpp"
#include <iostream>

class Cliente : public PessoaFisica
{

    public:

        Cliente(const string & n, const string & c,const string & t, const string & e);

        string getEndereco() const;
        string getTelefone() const;

        void setTelefone(const string t);
        void setEndereco(const string e);

    private:

        string Telefone;
        string Endereco;

};

#endif