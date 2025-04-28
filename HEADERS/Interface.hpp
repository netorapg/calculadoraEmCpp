#ifndef INTERFACE_CLI_HPP
#define INTERFACE_CLI_HPP

#include "CalculadoraCientifica.hpp"

class InterfaceCLI {
private:
    CalculadoraCientifica calc;
    void exibirMenu();
    void executarOperacao(int opcao);

public: 
    void iniciar();
};

#endif
