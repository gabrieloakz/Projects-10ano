// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
using namespace std;

const int tamanho_vetor = 6;

void somatorio(int *v, int d, int *s) 
{

    for (int i = 0; i < d; i++)
    {
        *s = *s + *(v + i); // Somam-se os valores
    }
}

int main(int argc, char const *argv[])
{
    int v[tamanho_vetor] = {12, 8, 11, 9, 18, 12};
    int soma = 0;

    somatorio(v, tamanho_vetor, &soma); 

    cout << " " << soma << endl;
    
    return 0;
}
