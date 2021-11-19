#include <stdio.h>
#include "Pessoa.h"

#define QNT 10

int main()
{
    Pessoa** pessoas;

    pessoas = new Pessoa*[QNT];

    for(int i = 0; i<QNT; i++)
    {
        pessoas[i] = new Pessoa(i+1);
    }

    for(int i = 0; i<QNT; i++)
    {
        printf("Idade %d: %d\n", i, pessoas[i]->getIdade());
    }
    
    for(int i = 0; i < QNT; i++)
    {
        delete(pessoas[i]);
        pessoas[i] = NULL;
    }
    delete(pessoas);
    pessoas = NULL;

    return 0;
}