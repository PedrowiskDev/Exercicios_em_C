#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

class LotteryGame
{
private:
    std::vector<int> chosenNumbers;

public:
    // Método para escolher um número e adicioná-lo aos números escolhidos
    void chooseNumber(int number)
    {
        if (number < 1 || number > 60)
        {
            throw std::out_of_range("Número fora do intervalo de 1 a 60!");
        }

        if (std::find(chosenNumbers.begin(), chosenNumbers.end(), number) != chosenNumbers.end())
        {
            throw std::invalid_argument("Número já escolhido!");
        }

        chosenNumbers.push_back(number);
    }

    // Método para obter os números escolhidos
    std::vector<int> getChosenNumbers() const
    {
        return chosenNumbers;
    }
};

int main()
{
    LotteryGame game;

    try
    {
        game.chooseNumber(10);
        game.chooseNumber(25);
        game.chooseNumber(35);
        game.chooseNumber(10); // Número repetido, lançará uma exceção
        game.chooseNumber(75); // Número fora do intervalo, lançará uma exceção
    }
    catch (const std::out_of_range &e)
    {
        std::cout << "Erro: " << e.what() << std::endl;
    }
    catch (const std::invalid_argument &e)
    {
        std::cout << "Erro: " << e.what() << std::endl;
    }

    // Obtendo os números escolhidos após as tentativas (válidas e inválidas)
    std::vector<int> numbers = game.getChosenNumbers();
    std::cout << "Números escolhidos: ";
    for (int number : numbers)
    {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}
