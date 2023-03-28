#include <iostream>
#include <locale>
using namespace std;

string nome, local;

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");
    cout << "Ola como é que te chamas?";
    cin >> nome;
    cout << "És natural de onde?";
    cin >> local;
    cout << "Bem vindo " << nome << endl
         << local << " é uma bela cidade/vila" << endl;

    return 0;
}
