#ifndef _GERENTE_HPP_
#define _GERENTE_HPP_


#include "Funcionario.hpp"
#include <iostream>
#define SENHA_PADRAO ""

using namespace std;

class Gerente: public Funcionario
{
public:
  Gerente(const string & n, const string & c, int mat,
  float sb, float ch, float ht, int const qf, float const he);

    int getquantidade_fun()const;
    bool alteraSenha(string sn, string sa);
    bool autenticar(string s);
    float gethoraExtra()const;

    void setquantidade_fun(int qf);
    void sethoraExtra(float he);

    protected:
    float calculaBonus();

private:
  int quantidade_fun = 0;
  float horaExtra = 0;
  string senha;
};
#endif