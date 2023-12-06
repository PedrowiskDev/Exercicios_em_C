#include <iostream>
#include <stdexcept>

// Definição de uma classe de exceção para divisão por zero
class DivisaoPorZeroException : public std::runtime_error
{
public:
    DivisaoPorZeroException() : std::runtime_error("Erro: Divisão por zero!") {}
};

// Função que realiza a divisão e lança exceções, se necessário
int dividir(int numerador, int denominador)
{
    if (denominador == 0)
    {
        throw DivisaoPorZeroException(); // Lança uma exceção de divisão por zero
    }

    return numerador / denominador;
}

int main()
{
    int numerador = 10;
    int denominador = 0;

    try
    {
        int resultado = dividir(numerador, denominador);
        std::cout << "Resultado da divisão: " << resultado << std::endl;
    }
    catch (const DivisaoPorZeroException &e)
    {
        std::cout << e.what() << std::endl;
        // Tratamento específico para a exceção de divisão por zero
    }
    catch (const std::runtime_error &e)
    {
        std::cout << "Outro erro ocorreu: " << e.what() << std::endl;
        // Tratamento genérico para outras exceções derivadas de std::runtime_error
    }
    catch (...)
    {
        std::cout << "Erro desconhecido." << std::endl;
        // Tratamento para qualquer outra exceção não capturada anteriormente
    }

    return 0;
}
