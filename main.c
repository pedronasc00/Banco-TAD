#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contabancaria.h"

int main()
{
    ContaBancaria *conta1 = (ContaBancaria*)malloc(sizeof(ContaBancaria));
    Cliente *cliente1 = (Cliente*)malloc(sizeof(Cliente));
    Endereco *end1 = (Endereco*)malloc(sizeof(Endereco));
    
    TipoConta tipo;
    int cnumero, anoabertura, numcasa;
    double saldo;
    char nome[60], cpf[15], rua[60], bairro[30];

    printf("----------Dados Pessoais----------\n");
    printf("Nome do titular: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    setNome(cliente1, nome);
    printf("CPF do titular: ");
    fgets(cpf, sizeof(cpf), stdin);
    cpf[strcspn(cpf, "\n")] = '\0';
    setCpf(cliente1, cpf);
    printf("Rua: ");
    fgets(rua, sizeof(rua), stdin);
    rua[strcspn(rua, "\n")] = '\0';
    setRua(end1, rua);
    printf("Numero: ");
    scanf("%d", &numcasa);
    setNumerocasa(end1, numcasa);
    printf("Bairro: ");
    getchar();
    fgets(bairro, sizeof(bairro), stdin);
    bairro[strcspn(bairro, "\n")] = '\0';
    setBairro(end1, bairro);

    printf("\n----------Dados Bancarios----------\n");
    printf("Numero da conta: ");
    scanf("%d", &cnumero);
    setNumeroconta(conta1, cnumero);
    printf("Saldo: ");
    scanf("%lf", &saldo);
    setSaldo(conta1, saldo);
    printf("Tipo da conta (0 - Conta CORRENTE, 1 - POUPANCA): ");
    scanf("%d", &tipo);
    setTipo(conta1, tipo);
    printf("Ano de abertura: ");
    scanf("%d", &anoabertura);
    setAno(conta1, anoabertura);
    InicializaCliente(cliente1, nome, cpf, end1, rua, numcasa, bairro);
    InicializaBanco(conta1, cnumero, saldo, anoabertura, tipo);
    DadosPessoais(cliente1, end1);
    Extrato(conta1);
    Deposito(conta1, 100.00);
    Saque(conta1, 300.00);
    printf("\nSaldo apos movimentacoes: %.2lf\n", getSaldo(conta1));
    Emprestimo(conta1); 
}