#include "PessoaJuridica.hpp"

PessoaJuridica::PessoaJuridica(const string & n, const string & c, const string & nf)
               :Pessoa(n)
{
    setcnpj(c);
    setNomeFant(nf);
}

string PessoaJuridica::getcnpj()const
{
    return cnpj;
}

void PessoaJuridica::setcnpj(const string & c)
{
    cnpj=c;
}

string PessoaJuridica::getNomeFant()const
{
    return NomeFant;
}

void PessoaJuridica::setNomeFant(const string & nf)
{
    NomeFant = nf;
}