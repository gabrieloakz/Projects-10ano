#include <iostream>
#include <fstream>
using namespace std;

// Abre e lê ficheiro
// ▪ E guarde este ficheiro dentro da pasta atual.
// ▪ A pasta atual significa a pasta onde o código - fonte C++ foi guardado.

int main()
{
    char nomefile[30], ch;

    fstream fp;

    cout << "Escreva o nome do ficheiro : ";
    cin.getline(nomefile, 30);

    fp.open(nomefile, fstream::in);

    if (!fp)
    {
        cout << "Ocorreu um erro!";
        return 0;
    }

    cout << "\n------" << nomefile << "-------\n";

    while (fp >> noskipws >> ch)
    {
        cout << ch;
    }

    //     Função noskipws
    //
    // ▪ Quando o sinalizador de formato skipws não está
    // definido, todas as operações no fluxo consideram os
    // caracteres de espaço em branco iniciais como
    // conteúdo válido a ser extraído.
    //
    // ▪ Quando definido, os caracteres iniciais de espaço em
    // branco que não forem necessários são lidos e
    // descartados do fluxo até que um caractere que não
    // seja um espaço em branco seja encontrado.

    fp.close();

    cout << endl;

    return 0;
}
