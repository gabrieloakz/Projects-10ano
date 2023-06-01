// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <locale>
using namespace std;

struct Contacto
{
    string Nome;
    int Telemovel;
    string Aniversario;
};

void MostrarConteudoDoFicheiro()
{

    system("cls");

    puts("\n\tLENDO CONTEÚDO DO FICHEIRO");

    Contacto Do_Ficheiro;
    ifstream InputFile("contactos.psi");
    string LinhaLida;

    if (!InputFile.is_open())
    {
        cout << "ficheiro nao existe!\n";
        system("pause");
        return;
    }

    while (getline(InputFile, LinhaLida))
    {
        // Abrir ficheiro e ler carro do ficheiro para dentro da struct

        stringstream FluxoLinha(LinhaLida);
        FluxoLinha >> Do_Ficheiro.Nome >> Do_Ficheiro.Telemovel >> Do_Ficheiro.Aniversario;

        cout << Do_Ficheiro.Nome << ' ' << Do_Ficheiro.Telemovel << ' ' << Do_Ficheiro.Aniversario << endl;
    }

    InputFile.close();

    system("pause");
}

void AcrescentarUmaPessoaAoFicheiro()
{

    Contacto Do_Ficheiro;

    system("cls");

    puts("\n\tADICIONAR PESSOA AO FICHEIRO");

    cin.ignore();

    cout << "\n\tInsira o nome:";
    getline(cin, Do_Ficheiro.Nome);

    cout << "\n\tInsira o telemóvel:";
    cin >> Do_Ficheiro.Telemovel;

    cin.ignore();

    cout << "\n\tInsira o aniversário:";
    getline(cin, Do_Ficheiro.Aniversario);

    ofstream OutputFile("contactos.psi", ios::app);
    OutputFile << Do_Ficheiro.Nome << ' ' << Do_Ficheiro.Telemovel << ' ' << Do_Ficheiro.Aniversario << "\n";
    OutputFile.close();

    system("pause");
    return;
}

void apagar_e_acrescentar_uma_pessoa()
{
}

int Menu()
{
    int Escolha;

    system("cls");

    puts("\t");

    puts("\n\tTRATAMENTO DE FICHEIROS");

    puts("\n\t1 - Mostrar(ler) conteúdo do ficheiro");

    puts("\n\t2 - Acrescentar uma pessoa ao ficheiro");

    puts("\n\t3 - Limpar conteúdo do ficheiro e acrescentar una pessoa");

    puts("\n\tSair");

    cout << "\n\tDigite uma opção:";
    cin >> Escolha;

    return Escolha;
}

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    int Escolha;

    do
    {

        Escolha = Menu();

        switch (Escolha)
        {
        case 1:
            MostrarConteudoDoFicheiro();
            break;

        case 2:
            AcrescentarUmaPessoaAoFicheiro();
            break;

        default:
            puts("\t");
            puts("\nOpção inválida!Tente novamente!\n\n");
            break;
        }
    } while (Escolha != 0);

    return 0;
}
