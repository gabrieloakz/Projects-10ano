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

void Inserir_Dados(BANDA Dados[],int Num_Bandas)
{

    system("cls");

    puts("\t");

    cout << "\t----- Inserir Dados ------";

    puts("\t");

    cout << "\n\tInsira o nome: ";
    getline(cin, Dados[Num_Bandas].Nome);
    cout << "\n\tInsira o gênero: ";
    getline(cin, Dados[Num_Bandas].Genero);
    cout << "\n\tInsira o número de músicos: ";
    cin >> Dados[Num_Bandas].Numero_Musicos;
    cout << "\n\tInsira a posição no seu rank de favoritas: ";
    cin >> Dados[Num_Bandas].Rank_Favoritas;
    cin.ignore();

    system("pause");
}

// void Editar_Dados(BANDA Dados[])
// {
// }

// void Pesquisar_Dados()
// {
// }

int Menu_Principal()
{

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

void Sair()
{

    system("cls");

    cout << "\n\n\tPressione qualquer tecla para sair do progama!"
         << "\n\n\t";
}

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    system("color 0E");

    BANDA Registro[NUM_BANDAS];

    int MenuEscolhido, Num_Bandas = 0;

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
                }

                break;

            case 2:

                Editar_Dados(Registro);
                break;

            case 3:

                Pesquisar_Dados(Registro);
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

    Sair();

    return 0;
}
