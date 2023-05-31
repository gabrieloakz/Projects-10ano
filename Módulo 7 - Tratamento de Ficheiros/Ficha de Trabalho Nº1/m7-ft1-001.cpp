// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main()
{

    ifstream Ficheiro("pessoas.csv");
    string Linha_Lida;
    string Celula;

    while (getline(Ficheiro, Linha_Lida))
    {
        stringstream Fluxo_Linha(Linha_Lida);

        while (getline(Fluxo_Linha, Celula, ';'))
        {
            cout << Celula << "\t";
        }
        cout << "\n";
        // Sa´da do texto do ficheiro
        // cout << linhalida;
        
    }

    //Fechar o ficheiro
    

    Ficheiro.close();

    return 0;
}
