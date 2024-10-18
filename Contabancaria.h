#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

typedef enum{
    CORRENTE,
    POUPANCA
}TipoConta;

typedef struct
{
    int numero, anoabertura;
    TipoConta tipo;
    double saldo;
    char nome[60];
    char cpf[15];
}ContaBancaria;

void Inicializa(ContaBancaria* conta, char *nome, char *cpf, TipoConta tipo, int numero, double saldo, int anoabertura);
void Deposito(ContaBancaria* conta, double valor);
void Saque(ContaBancaria* conta, double valor);
void Extrato(ContaBancaria* conta);
void Emprestimo(ContaBancaria* conta);

char* getNome(ContaBancaria* conta);
char* getCpf(ContaBancaria* conta);
int getNumero(ContaBancaria* conta);
TipoConta getTipo(ContaBancaria* conta);
int getAno(ContaBancaria* conta);
double getSaldo(ContaBancaria* conta);

void setNome(ContaBancaria* conta, char *nome);
void setCpf(ContaBancaria* conta, char *cpf);
void setNumero(ContaBancaria* conta, int numero);
void setTipo(ContaBancaria* conta, TipoConta tipo);
void setAno(ContaBancaria* conta, int ano);
void setSaldo(ContaBancaria* conta, double saldo);


#endif