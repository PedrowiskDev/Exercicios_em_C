try
{
    // Código onde podem ocorrer exceções
    if (condicao)
    {
        throw MinhaExcecao(); // Lança uma exceção
    }
}
catch (TipoDeExcecao &e)
{
    // Captura e trata a exceção
    std::cout << "Excecao capturada: " << e.what() << std::endl;
}
catch (OutroTipoDeExcecao &e)
{
    // Outro bloco para capturar e tratar exceções de outro tipo
    std::cout << "Outra excecao capturada: " << e.what() << std::endl;
}

/* No exemplo acima, o código dentro do try pode lançar exceções com throw. 
Se uma exceção for lançada, o programa procurará por um bloco catch correspondente para lidar 
com essa exceção específica. Se não houver um catch adequado para tratar a exceção lançada, 
o programa pode terminar abruptamente ou fornecer informações de erro. 
O objetivo é lidar com essas situações excepcionais de uma maneira controlada e 
evitar que o programa quebre de forma inesperada. */