#ifndef _EMPRESA_HPP_
#define _EMPRESA_HPP_

#include "PessoaJuridica.hpp"
#include "Cliente.hpp"
#include "Gerente.hpp"
#include "Estagiario.hpp"
#include <iostream>

class Empresa : public PessoaJuridica
{

  public:

  Empresa(const string & n, const string & c, const string & nf, int mat,
  float sb, float ch, float ht, int const qf, float const he, int nfun, int nc);

  int ad_fun();
  int ad_cli();

  void imprimir_fun();
  void imprimir_cli();

  double calcularFolhaDePagamento();

  int getN_fun()const;
  int getN_cli()const;

  void setN_fun(int nfun);
  void setN_cli(int nc);

  private:

  int N_fun = 0;
  int N_cli = 0;

};

#endif