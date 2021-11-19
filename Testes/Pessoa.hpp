#pragma once

class Pessoa
{
private:
    int idade;

public:
    Pessoa(int idade) : 
        idade(idade)
    {

    }
    
    ~Pessoa() {

    }

    void setIdade(int idade) { this->idade = idade; }
    int getIdade() {return this->idade; }
};