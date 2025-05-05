#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include "CalculadoraFinanceira.hpp"

class InterfaceCLI {
private:
    CalculadoraFinanceira calc;
    void exibirMenu();
    void executarOperacao(int opcao);

public: 
    void iniciar();
};

#endif
