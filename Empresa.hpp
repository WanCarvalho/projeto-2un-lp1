#ifndef _EMPRESA_HPP
#define _EMPRESA_HPP

#include <string>
#include <vector>

#include "util.hpp"
#include "Pessoa.hpp"
#include "Asg.hpp"
#include "Vendedor.hpp"
#include "Gerente.hpp"

class Empresa
{

    float faturamentoMensal;
    std::string nomeEmpresa;
    std::string cnpj;
    Pessoa dono;
    vector<Asg> asgs;
    vector<Vendedor> vendedores;
    vector<Gerente> gerentes;

public:
    Empresa();
    Empresa(std::string nomeEmpresa, std::string cnpj, float faturamentoMensal);

    /* GETTERS */
    float getFaturamentoMensal();
    std::string getNomeEmpresa();
    std::string getCNPJ();

    Pessoa getDono();
    vector<Asg> getAsg();
    vector<Gerente> getGerente();
    vector<Vendedor> getVendedor();

    /* SETTERS */
    void setNomeEmpresa(std::string nomeEmpresa);
    void setCNPJ(std::string cnpj);
    void setFaturamentoMensal(float faturamentoMensal);

    /* MÉTODOS */
    void carregaFuncoes();
    void carregarEmpresa();
    void carregarAsg();
    void carregarVendedor();
    void carregarGerente();
    void carregarDono();

    void imprimeAsgs();
    void imprimeVendedores();
    void imprimeGerentes();
    void imprimeDono();
    void buscaFuncionario(int matricula);
    void calculaSalarioFuncionario(int matricula);
    void calculaTodosOsSalarios();
    void calcularRescisao(int matricula, Data desligamento);
};

#endif