// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
using namespace std;

// Escreve um programa que declare um vetor de vinte números inteiros, obtenha os
// valores através do teclado, leia um valor para cada posição e no final mostre
// quantos elementos possuem valor maior, menor e igual ao primeiro elemento do vetor

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    const int n = 20;

    int valores[n];

    int maiores = 0, menores = 0, iguais = 0;

    for (int i = 0; i < n; i++)
    {

        cout << "Introduza os valores:";
        cin >> valores[i];

        if (valores[i] > valores[0])
        {
            maiores++;
        }

        if (valores[i] < valores[0])
        {
            menores++;
        }

        if (valores[i] == valores[0])
        {

            iguais++;
        }
    }


    iguais--;

    cout << "Maiores que o primeiro elemnto: " << maiores << "\n";
    cout << "Menores que o primeiro elemnto: " << menores << "\n";
    cout << "Iguais que o primeiro elemnto: " << iguais << "\n";

    return 0;
}
