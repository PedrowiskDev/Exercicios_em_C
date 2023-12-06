#include <stdio.h>

struct ContaCorrente
{
    double saldo;
};

void depositar(struct ContaCorrente *conta, double quantia)
{
    conta->saldo += quantia;
}

void sacar(struct ContaCorrente *conta, double quantia, double taxa)
{
    double taxaOperacao = quantia * taxa;
    conta->saldo -= quantia + taxaOperacao;
}

double obterSaldo(struct ContaCorrente *conta)
{
    return conta->saldo;
}

int main()
{
    struct ContaCorrente contaNormal;
    contaNormal.saldo = 0.0;

    struct ContaCorrente contaEspecial;
    contaEspecial.saldo = 0.0;

    double quantia;

    // Entrada do usuário para depositar na conta normal
    printf("Digite a quantia a ser depositada na conta normal: ");
    scanf("%lf", &quantia);
    depositar(&contaNormal, quantia);

    // Entrada do usuário para sacar da conta normal
    printf("Digite a quantia a ser sacada da conta normal: ");
    scanf("%lf", &quantia);
    sacar(&contaNormal, quantia, 0.005); // Taxa de operação 0.5%

    // Entrada do usuário para depositar na conta especial
    printf("Digite a quantia a ser depositada na conta especial: ");
    scanf("%lf", &quantia);
    depositar(&contaEspecial, quantia);

    // Entrada do usuário para sacar da conta especial
    printf("Digite a quantia a ser sacada da conta especial: ");
    scanf("%lf", &quantia);
    sacar(&contaEspecial, quantia, 0.001); // Taxa de operação 0.1%

    // Exibição dos saldos finais
    printf("\nSaldo final da conta normal: %.2f\n", obterSaldo(&contaNormal));
    printf("Saldo final da conta especial: %.2f\n", obterSaldo(&contaEspecial));

    return 0;
}
