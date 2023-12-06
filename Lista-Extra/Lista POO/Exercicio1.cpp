#include <iostream>
#include <string>
using namespace std;

class Funcionario {
private:
    string nome;
    string departamento;
    float horasTrabalhadasNoMes;
    float salarioPorHora;

public:
    // Método construtor
    Funcionario(string _nome, string _departamento, float _horasTrabalhadasNoMes, float _salarioPorHora) {
        nome = _nome;
        departamento = _departamento;
        horasTrabalhadasNoMes = _horasTrabalhadasNoMes;
        salarioPorHora = _salarioPorHora;
    }

    // Método para mostrar os dados
    void mostraDados() {
        cout << "Nome: " << nome << endl;
        cout << "Departamento: " << departamento << endl;
        cout << "Horas trabalhadas no mês: " << horasTrabalhadasNoMes << endl;
        cout << "Salário por hora: " << salarioPorHora << endl;
    }

    // Método para calcular o salário mensal
    float calculaSalarioMensal() {
        return horasTrabalhadasNoMes * salarioPorHora;
    }
};