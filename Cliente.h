#ifndef CLIENTE_H
#define CLINTE_H
#include "Endereco.h"


typedef struct 
{
    char nome[90];
    char cpf[15];
    Endereco end;
}Cliente;

void InicializaCliente(Cliente* clt, char* nome, char* cpf, Endereco* end, char* rua, int numerocasa, char* bairro);
void DadosPessoais(Cliente* clt, Endereco* end);

char* getNome(Cliente* clt);
char* getCpf(Cliente* clt);

void setNome(Cliente* clt, char *nome);
void setCpf(Cliente* clt, char *cpf);

# endif