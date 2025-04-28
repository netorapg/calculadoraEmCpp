class InterfaceCLI {
private:
    CalculadoraCientifica calc;

    void exibirMenu(){
        std::cout << "\n=== Calculadora CLI ===" << std::endl;
        std::cout << "1. Somar\n2. Subtrair\n3. Dividir\n";
        std::cout << "5. Potência\n6. Raiz Quadrada\n0. Sair\n";
        std::cout << "Escolha uma opção: ";
    }

    void executarOperacao(int opcao){
        double a, b;
        try {
            switch(opcao) {
                case 1:
                    std::cout << "Digite dois números: ";
                    std::cin >> a >> b;
                    std::cout << "Resultado: " << calcular.somar(a, b) << std::endl;
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
                default:
                        std::cout << "Opção inválida!" << std::endl;
            }
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }

public:
    void iniciar() {
        int opcao;
        do {
            exibirMenu();
            std::cin >> opcao;
            if(opcao != 0) {
                executarOperacao(opcao);
            }
        } while (opcao != 0)
    }
};
