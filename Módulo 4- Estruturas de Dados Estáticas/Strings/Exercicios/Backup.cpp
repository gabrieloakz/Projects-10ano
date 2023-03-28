// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
#include <string> //biblioteca pra trabalhar com strings
using namespace std;

// Pede ao usuário para ibnserir seu nome e guarda o nome em uma cópia backup.

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    string nome;

    char backup[20];

    cout << "Insira o seu nome completo : ";

    getline(cin, nome);

    nome.copy(backup, sizeof nome);

    system("pause");

    cout << "\nBackup: " << backup;

    return 0;
}
