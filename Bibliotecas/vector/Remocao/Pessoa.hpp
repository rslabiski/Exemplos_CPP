#pragma once

class Pessoa
{
private:
    int idade;

public:
    Pessoa(int idade = 10){this->idade = idade;}
    ~Pessoa() { }

    int getIdade(){return idade;}
};