#include <iostream>
#include <vector>

#include "Aluno.hpp"
#include "Professor.hpp"

using std::vector;

int main() {
    
    vector<Pessoa*> pessoas; // Vetor de pessoas
    vector<Pessoa*>::iterator it; // Iterador para percorrer o vetor
    Pessoa *pPessoa = NULL; // Ponteiro auxiliar

    // Inclusão polimorfica
    pessoas.push_back(new Pessoa("Fulano"));
    pessoas.push_back(new Aluno("Rogerio", 8888888));
    pessoas.push_back(new Professor("Ciclano", "UTFPR"));   
    
    // Impressao em polimorfismo
    for(it = pessoas.begin(); it != pessoas.end(); it++) {
        pPessoa = *it;
        pPessoa->getInfo();
    }

    // Desalocação de memoria e remoção do vector
    while(!pessoas.empty()) {
        delete(*pessoas.begin());
        pessoas.erase(pessoas.begin());
    }

    return 0;
}