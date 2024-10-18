#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contabancaria.h"

int main()
{
    ContaBancaria *conta1 = (ContaBancaria*)malloc(sizeof(ContaBancaria));
    TipoConta tipo;
    int numero, anoabertura;
    double saldo;
    char nome[60], cpf[15];

    printf("----------Abertura de conta----------\n");
    printf("\nNumero da conta: ");
    scanf("%d", &numero);
    setNumero(conta1, numero);
    printf("Tipo da conta (0) - CORRENTE, (1) - POUPANCA : ");
    scanf("%d", &tipo);
    setTipo(conta1, tipo);
    printf("Nome do titular: ");
    getchar();
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    setNome(conta1, nome);
    printf("CPF do titular: ");
    fgets(cpf, sizeof(cpf), stdin);
    cpf[strcspn(cpf, "\n")] = '\0';
    setCpf(conta1, cpf);
    printf("Saldo Bancario: ");
    scanf("%lf", &saldo);
    setSaldo(conta1, saldo);
    printf("Ano de abertura da conta:");
    scanf("%d", &anoabertura);
    setAno(conta1, anoabertura);

    Inicializa(conta1, nome, cpf, tipo, numero, saldo, anoabertura);
    Extrato(conta1);
    Deposito(conta1, 100.00);
    Saque(conta1, 300.00);
    printf("\nSaldo apos movimentacoes: %.2lf\n", getSaldo(conta1));
    Emprestimo(conta1); 
}