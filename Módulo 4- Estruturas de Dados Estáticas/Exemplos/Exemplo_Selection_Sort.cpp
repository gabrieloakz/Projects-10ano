#include <iostream>
using namespace std;
#define TAMANHO 10
int main()
{
    int vetor[TAMANHO] = {37, 54, 21, 68, 91, 2, 51, 64, 34, 25};
    int valor = 20;
    int i, j, aux, maior;

    // Ordenação crescente

    // Para decrescente apenas inverter o sinal na condição de comparação: >

    for (i = 0; i < TAMANHO - 1; i++)
    {
        maior = INT_MIN;

        for (j = 0; j < TAMANHO - i; j++)

            if (vetor[j] > vetor[maior])

                maior = j;
        aux = vetor[TAMANHO - i - 1];
        vetor[TAMANHO - i - 1] = vetor[maior];
        vetor[maior] = aux;
    }

    cout << "{" << vetor[0];

    for (i = 1; i < TAMANHO; i++)
    {
        cout << ", " << vetor[i];
    }

    cout << "}\n";

    return 0;
}