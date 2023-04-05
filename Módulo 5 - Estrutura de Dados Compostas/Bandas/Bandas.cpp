// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
#include <string>
using namespace std;

// 1) Define uma estrutura que irá representar bandas de
// música. Essa estrutura deve ter o nome da banda, que
// tipo de música ela toca, o número de músicos e em que
// posição do ranking a banda está entre as tuas 5 bandas
// favoritas.

// 2) Cria um programa para preencher as 5 estruturas de
// bandas criadas no exercício anterior. O programa, após
// criar e preencher, deve exibir todas as informações das
// bandas.

// 3) Com base no programa do exercício anterior, apresenta
// na função principal um menu que permita inserir, editar
// e consultar/pesquisar um determinado registo através
// do nome da banda.

const int MAX_BANDAS = 5;

struct BANDA
{

    string Nome;
    string Genero;
    int Numero_Musicos;
    int Rank_Favoritas;
};

int Inserir_Dados(BANDA Dados[], int Num_Bandas)
{

    system("cls");

    puts("\t");

    cout << "\t----- Inserir Dados ------";

    puts("\t");

    cin.ignore();
    cout << "\n\tInsira o nome: ";
    getline(cin, Dados[Num_Bandas].Nome);
    cout << "\n\tInsira o gênero: ";
    getline(cin, Dados[Num_Bandas].Genero);
    cout << "\n\tInsira o número de músicos: ";
    cin >> Dados[Num_Bandas].Numero_Musicos;
    cout << "\n\tInsira a posição no seu rank de favoritas: ";
    cin >> Dados[Num_Bandas].Rank_Favoritas;

    Num_Bandas++;

    return Num_Bandas;
}

void Mostrar_Registros(BANDA Dados[], int Num_Bandas)
{

    if (Num_Bandas > 0)
    {
        for (int i = 0; i < Num_Bandas; i++)
        {
            cout << "\n\tPosição: " << i + 1;

            cout << "\n\tNome: " << Dados[i].Nome;

            cout << "\n\tGênero: " << Dados[i].Genero;

            cout << "\n\tNúmero de músicos: " << Dados[i].Numero_Musicos;

            cout << "\n\tRank Favoritas: " << Dados[i].Rank_Favoritas << "\n\n";
        }
    }

    else
    {
        cout << "\n\t\tAinda não foram adicionadas bandas!";
    }
}

void Editar_Dados(BANDA Dados[], int Num_Bandas)
{

    int Registro;

    system("cls");

    puts("\t");

    cout << "\t----- Editar Dados ------";

    puts("\t");

    Mostrar_Registros(Dados, Num_Bandas);

    cout << "\n\tQual registro deseja alterar: ";
    cin >> Registro;

    system("cls");

    if (Registro >= 0 && Registro < Num_Bandas)
    {

        puts("\t");

        cin.ignore();
        cout << "\n\tInsira o nome: ";
        getline(cin, Dados[Registro].Nome);
        cout << "\n\tInsira o gênero: ";
        getline(cin, Dados[Registro].Genero);
        cout << "\n\tInsira o número de músicos: ";
        cin >> Dados[Registro].Numero_Musicos;
        cout << "\n\tInsira a posição no seu rank de favoritas: ";
        cin >> Dados[Registro].Rank_Favoritas;
    }

    system("pause");
}

void Pesquisar_Dados(BANDA Dados[], int Num_Bandas)
{

    string nome;

    system("cls");

    puts("\t");

    cout << "\t----- Pesquisar Dados ------";

    puts("\t");
    
    cin.ignore();
    cout << "\n\tDigite a banda que deseja encontrar: ";
    getline(cin, nome);

    int posicao = -1;

    for (int i = 0; i < Num_Bandas; i++)
    {
        if (nome.compare(Dados[i].Nome) == 0)

        cout << "\n\tRegisto encontrado! ";
        posicao = i;
    }

    if (posicao == -1)
    {

        cout << "\n\tRegisto não encontrado! ";
    }

    else
    {
        cout << "\n\tPosição: " << posicao + 1;

        cout << "\n\tNome: " << Dados[posicao].Nome;

        cout << "\n\tGênero: " << Dados[posicao].Genero;

        cout << "\n\tNúmero de músicos: " << Dados[posicao].Numero_Musicos;

        cout << "\n\tRank Favoritas: " << Dados[posicao].Rank_Favoritas << "\n\n";
    }

    system("pause");
}

int Menu_Principal()
{

    int MenuEscolhido;

    system("cls");

    puts("\t");

    cout << "\t----- Dados da Banda ------";

    puts("\t");
    puts("\t1 - Inserir Dados");
    puts("\t2 - Editar Dados");
    puts("\t3 - Pesquisar Dados");

    cout << "\n\n\tInsira a sua escolha: ";

    cin >> MenuEscolhido;

    return MenuEscolhido;
}

int main() 
{

    setlocale(LC_ALL, "pt_PT.utf8");

    system("color 0E");

    int MenuEscolhido, Num_Bandas = 0;

    BANDA Registro[MAX_BANDAS];

    do
    {

        MenuEscolhido = Menu_Principal();

        if (MenuEscolhido != 0)
        {

            switch (MenuEscolhido)
            {
            case 1:

                if (Num_Bandas < MAX_BANDAS)
                {
                    Num_Bandas = Inserir_Dados(Registro, Num_Bandas);
                }
                else
                {
                    "\n\tErro! Não é possível adiconar mais bandas!";
                }

                break;

            case 2:

                Editar_Dados(Registro, Num_Bandas);
                break;

            case 3:

                Pesquisar_Dados(Registro, Num_Bandas);
                break;

            default:

                puts("\t");
                puts("\tEscolha inválida, tente novamente");
                cout << "\n\n\t";
                system("pause");
                break;
            }
        }

    } while (MenuEscolhido != 0);

    return 0;
}
