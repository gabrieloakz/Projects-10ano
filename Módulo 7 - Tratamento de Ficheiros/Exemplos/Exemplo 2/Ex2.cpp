// ▪ Vejamos o seguinte programa, que :
// ▪ irá receber o nome do ficheiro do utilizador no tempo de execução do programa,
// ▪ receberá o conteúdo a ser armazenado no ficheiro e,
// ▪ finalmente, permitirá que o utilizador veja o conteúdo do ficheiro no ecrã de saída.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream file;
    string inform, ficheiro;
    char ch;

    cout << "Nome do ficheiro: ";
    getline(cin, ficheiro);

    file.open(ficheiro);

    if (file)
    {
        cout << "O ficheiro inserido ja existe. Por favor, tente novamente.\n ";
        return 0;
    }

    else
    {
        file.close();
        ofstream fout(ficheiro);
        if (!fout)
        {
            cout << "Erro ao criar o ficheiro!\n";
            return 0;
        }

        cout << "Escreva o texto para guardar no ficheiro: ";
        getline(cin, inform);

        fout << inform << "\n";

        cout << "As informacoes foram guardadas com sucesso!\n";
        fout.close();

        cout << "Quer ler o ficheiro? \"" << ficheiro << "\"? (s / n) : ";
        cin >> ch;

        if (ch == 's' || ch == 'S')
        {
            string linha;
            ifstream file(ficheiro);
            
            while (getline(file, linha))
            {
                cout << linha;
            }
            
            file.close();
        }
    }
    
    cout << endl;
    
    return 0;
}
