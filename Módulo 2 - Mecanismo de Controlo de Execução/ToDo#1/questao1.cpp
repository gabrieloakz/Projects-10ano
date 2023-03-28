#include <iostream>
#include <locale>
using namespace std;

int n1, n2, n3;

int main()

// Se usado o operador &&, que siguinifica "e" 
// // Encurta-se o código podendo ser comparado duas coisas ao mesmo tempo
// // Exemplo: if (n1>n2 && n1>n3)

{
    setlocale(LC_ALL, "pt_PT.utf8");
    cout << "Insira o primeiro número:";
    cin >> n1;
    cout << "Insira o segundo número:";
    cin >> n2;
    cout << "Insira o terceiro número:";
    cin >> n3;

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout << "O valor máximo é:" << (n1);
        }
    }

    else if (n2 > n3)
    {
        cout << "O valor máximo é:" << (n2);
    }
    else
    {
        cout << "O valor máximo é:" << (n3);
    }

    return 0;
}

