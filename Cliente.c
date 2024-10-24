#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Cliente.h"

void InicializaCliente(Cliente* clt, char* nome, char* cpf, Endereco* end, char* rua, int numerocasa, char* bairro){
    strcpy(clt->nome, nome);
    strcpy(clt->cpf, cpf);
    PreencherEnd(end, end->rua, end->numerocasa, end->bairro);
}
void DadosPessoais(Cliente* clt, Endereco* end){
    printf("\nDados Pessoais:\n\n");
    printf("Nome: %s\n", getNome(clt));
    printf("CPF: %s\n", getCpf(clt));
    printf("Endereco: %s, %d, %s\n", end->rua, end->numerocasa, end->bairro);
}

char* getNome(Cliente* clt){
    return clt->nome;
}
char* getCpf(Cliente* clt){
    return clt->cpf;
}

void setNome(Cliente* clt, char *nome){
    strcpy(clt->nome, nome);
}
void setCpf(Cliente* clt, char *cpf){
    strcpy(clt->cpf, cpf);
}