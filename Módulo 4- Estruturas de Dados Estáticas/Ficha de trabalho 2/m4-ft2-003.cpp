// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
using namespace std;

// Dados dois vetores, x e y, ambos com n elementos,
// determinar o produto escalar desses vetores.

int main()
{
    const int n = 3;

    int Soma = 0 ;

    int x[n];

    int y[n];

    int i;

    for (i = 1; i <= n; i++)
    {

        cout << "Insira os valores de x:";
        cin >> x[i];
        cout << "Insira os valores de y:";
        cin >> y[i];

        Soma = Soma + (x[i] * y[i]);

    }

    cout << "\nProduto Escalar:" << Soma << endl ;

    return 0;
}
