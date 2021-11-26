#include <iostream>
#include <vector>
#include "Pessoa.hpp"

int main()
{
    std::vector<Pessoa> pessoas;
    int i;

    pessoas.push_back(Pessoa(3));
    pessoas.push_back(Pessoa(10));
    pessoas.push_back(Pessoa(20));
    
    std::cout << "Percorrendo e removendo com um for: " << std::endl;
    for( i = 0; i < pessoas.size() ; i++ )
    {
        std::cout << "Idade: " << pessoas[i].getIdade() << std::endl;
        if(pessoas[i].getIdade() == 3) {
            pessoas.erase(pessoas.begin() + i);
            i--;
        }
    }
    pessoas.clear();

    pessoas.push_back(Pessoa(3));
    pessoas.push_back(Pessoa(10));
    pessoas.push_back(Pessoa(20));

    std::cout << "Percorrendo e removendo com o While: " << std::endl;
    i = 0;
    while(i < pessoas.size())
    {
        std::cout << "Idade: " << pessoas[i].getIdade() << std::endl;
        if(pessoas[i].getIdade() == 3) {
            pessoas.erase(pessoas.begin() + i);
        }
        else
            i++;
    }

    return 0;
}