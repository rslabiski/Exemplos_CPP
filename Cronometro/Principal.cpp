#include <iostream>
#include <ctime> // time.h

int main()
{
    clock_t tAnterior, tAtual;
    float segundos, dt, oneseg;

    // Inicializa as variaveis
    segundos = 0.;
    tAnterior = clock();
    oneseg = 0.;

    // Roda por 
    while(segundos < 5.) {
        // Pega o tempo atual
        tAtual = clock();
        // Calcula a diferenca de tempo em segundos
        dt = (float) (tAtual - tAnterior) / CLOCKS_PER_SEC;

        // Aumenta as variaveis de tempo
        segundos += dt;
        oneseg += dt;

        // Mostra o tempo quando aumentar 1 seg.
        if(oneseg > 1.) {
            printf("%f seg.\n", segundos);
            oneseg -= 1.;
        }
        // Atualiza o tempo inicial
        tAnterior = tAtual;
    }

    printf("Tempo total: %f seg", segundos);

    return 0;
}