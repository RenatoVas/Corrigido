#include "PessoaFisica.hpp"


PessoaFisica::PessoaFisica(const string & n, const string & c)
             :Pessoa(n)
{
    setcpf(c);
}

string PessoaFisica::getcpf()const
{
    return cpf;
}

void PessoaFisica::setcpf(const string & c)
{
    cpf = c;
}