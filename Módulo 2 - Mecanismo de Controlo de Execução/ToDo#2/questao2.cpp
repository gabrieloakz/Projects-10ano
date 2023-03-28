#include <iostream>
#include <locale>
using namespace std;

char letra;

int main(int argc, char const *argv[])
{

    setlocale(LC_ALL, "pt_PT.utf8");

    cout << "Insira a letra";
    cin >> (letra);
    letra = tolower(letra);

    switch (letra)
    {
    case 'a':
        cout << ("A letra é uma vogal!\n");
        break;

    case 'e':
        cout << ("A letra é uma vogal!\n");
        break;

    case 'i':
        cout << ("A letra é uma vogal!\n");
        break;

    case 'o':
        cout << ("A letra é uma vogal!\n");
        break;

    case 'u':
        cout << ("A letra é uma vogal!\n");
        break;

    default:
        cout << ("A letra é uma consoante");
        break;
    }

    return 0;
}
