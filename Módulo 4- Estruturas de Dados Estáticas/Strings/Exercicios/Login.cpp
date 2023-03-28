// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
#include <string> //biblioteca pra trabalhar com strings
using namespace std;

// Interface de login através de username e password definidos previamente

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    system("color 0e");

    string username = "seupai", password = "666";
    string username_inserido, password_inserida;

    cout << "\tNome de Usuário : ";

    getline(cin, username_inserido);

    cout << "\n\tSenha : ";

    getline(cin, password_inserida);

    if (username_inserido == username)
    {
        if (password_inserida == password)
        {
            puts("\n\tLOGADO!");
            cout << "\n\t";
        }
    }

    else
    {
        puts("\n\tACESSO NEGADO!");
        cout << "\n\t";
    }

    return 0;
}

