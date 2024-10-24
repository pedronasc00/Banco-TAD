#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Endereco.h"

void PreencherEnd(Endereco* end, char* rua, int numerocasa, char* bairro){
    strcpy(end->rua, rua);
    end->numerocasa = numerocasa;
    strcpy(end->bairro, bairro);
}

char* getRua(Endereco* end){
    return end->rua;
}
int getNumerocasa(Endereco* end){
    return end->numerocasa;
}
char* getBairro(Endereco* end){
    return end->bairro;
}

void setRua(Endereco* end, char *rua){
    strcpy(end->rua, rua);
}
void setNumerocasa(Endereco* end, int numerocasa){
    end->numerocasa = numerocasa;
}
void setBairro(Endereco* end, char *bairro){
    strcpy(end->bairro, bairro);
}