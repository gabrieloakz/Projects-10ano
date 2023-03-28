// gabriel ferreira carvalho 10

// Escreve um programa que solicite ao utilizador um número e um carácter. Em
// seguida terá de preencher n linhas, cada uma delas com n caracteres.

#include <iostream>
#include <locale>
using namespace std;

int n, contagem1, contagem2;
char caracter;

// "n" snedo número de de linhas e de carcters na linha.

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    cout << "Introduza um número:";
    cin >> n;
    cout << "Introduza um caracter:";
    cin >> caracter;

    // Primeiro For snedo usado para a contagem das linhas
    // Segundo For sendo usado para contagem de vezes na linha
    // " O <= " determina quando a instrução para e salta para fora
    // Quando termina de escrever uma linha salta pra fora para próxima linha ( 1º For )

    for (contagem1 = 1; contagem1 <= n; contagem1++)
    {

        for (contagem2 = 1; contagem2 <= n; contagem2++)
        {

            cout << caracter;
        }

        cout << "\n";
    }

    system("pause");

    return 0;
}
