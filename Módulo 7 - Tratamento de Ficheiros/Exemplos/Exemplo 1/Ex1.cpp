// Programa de exemplo simples
// usando fluxos de ficheiros C++.

// Este programa solicita o nome do ficheiro e uma linha para armazenar nesse ficheiro.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string Linha, Nome_Ficheiro;

    cout << "Escreva o nome do ficheiro: ";
    getline(cin, Nome_Ficheiro);

    ofstream fout(Nome_Ficheiro);

    if (!fout)
    {
        cout << "Erro ao criar o ficheiro!\n";
        return 0;
    }

    cout << "Escreve uma linha para armazenar no ficheiro : ";
    getline(cin, Linha);
    
    fout << Linha << "\n";
    
    cout << "\nAs informacoes foram guardadas com sucesso !\n ";
    
    fout.close();

    return 0;
}
