#include <cmath> // Para funções matemáticas (pow, sqrt)

class CalculadoraCientifica : public Calculadora {
public:
    double potencia(double base, double expoente) {
        return std::pow(base, expoente);
    }

    double raizQuadrada(double a) {
        if (a < 0) {
            throw std::runtime_error("Erro: Raiz de número negativo!");
        }
        return std::sqrt(a);
    }
};
