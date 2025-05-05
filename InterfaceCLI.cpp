#include "HEADERS/Interface.hpp"
#include <iostream>

void InterfaceCLI::exibirMenu(){
        std::cout << "\n=== Calculadora CLI ===" << std::endl;
        std::cout << "1. Somar\n2. Subtrair\n3. Multiplicar\n4. Dividir\n";
        std::cout << "5. Potência\n6. Raiz Quadrada\n";
        std::cout << "7. Valor Futuro (juros Compostos)\n8. Valor Presente\n";
        std::cout << "9. Pagamentos Periódico (PMT)\n10. Taxa de Retorno\n0. Sair\n";
        std::cout << "Escolha uma opção: ";
    }

void InterfaceCLI::executarOperacao(int opcao){
        double a, b;
        try {
            switch(opcao) {
                case 1:
                    std::cout << "Digite dois números: ";
                    std::cin >> a >> b;
                    std::cout << "Resultado: " << calc.somar(a, b) << std::endl;
                    break;
                case 2:
                    std::cout << "Digite dois números: ";
                    std::cin >> a >> b;
                    std::cout << "Resultado: " << calc.subtrair(a, b) << std::endl;
                    break;
                case 3:
                    std::cout << "Digite dois números: ";
                    std::cin >> a >> b;
                    std::cout << "Resultado: " << calc.multiplicar(a, b) << std::endl;
                    break;
                case 4:
                    std::cout << "Digite dois números: ";
                    std::cin >> a >> b;
                    std::cout << "Resultado: " << calc.dividir(a, b) << std::endl;
                    break;
                case 5:
                    std::cout << "Digite a base e o expoente: ";
                    std::cin >> a >> b;
                    std::cout << "Resultado: " << calc.potencia(a, b) << std::endl;
                    break;
                case 6:
                    std::cout << "Digite um núemro: ";
                    std::cin >> a;
                    std::cout << "Resultado: " << calc.raizQuadrada(a) << std::endl;
                    break;
                    case 7:
                    std::cout << "Digite o principal, taxa (decimal) e períodos: ";
                    int periodos; // Adicionar declaração
                    std::cin >> a >> b >> periodos;
                    std::cout << "Valor Futuro: " << calc.calcularValorFuturo(a, b, periodos) << std::endl;
                    break;
                    
                case 8:
                    std::cout << "Digite o valor futuro, taxa (decimal) e períodos: ";
                    std::cin >> a >> b >> periodos;
                    std::cout << "Valor Presente: " << calc.calcularValorPresente(a, b, periodos) << std::endl;
                    break;
                    
                case 9:
                    std::cout << "Digite o principal, taxa anual (decimal) e número de pagamentos: ";
                    std::cin >> a >> b >> periodos;
                    std::cout << "Pagamento Periódico: " << calc.calcularPagamentoPeriodico(a, b, periodos) << std::endl;
                    break;
                    
                case 10:
                    std::cout << "Digite investimento inicial, retorno total e períodos: ";
                    std::cin >> a >> b >> periodos;
                    std::cout << "Taxa de Retorno: " << calc.calcularTaxaRetorno(a, b, periodos)*100 << "%" << std::endl; // Corrigido o nome do método
                    break;
                default:
                        std::cout << "Opção inválida!" << std::endl;
            }
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
}

void InterfaceCLI::iniciar() {
        int opcao;
        do {
            exibirMenu();
            std::cin >> opcao;
            if(opcao != 0) {
                executarOperacao(opcao);
            }
    } while (opcao != 0);
}
