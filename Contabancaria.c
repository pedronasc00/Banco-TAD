#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contabancaria.h"

void InicializaBanco(ContaBancaria* conta, int numeroconta, double saldo, int anoabertura, TipoConta tipo){
    conta->numeroconta = numeroconta;
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
    printf("Numero da conta: %d\n", getNumeroconta(conta));
    printf("Ano de abertura: %d\n", getAno(conta));
    printf("Saldo atual: R$%.2lf\n", getSaldo(conta));
    printf("Tipo da conta: %s\n", (conta->tipo == CORRENTE) ? "Corrente" : "Poupanca");
}
void Emprestimo(ContaBancaria* conta){
    int dataAtual;
    printf("\nAno atual: ");
    scanf("%d", &dataAtual);
    int difEm = abs(dataAtual - conta->anoabertura);
    if (difEm >= 5){
        printf("Voce tem direito a emprestimo!\n");
    } else{
        printf("Ainda nao eh possivel fazer emprestimo!\n");
    }
}

int getNumeroconta(ContaBancaria* conta){
    return conta->numeroconta;
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

void setAno(ContaBancaria* conta, int ano){
    conta->anoabertura = ano;
}
void setNumeroconta(ContaBancaria* conta, int numeroconta){
    conta->numeroconta = numeroconta;
}
void setSaldo(ContaBancaria* conta, double saldo){
    conta->saldo = saldo;
}
void setTipo(ContaBancaria* conta, TipoConta tipo){
    conta->tipo = tipo;
}