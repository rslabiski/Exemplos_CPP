#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Pessoa {
private:
    string nome;
public:
    Pessoa(string nome = "Sem nome") { this->nome = nome; }
    ~Pessoa() { }
    void mostraInfo() { cout << this->nome << endl; }
    string getNome() { return this->nome; }
};

#endif