// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Duas soluções diferentes para a ficha na questão de ler e escrever no console dados do ficheiro.

int main()
{

    ifstream Ficheiro("pessoas.txt");
    string LinhaLida;

    while (getline(Ficheiro, LinhaLida))
    {
        cout << "Nome: " << LinhaLida << "\n";

        getline(Ficheiro, LinhaLida);
        cout << "Idade: " << LinhaLida << "\n";

        getline(Ficheiro, LinhaLida);
        cout << "Nacionalidade: " << LinhaLida << "\n\n";
    }

    Ficheiro.close()

    // |Outra solução possível|

    int linha = 0;
    while (getline(Ficheiro, LinhaLida))
    {
        linha++;
        switch (linha)
        {
        case 1:
            cout << LinhaLida << "\n";
            break;

        case 2:
            cout << LinhaLida << "\n";
            break;

        case 3:
            cout << LinhaLida << "\n\n";
            linha = 0;
            break;

        default:
            break;
        }
    }

    Ficheiro.close();

    return 0;
}
