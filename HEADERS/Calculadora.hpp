#ifndef CALCULADORA_HPP
#define CALCULADORA_HPP

class Calculadora {
protected:
    double resultado;

public:
    Calculadora();
    double somar(double a, double b);
    double subtrair(double a, double b);
    double multiplicar(double a, double b);
    double dividir(double a, double b);
    double getResultado() const;
};

#endif

