#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include "Cliente.h"

typedef enum{
    CORRENTE,
    POUPANCA
}TipoConta;

typedef struct
{
    int numeroconta, anoabertura;
    TipoConta tipo;
    double saldo;
    Cliente clt;
}ContaBancaria;

void InicializaBanco(ContaBancaria* conta, int numeroconta, double saldo, int anoabertura, TipoConta tipo);
void Deposito(ContaBancaria* conta, double valor);
void Saque(ContaBancaria* conta, double valor);
void Extrato(ContaBancaria* conta);
void Emprestimo(ContaBancaria* conta);

int getNumeroconta(ContaBancaria* conta);
TipoConta getTipo(ContaBancaria* conta);
int getAno(ContaBancaria* conta);
double getSaldo(ContaBancaria* conta);

void setNumeroconta(ContaBancaria* conta, int numeroconta);
void setTipo(ContaBancaria* conta, TipoConta tipo);
void setAno(ContaBancaria* conta, int ano);
void setSaldo(ContaBancaria* conta, double saldo);


#endif