// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
using namespace std;

// Exibir o somatório e o maior dos valores armazenados
// no vetor criado no exercício  anterior.

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    float soma = 0;
    float maiornum = 0;
    float valor[6] = {2.34, 5.40, 1.00, 7.62, 8.82, 3.91};

    //Somatorio
    
    for (int i = 0; i < 6; i++)
    {

        soma = valor[i] + soma;
    
    }

    cout << "Somatório:\n" << soma << endl;

    //Maior Valor
    
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
