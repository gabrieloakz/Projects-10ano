// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Apresenta um programa em C++ com a tua solução para cada um dos seguintes problemas.
// O nome do programa deve ser m7-ft1-00 seguido do respetivo número de problema
// (exemplo: m7-ft1-001, m7-ft1-002, …). Identifica no programa, como comentário, o teu nome.
// 1) No bloco de notas, crie um ficheiro de 
// nome “pessoas.txt”. Este ficheiro deve 
// estar na mesma pasta onde irá criar o 
// programa da alínea 3. Insira o conteúdo 
// da imagem ao lado, no ficheiro criado.
// 2) Acrescente o seu nome, idade e 
// nacionalidade, no final do ficheiro.
// Nota: Tem de ter nova linha após a 
// última linha do seu ficheiro.
// 3) Construa um programa que leia o ficheiro, linha a linha, e que vá escrevendo no ecrã o 
// texto lido. O output do seu programa deverá ser organizado como se mostra na imagem.


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
