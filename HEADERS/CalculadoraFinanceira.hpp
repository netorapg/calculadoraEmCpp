#ifndef CALCULADORA_FINANCEIRA_HPP
#define CALCULADORA_FINANCEIRA_HPP

#include "CalculadoraCientifica.hpp"
#include <stdexcept>

class CalculadoraFinanceira : public CalculadoraCientifica {
public:
    // Juros compostos (valor futuro)
    double calcularValorFuturo(double principal, double taxa, int periodos);

    // Valor presente
    double calcularValorPresente(double valorFuturo, double taxa, int periodos);

    // Pagamentos periódicos (PMT)
    double calcularPagamentoPeriodico(double principal, double taxaAnual, int periodos);

    // Taxa interna de retorno (retorno simples)
    double calcularTaxaRetorno(double investimentoInicial, double retornoTotal, int periodos);
};

#endif