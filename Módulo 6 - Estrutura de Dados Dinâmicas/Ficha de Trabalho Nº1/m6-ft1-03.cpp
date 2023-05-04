// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
using namespace std;

// 3) Completa o programa anterior criando a função media(), com os argumentos:
// a) um vetor de inteiros v;
// b) o valor inteiro d da dimensão do vetor;
// c) o endereço de um float m.
// A função deve colocar no endereço apontado por m o valor da média dos elementos no
// vetor v

const int tamanho_vetor = 6;

void somatorio(int *v, int d, int *s)
{

    for (int i = 0; i < d; i++)
    {
        *s = *s + *(v + i); // Somam-se os valores
    }
}

void media(int *v, int d, float *m)
{
    *m = 0;
    for (int i = 0; i < d; i++)
    {
        *m = *m + *(v + i); // somam-se os valores
    }

    *m = *m / d; // media dos valores
}

int main(int argc, char const *argv[])
{
    int v[tamanho_vetor] = {12, 8, 11, 9, 18, 12};
    int soma = 0;
    float med = 0;

    somatorio(v, tamanho_vetor, &soma);

    cout << "Soma: " << soma << endl;

    media(v, tamanho_vetor, &med);

    cout << "Media: " << med << endl;

    return 0;
}
