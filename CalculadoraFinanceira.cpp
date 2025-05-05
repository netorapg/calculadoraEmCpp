#include "HEADERS/CalculadoraFinanceira.hpp"
#include <cmath>
#include <stdexcept>

double CalculadoraFinanceira::calcularValorFuturo(double principal, double taxa, int periodos) {
    if (periodos < 0) throw std::runtime_error("Erro: Número de períodos negativo!");
    return principal * potencia(1 + taxa, periodos);
}

double CalculadoraFinanceira::calcularValorPresente(double valorFuturo, double taxa, int periodos) {
    if (periodos < 0) throw std::runtime_error("Erro: Número de períodos negativo!");
    return valorFuturo / potencia(1 + taxa, periodos);
}

double CalculadoraFinanceira::calcularPagamentoPeriodico(double principal, double taxaAnual, int periodos) {
    if (periodos <= 0) throw std::runtime_error("Erro: Número de períodos inválido!");
    if (taxaAnual < 0) throw std::runtime_error("Erro: Taxa de juros negativa!");
    
    double taxaPeriodica = taxaAnual / 12.0; // Mensal
    return principal * (taxaPeriodica * potencia(1 + taxaPeriodica, periodos)) / 
           (potencia(1 + taxaPeriodica, periodos) - 1);
}

double CalculadoraFinanceira::calcularTaxaRetorno(double investimentoInicial, double retornoTotal, int periodos) {
    if (periodos <= 0) throw std::runtime_error("Erro: Número de períodos inválido!");
    if (investimentoInicial <= 0) throw std::runtime_error("Erro: Investimento inicial deve ser positivo!");
    
    return (retornoTotal / investimentoInicial) / periodos;
}