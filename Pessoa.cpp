#include "Pessoa.hpp"

Pessoa::Pessoa(const string & n)
{
    setNome(n);
}
string Pessoa::getNome() const
{
    return Nome;
}
void Pessoa::setNome(const string & n)
{
    Nome=n;
}