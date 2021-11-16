#include <iostream>
#include <vector>

#include "Aluno.hpp"
#include "Professor.hpp"

using std::vector;

int main()
{
    vector<Pessoa> pessoas; // Vetor de pessoas
    vector<Pessoa>::iterator it; // Iterador para percorrer o vetor
    Pessoa* pPessoa = NULL;

    // Inclusão polimorfica
    pessoas.push_back(Pessoa("Antonio"));
    pessoas.push_back(Aluno("Rogerio", 2027020));
    pessoas.push_back(Professor("Barreto", "UTFPR"));   
    
    // Impressao em polimorfismo
    for(it = pessoas.begin(); it != pessoas.end(); it++) {
        pPessoa = it;
        pPessoa->getInfo();
    }

    pessoas.clear();

    return 0;
}