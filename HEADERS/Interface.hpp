#ifndef INTERFACE_HPP
#define INTERFACE_HPP

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
