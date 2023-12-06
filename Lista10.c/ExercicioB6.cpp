#include <iostream>
#include <string>
#include <stdexcept>

class SistemaDeAcesso
{
private:
    std::string usuarioCorreto;
    std::string senhaCorreta;
    bool acessoPermitido;

public:
    SistemaDeAcesso() : usuarioCorreto("aluno"), senhaCorreta("1234"), acessoPermitido(false) {}

    void fazerLogin(const std::string &usuario, const std::string &senha)
    {
        if (usuario.empty() || senha.empty())
        {
            throw std::invalid_argument("Usuário ou senha vazios!");
        }

        if (usuario != usuarioCorreto || senha != senhaCorreta)
        {
            throw std::runtime_error("Acesso não autorizado!");
        }

        std::cout << "Login bem-sucedido! Bem-vindo, " << usuario << "!" << std::endl;
        acessoPermitido = true;
    }

    bool isAcessoPermitido() const
    {
        return acessoPermitido;
    }
};

int main()
{
    SistemaDeAcesso sistema;

    std::string usuarioInformado, senhaInformada;

    std::cout << "Digite o nome de usuário: ";
    std::cin >> usuarioInformado;

    std::cout << "Digite a senha: ";
    std::cin >> senhaInformada;

    try
    {
        sistema.fazerLogin(usuarioInformado, senhaInformada);
        if (sistema.isAcessoPermitido())
        {
            // Se o login for bem-sucedido, permite o acesso ao sistema
            std::cout << "Acesso permitido ao sistema!" << std::endl;
            // Aqui você pode adicionar mais lógica para operações dentro do sistema após o login
        }
    }
    catch (const std::invalid_argument &e)
    {
        std::cout << "Erro: " << e.what() << std::endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cout << "Erro: " << e.what() << std::endl;
    }

    return 0;
}
