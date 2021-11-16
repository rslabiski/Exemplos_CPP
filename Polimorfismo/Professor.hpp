#pragma once

#include "Pessoa.hpp"

class Professor :
    public Pessoa
{
private:
    string universidade;
    
public:
    Professor(string nome = "Professor sem nome", string uni = "");
    ~Professor();
    void getInfo() override; // Indica sobrescrição de método da classe base
};

Professor::Professor(string nome, string uni)
    : Pessoa(nome) {
    this->universidade = uni;
}
    
Professor::~Professor() {
}

void Professor::getInfo() {
    cout << "Professor: " << this->nome << "\tUniversidade: " << this->universidade <<  endl;
}