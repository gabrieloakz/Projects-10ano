// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
using namespace std;

// Escreve um programa que dada uma sequência de n números a incluir num vetor, vai
// imprimir os mesmos na ordem inversa à da sua leitura. Define n como uma constante
// que poderá ser alterada antes da compilação do programa, permitindo assim que o
// código mantenha inalterado e funcional, qualquer que seja o valor atribuído a n.

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    const int n = 3;

    int Numeros[n];

    int i;

    for (i = 0; i < n; i++)
    {

        cout << i << "/" << n << "\t";
        cout << "Insira os números:";
        cin >> Numeros[i];
    }

    for (i = n - 1; i >= 0; i--)
    {
        cout  << Numeros[i] << " ";
    }

    cout << "\n";

    return 0;
}
