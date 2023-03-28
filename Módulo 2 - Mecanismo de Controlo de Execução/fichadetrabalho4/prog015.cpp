// gabriel ferreira carvalho 10

// Escreve um programa que exiba o seguinte padrão diamante:

#include <iostream>
using namespace std;

int contagem1, contagem2, linhas = 5;
;

int main()
{

    // Triângulo Inicial

    for (contagem1 = 0; contagem1 <= linhas; contagem1++)
    {

        for (contagem2 = 1; contagem2 <= linhas - contagem1; contagem2++)
        {

            cout << " ";
        }

        for (contagem2 = 1; contagem2 <= 2 * contagem1 - 1; contagem2++)
        {

            cout << "*";
        }

        cout << "\n" ;
    }

    // Triângulo Invertido

    for (contagem1 = linhas - 1; contagem1 >= 0; contagem1--)
    {

        for (contagem2 = 1; contagem2 <= linhas - contagem1; contagem2++)
        {

            cout << " ";
        } 

        for (contagem2 = 1; contagem2 <= 2 * contagem1 - 1; contagem2++)
        {

            cout << "*";
        }

        cout << "\n" ;
    }

    return 0;
}
