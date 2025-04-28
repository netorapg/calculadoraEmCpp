#ifndef CALCULADORA_CIENTIFICA_HPP
#define CALCULADORA_CIENTIFICA_HPP

#include "Calculadora.hpp"

class CalculadoraCientifica : public Calculadora {
public:
    double potencia(double base, double expoente);
    double raizQuadrada(double a);
};

#endif
