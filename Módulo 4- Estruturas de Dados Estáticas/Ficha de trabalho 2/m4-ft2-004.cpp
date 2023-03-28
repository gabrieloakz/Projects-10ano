// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
using namespace std;

// Considera a seguinte declaração:

// int valores[] = {-3, 9, 12, -34, -2, 20, 10};

// Escreve um programa que percorra todos os elementos do vetor e exiba a soma dos
// valores positivos e a quantidade de valores negativos. O programa deverá exibir uma
// saída com a mensagem:

// A soma dos valores positivos é: 51

// A quantidade de valores negativos é: 3

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    int valores[] = {-3, 9, 12, -34, -2, 20, 10};

    int soma = 0;

    int nega = 0;

    for (int i = 0; i < 7; i++)
    {

        if (valores[i] > 0)
        {

            soma = soma + valores[i];
        }

        else
        {

            nega++;
        }
    }

    cout << "\n";

    cout << "Soma dos Valores Positivos:" << soma << "\n";

    cout << "Quantidade de Valores Negativos:" << nega << "\n";

    cout << "\n";

    return 0;
}
