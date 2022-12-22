#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

#include "PessoaFisica.hpp"
#include <iostream>

#define MATRICULA_PADRAO 0
#define SBASE_PADRAO 0
#define CH_PADRAO 40
#define HT_PADRAO 0

class Funcionario : public PessoaFisica
{
    public:
        Funcionario(const string & n, const string & c, int mat,
                    float sb, float ch, float ht);
        
        float calculaSalarioBruto();

        int   getMatricula();
        float getSalarioBase();
        float getCargaHoraria();
        float getHorasTrabalhadas();

        void setMatricula(int mat);
        void setSalarioBase(float sb);
        void setCargaHoraria(float ch);
        void setHorasTrabalhadas(float ht);

    protected:
        float calculaBonus();

    private:
        int   matricula;
        float salario_base;
        float carga_horaria;
        float horas_trabalhadas;
};

#endif