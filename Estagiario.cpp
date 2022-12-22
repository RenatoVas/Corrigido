#include "Estagiario.hpp"

using namespace std;

Estagiario::Estagiario(const string &n, const string &c, int mat,
                   float sb, float ch, float ht, const int &tc, const TipoEstagiario & est)
           :Funcionario(n, c, mat, sb, ch, ht)  
{
    setTempo_de_contrato(tc);
    setestagiario(est);
}
int Estagiario::getTempo_de_contrato() const
{
    return Tempo_de_contrato;
}

TipoEstagiario Estagiario::getestagiario()
{
    return estagiario;
}

void Estagiario::setTempo_de_contrato(const int tc)
{
    if (tc>=0)
    {
        Tempo_de_contrato = tc;
    }
    else
    {
        cerr << "\n ERRO: Tempo de contrato invalido!";
        Tempo_de_contrato = TC_PADRAO;
    }
}

void Estagiario::setestagiario( TipoEstagiario est)
{
    estagiario = est;
}

float Estagiario::calculaBonus()
{
    int bonus = 0;
    if(estagiario==Jovem_aprendiz)
    {
        bonus = 0.05;
    }
    else if (estagiario==Universitario)
    {
        bonus = 0.1;
    }
    else
    {
        return 0.0;
    }
    
    return Tempo_de_contrato == 0 ? Tempo_de_contrato : (bonus*getSalarioBase())/ Tempo_de_contrato;
}

float Estagiario::calculaSalarioBruto()
{
    return (Tempo_de_contrato==0 ? Tempo_de_contrato : (getSalarioBase() * getHorasTrabalhadas()) 
    / getCargaHoraria() + calculaBonus());
}