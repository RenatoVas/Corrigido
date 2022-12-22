#include"Empresa.hpp"
// tem que saber se é so esses elemetos
Empresa::Empresa(const string & n, const string & c, const string & nf, int mat,
float sb, float ch, float ht, int const qf, float const he, int nfun, int nc) 
        :PessoaJuridica (n, c, nf)
{

}

int Empresa::ad_fun()
{

}

int Empresa::ad_cli()
{

}

void Empresa::imprimir_fun()
{
//imprimir matrícula, nome e salário bruto dos funcionários
}

void Empresa::imprimir_cli()
{

//imprimir nome, telefone e endereço dos clientes.

}
double Empresa::calcularFolhaDePagamento()
{
    
}

int Empresa::getN_fun()const
{
    return N_fun;
}

int Empresa::getN_cli()const
{
    return N_cli;
}

void Empresa::setN_fun(int nf)
{
    if (nf>=0)
    {
        N_fun = nf;
    }
    else
    {
        N_fun = 0;
    }
}

void Empresa::setN_cli(int nc)
{
        if (nc>=0)
    {
        N_cli = nc;
    }
    else
    {
        N_cli = 0;
    }
}