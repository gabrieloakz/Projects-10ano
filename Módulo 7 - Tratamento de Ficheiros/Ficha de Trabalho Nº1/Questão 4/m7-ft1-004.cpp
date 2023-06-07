// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <fstream> //Para trabalhar com ficheiros
#include <sstream> //Para utilizar stringstream
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

    Contacto Do_Ficheiro;                // Variável da estrutura de dados
    ifstream InputFile("contactos.csv"); // Abre-se o ficheiro no modo de leitura

    // Verifica se o ficheiro está aberto na pasta
    if (!InputFile.is_open())
    {
        cout << "\n\tFicheiro nao existe!\n\n\t";
        system("pause");
        return;
    }

    string LinhaLida; // Variável pra cada linha que será lida
    while (getline(InputFile, LinhaLida))
    {
        // Abre o ficheiro, lê linha a linha e escreve na tela
        // Fluxo das linha lidas

        stringstream FluxoLinha(LinhaLida);

        // Lê o nome no fluxo

        getline(FluxoLinha, Do_Ficheiro.Nome, '|');

        // Cria se uma string para o telemóvel eLê o fluxo com a string
        // Converte a string tlm para int Telemovel usando a função stoi (string to int)

        string tlm;
        getline(FluxoLinha, tlm, '|');
        Do_Ficheiro.Telemovel = stoi(tlm);

        // Lê o aniversário no fluxo

        getline(FluxoLinha, Do_Ficheiro.Aniversario, '|');

        // Exibe os dados na tela graças a estrutura de dados que os armazenou

        cout << "\n\t" << Do_Ficheiro.Nome << '|' << Do_Ficheiro.Telemovel << '|' << Do_Ficheiro.Aniversario << endl;
    }

    InputFile.close();

    cout << "\n\t";
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

    ofstream OutputFile("contactos.csv", ios::app);
    OutputFile << Do_Ficheiro.Nome << '|' << Do_Ficheiro.Telemovel << '|' << Do_Ficheiro.Aniversario << "\n";
    OutputFile.close();

    system("pause");
    return;
}

void ApagareAcrescentarUmaPessoa()
{

    system("cls");

    puts("\n\tLIMPANDO E ADICIONANDO NOVA PESSOA ");

    ofstream OutputFile("contactos.csv", ios::trunc);
    AcrescentarUmaPessoaAoFicheiro();

    if (!OutputFile.is_open())
    {
        cout << "\n\tFicheiro nao existe!\n\n\t";
        system("pause");
        return;
    }

    system("pause");
}

int Menu()
{
    int Escolha;

    system("cls");

    puts("\t");

    puts("\n\tTRATAMENTO DE FICHEIROS");

    puts("\n\t1 - Mostrar conteúdo do ficheiro");

    puts("\n\t2 - Acrescentar uma pessoa ao ficheiro");

    puts("\n\t3 - Limpar conteúdo do ficheiro e acrescentar una pessoa");

    puts("\n\tSair");

    cout << "\n\tDigite uma opção: ";

    while (!(cin >> Escolha))
    {

        cout << "\n\tEntrada inválida. Por favor, digite um número válido: ";

        // Limpa o buffer do std::cin para remover a entrada inválida
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return Escolha;
}

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    int Escolha;

    do
    {

        Escolha = Menu();

        if (Escolha != 0)
        {
            switch (Escolha)
            {
            case 1:
                MostrarConteudoDoFicheiro();
                break;

            case 2:
                AcrescentarUmaPessoaAoFicheiro();
                break;

            case 3:
                ApagareAcrescentarUmaPessoa();
                break;

            default:
                puts("\t");
                puts("\nOpção inválida!Tente novamente!\n\n");
                break;
            }
        }

    } while (Escolha != 0);

    return 0;
}
