#pragma once

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Pessoa  {
protected:
    string nome;

public:
    Pessoa(string nome = "Sem nome");
    ~Pessoa();    
    virtual void getInfo();
};

Pessoa::Pessoa(string nome) { this->nome = nome; }
Pessoa::~Pessoa() { }
void Pessoa::getInfo() { cout << "Pessoa: " << this->nome << endl; }