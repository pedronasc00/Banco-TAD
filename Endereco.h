#ifndef ENDERECO_H
#define ENDERECO_H

typedef struct 
{
    char rua[60];
    int numerocasa;
    char bairro[40];
}Endereco;

void PreencherEnd(Endereco* end, char* rua, int numerocasa, char* bairro);

char* getRua(Endereco* end);
int getNumerocasa(Endereco* end);
char* getBairro(Endereco* end);

void setRua(Endereco* end, char *rua);
void setNumerocasa(Endereco* end, int numerocasa);
void setBairro(Endereco* end, char *bairro);

#endif