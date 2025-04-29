#include "HEADERS/CalculadoraCientifica.hpp"
#include <cmath>
#include <stdexcept>

double CalculadoraCientifica::potencia(double base, double expoente) {
    return std::pow(base ,expoente);
}

double CalculadoraCientifica::raizQuadrada(double a) {
    if (a < 0) throw std::runtime_error("Erro: Raiz de número negativo!");
    return std::sqrt(a);
}
