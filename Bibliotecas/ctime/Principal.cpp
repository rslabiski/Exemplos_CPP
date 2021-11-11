#include <iostream>
#include <cmath> // math.h
#include <ctime> // time.h

using namespace std;

void testeTempoDeFuncao();
void testeTempoDeFuncaoComDiffTime();
void mostraDataEHoraLocal();
void formatandoSaidaDeDataEHora();

int qntDePrimos(int n); // Retorna a quantidade de primos entre 0 e n

int main()
{
    testeTempoDeFuncao();
    testeTempoDeFuncaoComDiffTime();
    mostraDataEHoraLocal();
    formatandoSaidaDeDataEHora();
    return 0;
}

void testeTempoDeFuncao()
{
    cout << "Exemplo de teste de tempo de funcao" << endl;

    int primos;
    clock_t tempo;
    
    // Pega o tempo de clock
    tempo = clock();
    primos = qntDePrimos(9000);

    // Subtrai do tempo anterior
    tempo = clock() - tempo;

    cout << "Qnd de primos: " << primos << endl;
    cout << "Tempo de CPU: " << (float) tempo / CLOCKS_PER_SEC << " segundos" << endl;
    cout << endl;
}

void testeTempoDeFuncaoComDiffTime()
{
    cout << "Exemplo teste de tempo com a funcao difftime(): " << endl;
    int primos;
    clock_t tempoi, tempof;
    
    // Pega o tempo de clock
    tempoi = clock();
    primos = qntDePrimos(9000);

    // Subtrai do tempo anterior
    tempof = clock();

    cout << "Qnd de primos: " << primos << endl;
    cout << "Tempo de CPU: " << (float) difftime(tempof, tempoi) / CLOCKS_PER_SEC << " segundos" << endl;
    cout << endl;
}

void mostraDataEHoraLocal()
{
    cout << "Exemplo de data de hora local:" << endl;

    time_t tempo;
    struct tm *infoTempo; // Struct implementada dentro de ctime

    //Pega a quantidade de segundos desde 00:00 de 1 de Janeiro de 1970
    time(&tempo);
    //Converte o time_t para struct tm
    infoTempo = localtime(&tempo);

    // Usando a variavel
    cout << tempo << " segundos desde 00:00 de 1 de Janeiro de 1970" << endl;
    cout << "Data local: " << ctime(&tempo) << endl;

    // Usando a struct
    cout << "Data local: " << asctime(infoTempo) << endl;
    cout << "Dia do ano (0 ~ 365): " << infoTempo->tm_yday << endl;
    cout << "Dia da semana (0 ~ 6):"  << infoTempo->tm_wday << endl;
    cout << "Ano desde 1900: " << infoTempo->tm_year << endl;
    cout << "Mes: (0 ~ 11): " << infoTempo->tm_mon << endl;
    cout << "Dia do mes (1 ~ 31): " << infoTempo->tm_mday << endl;
    cout << "Horario (0~23 : 0~59 : 0~60): " << infoTempo->tm_hour << ":" << infoTempo->tm_min << ':' << infoTempo->tm_sec << endl;
    
    cout << endl;
}

void formatandoSaidaDeDataEHora()
{
    cout << "Exempo de formatacao de data e hora: (Consultar a funcao strftime())" << endl;

    time_t tempo;
    struct tm *infoTempo; // Struct implementada dentro de ctime
    char str[80];

    //Pega a quantidade de segundos desde 00:00 de 1 de Janeiro de 1970
    time(&tempo);
    //Converte o time_t para struct tm
    infoTempo = localtime(&tempo);

    // Guarda na string str de tamanho 80, a informação  "texto" a partir da struct infoTempo
    // Tem uma tabela com a sintaxe de cada informacao 
    strftime(str, 80, "Hora: %I:%M:%S", infoTempo);

    cout << str << endl;
    cout << endl;
}

int qntDePrimos(int n)
{
    int i, j;
    int freq = n-1;
    for(i = 2; i <= n; i++)
        for(j = sqrt(i); j > 1; j--)
            if( i % j == 0) {
                --freq;
                break;
            }

    return freq;
}