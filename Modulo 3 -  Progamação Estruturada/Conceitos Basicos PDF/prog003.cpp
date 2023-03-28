#include <iostream>
#include <locale>
using namespace std;

/*Procedimento*/

int MultiplosDe3()
{
    
    int soma;

    // 1ª Alternativa

    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";

            soma = soma + i;
        }
    }

    return soma;

    // 2ª Alternativa

    // for ( i = 3; i < count; i+3)
    // {
    //     cout << i << " ";

    //       soma = soma + i;
    // }
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");

    int resultado;

    resultado = MultiplosDe3();

    cout << "\nSoma dos múltiplos de 3:" << resultado << endl;

    return 0;
}
