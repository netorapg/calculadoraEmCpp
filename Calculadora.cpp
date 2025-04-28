#include <iostream>
#include <stdexcept> // Para tratamento de exceções

class Calculadora {
protected:
    double resultado;

public:
    Calculadora() : resultado(0) {}

    //Métodos básicos
    double somar(double a, double b){ return a + b; }
    double subtrair(double a, double b){ return a - b; }
    double multiplicar(double a, double b){ return a * b; }

    // Divisão com tratamento de erro
    double dividir(double a, double b){
        if (b == 0) {
            throw std::runtime_error("Erro: Divisão por zero!");
        }
        return a / b;
    }

    double getResultado() const { return resultado; }
};
