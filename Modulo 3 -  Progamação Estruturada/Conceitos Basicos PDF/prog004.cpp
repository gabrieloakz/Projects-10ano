#include <iostream>
#include <locale>
using namespace std;

int num1, num2, aux;

void TrocaNumeros()
{

    aux = num1;
    num1 = num2;
    num2 = aux;

}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    cout << "Insira o primeiro número:";
    cin >> num1;
    cout << "Insira o segundo número:";
    cin >> num2;

    cout << "Antes da troca: 1º número = " << num1 << " e 2º número = " << num2 << endl;
    TrocaNumeros() ;
    cout << "Depois da troca: 1º número = " << num1 << " e 2º número = " << num2 << endl;
    
     return 0;
}
