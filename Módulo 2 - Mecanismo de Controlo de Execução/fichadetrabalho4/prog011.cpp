// gabriel ferreira carvalho 10

// Escreve um programa que solicite ao utilizador um número e escreva em simultâneo
// a sequência crescente e decrescente entre 1 e esse número.

#include <iostream>
#include <locale>
using namespace std;

int num, contagem;

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    cout << "Introduza um número:";
    cin >> num;

// De um lado é exibido do 1 até o número limite
// Dá se um espaço e é exibido  na ordem inversa partindo do numéro limite
// Por isso o +1 após o num - contagem

    for (contagem = 1; contagem <= num; contagem++)
    {
        cout << contagem << " " << num - contagem + 1 << endl;
    }

    system("pause");

    return 0;
}
