#pragma once

#include "Pessoa.hpp"

class Aluno :
    public Pessoa
{
private:
    int RA;

public:
    Aluno(string nome = "Aluno sem nome", int RA = 0);
    ~Aluno();
    void getInfo() override; // Indica sobrescrição de método da classe base
};

Aluno::Aluno(string nome, int RA)
    : Pessoa(nome) {
    this->RA = RA;
}
    
Aluno::~Aluno() {
}

void Aluno::getInfo() {
    cout << "Aluno: " << this->nome << "\tRA: " << this->RA <<  endl;
}