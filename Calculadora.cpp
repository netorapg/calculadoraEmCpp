#include "HEADERS/Calculadora.hpp"
#include <stdexcept>

Calculadora::Calculadora() : resultado() {}

double Calculadora::somar(double a, double b) 
{ return a + b; }
double Calculadora::subtrair(double a, double b)
{ return a - b; }
double Calculadora::multiplicar(double a, double b)
{ return a * b; }
double Calculadora::dividir(double a, double b)
{
    if (b == 0) throw std::runtime_error("Erro: Divisão por zero!");
    return a / b;
}

double Calculadora::getResultado() const { return resultado; }

