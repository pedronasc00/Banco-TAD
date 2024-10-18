#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contabancaria.h"

void Inicializa(ContaBancaria* conta, char *nome, char *cpf, TipoConta tipo, int numero, double saldo, int anoabertura){
    strcpy(conta->nome, nome);
    strcpy(conta->cpf, cpf);
    conta->numero = numero;
    conta->saldo = saldo;
    conta->anoabertura = anoabertura;
    conta->tipo = tipo;
}

void Deposito(ContaBancaria* conta, double valor){
    conta->saldo += valor;
}
void Saque(ContaBancaria* conta, double valor){
    conta->saldo -= valor;
}
void Extrato(ContaBancaria* conta){
    printf("\nExtrato Bancario:\n\n");
    printf("Nome: %s\n", getNome(conta));
    printf("CPF: %s\n", getCpf(conta));
    printf("Numero da conta: %d\n", getNumero(conta));
    printf("Ano de abertura: %d\n", getAno(conta));
    printf("Saldo atual: R$ %.2lf\n", getSaldo(conta));
    printf("Tipo da conta: %s\n", (conta->tipo == CORRENTE) ? "Corrente" : "Poupanca");
}
void Emprestimo(ContaBancaria* conta){
    int dataAtual;
    printf("\nAno atual: ");
    scanf("%d", &dataAtual);
    int difEm = abs(dataAtual - conta->anoabertura);
    if (difEm >= 5){
        printf("Você tem direito a emprestimo!\n");
    } else{
        printf("Ainda nao eh possivel fazer emprestimo!\n");
    }
}

int getNumero(ContaBancaria* conta){
    return conta->numero;
}
char* getCpf(ContaBancaria* conta){
    return conta->cpf;
}
char* getNome(ContaBancaria* conta){
    return conta->nome;
}
double getSaldo(ContaBancaria* conta){
    return conta->saldo;
}
int getAno(ContaBancaria* conta){
    return conta->anoabertura;
}
TipoConta getTipo(ContaBancaria* conta){
    return conta->tipo;
}

void setNome(ContaBancaria* conta, char *nome){
    strcpy(conta->nome, nome);
}
void setAno(ContaBancaria* conta, int ano){
    conta->anoabertura = ano;
}
void setCpf(ContaBancaria* conta, char *cpf){
    strcpy(conta->cpf, cpf);
}
void setNumero(ContaBancaria* conta, int numero){
    conta->numero = numero;
}
void setSaldo(ContaBancaria* conta, double saldo){
    conta->saldo = saldo;
}
void setTipo(ContaBancaria* conta, TipoConta tipo){
    conta->tipo = tipo;
}