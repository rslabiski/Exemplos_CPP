#include <iostream>
#include <vector>
#include "Pessoa.hpp"

using namespace std;

// FALTA IMPLEMENTAR COM ITERATOR : https://www.youtube.com/watch?v=cOgmFrk619M

int main() 
{
    vector<Pessoa> alunos = {Pessoa("Rogerio"), Pessoa("Rodrigo")}; // Sem tamanho pre determinado + Sendo inicializado
    vector<Pessoa> professores(2); // Com tamanho pre determinado
    vector<Pessoa>::iterator iterador; // Criação do Iterador

    // Inserindo no final do vetor
    alunos.push_back(Pessoa("Gabriel"));
    alunos.push_back(Pessoa("Antonio"));
    professores.push_back(Pessoa("Simao"));
    professores.push_back(Pessoa("Barreto"));

    // Inserindo elemento no vetor na posicao 2
    alunos.insert(alunos.begin() + 1, Pessoa("Astolfo"));
    // Removendo o penultimo elemento
    alunos.erase(alunos.end() - 1);

    cout << "Info primeiro aluno: " << endl;
    alunos.front().mostraInfo();

    cout << "Info ultimo aluno: " << endl;
    alunos.back().mostraInfo();

    cout << "Info aluno do meio: " << endl;
    alunos.at(alunos.size()/2).mostraInfo(); 

    // Troca os elementos de aluno com professores
    cout << "Depois da troca dos elementos de aluno e professores: " << endl;
    alunos.swap(professores);

    cout << "Contem no vetor de alunos: " << endl;
    // Percorrrer com iterator
    for(iterador = alunos.begin(); iterador < alunos.end(); iterador++) {
        iterador->mostraInfo();
    }

    cout << "Contem no vetor de professores:" << endl;
    for(iterador = professores.begin(); iterador < professores.end(); iterador++) {
        iterador->mostraInfo();
    }

    // Avançando utilizando métodos para percorrer com o iterador:
    iterador = professores.begin();
    advance(iterador, 2); // Avança duas vezes
    cout << "Terceiro professor com o metodo advance: " << iterador->getNome() << endl;
    iterador = next(iterador, 1); // Avança uma vez
    cout << "Quarto professor com o metodo next: " << iterador->getNome() << endl;
    iterador = prev(iterador, 3); // Retorna tres 
    cout << "Primeiro professor com o metodo prev: " << iterador->getNome() << endl;

    // Removendo elementos de alunos
    while(!alunos.empty())
        alunos.pop_back(); // Remove o ultimo elemento

    // Removendo elementos de professores
    professores.clear();

    return 0;
}