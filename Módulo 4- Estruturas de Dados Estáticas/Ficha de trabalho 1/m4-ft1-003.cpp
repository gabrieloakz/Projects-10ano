// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
using namespace std;

// Solicitar ao utilizador que introduza 5 números inteiros,
// guardar os números num vetor, e informar qual dos números introduzidos é o maior

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    int valor[5] ;
    int maiornum = 0 ;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Introduza os valores:" ;
        cin >> valor[i];
        system ("cls") ;
    }
    
    for (int i = 0; i < 6; i++)
    {

        if (valor[i] > maiornum)
        {
            maiornum = valor[i] ;
        }
    }

    cout << "\nMaior Valor:\n" << maiornum << "\n\n";

    return 0;
}
