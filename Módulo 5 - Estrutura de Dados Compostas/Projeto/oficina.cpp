// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

// Descrição:Pretende-se construir um programa que faça a gestão de clientes e
// respetivos automóveis da oficina “CarRepair”, oficina de reparações de automóveis.

#include <iostream>
#include <string>
#include <locale>
using namespace std;

const int MAX_CLIENTE = 20;

const int MAX_AUTO = 20;

int Num_Clientes = 8;

int Num_Automveis = 10;

struct Cliente
{

    int idCliente;

    string nome;

    string email;

    int tlm;
};

struct Automovel
{

    int idAuto;

    int idCliente;

    string marca;

    string modelo;

    int ano;

    string num_chassi;
};

Cliente clientes[MAX_CLIENTE] = {
    {1, "João Pinto", "j.pint@gmail.com", 912352513},
    {2, "Ana Sousa", "a na_sousa@gmail.com", 913357788},
    {3, "Rita Santos", "rs@sapo.pt", 936789147},
    {4, "Rui Lopes ", "ruislopeshotmail.com", 923852456},
    {5, "Carlos Torres", "carlosmt@ctt.com", 967258456},
    {6, "Miguel Castro", "migas@sapo.pt", 968124637},
    {7, "Teresa Silva", "tsmp@gmail.com", 912785423},
    {8, "Lucinda Sá", "lmss@hotmail.com", 934254713},
};

Automovel automoveis[MAX_AUTO] = {
    {1, 7, "Peugeot", "308", 2020, "28Y9D"},
    {2, 2, "Honda", "Jazz", 2018, "97P4T"},
    {3, 6, "Audi", "A3", 2019, "55FK87"},
    {4, 3, "Seat", "Ibiza", 2020, "H1M78"},
    {5, 2, "Dacia", "Sandero", 2019, "W51S9"},
    {6, 1, "Mercedes", "Classe A", 2017, "J5J91"},
    {7, 4, "Opel", "Corsa", 2015, "4Z4B5"},
    {8, 5, "Toyota", "Corolla HB", 2022, "L4U78"},
    {9, 8, "Citroen", "C4", 2021, "1D83U"},
    {10, 5, "Renault", "Megane", 2016, "3G5R7"},

};

int menu_principal()
{
    int Opcao_Escolhida;

    system("cls");

    puts("======== MENU PRINCIPAL ========");

    puts("\n\t1 - Menu Clientes");

    puts("\n\t2 - Menu Automóveis");

    puts("\n\t3 - Pesquisas");

    puts("\n\n\t0 - Sair");

    puts("\n================================\n");

    cout << "Opção: ";

    cin >> Opcao_Escolhida;

    return Opcao_Escolhida;
}

int novo_cliente()
{

    if (Num_Clientes < MAX_CLIENTE)
    {

        system("cls");

        puts("================ NOVO CLIENTE ==============");

        puts("\n\t1 - Insira Dados de um novo Cliente");

        cin.ignore();

        cout << "\n\tNome:";
        getline(cin, clientes[Num_Clientes].nome);

        cout << "\n\tEmail:";
        getline(cin, clientes[Num_Clientes].email);

        cout << "\n\tTelemóvel:";
        cin >> clientes[Num_Clientes].tlm;

        puts("\n============================================\n");

        Num_Clientes++;

        return 1;
    }

    else
    {
        "\n\tErro! Não é possível adiconar mais clientes!";
        return 0;
    }
}

void mostrar_todos_clientes()
{

    system("cls");

    puts("==================== TODOS OS CLIENTES ====================");

    for (int i = 0; i < Num_Clientes; i++)
    {

        cout << "\n\t [" << i + 1 << "]:" << clientes[i].nome << ", " << clientes[i].email << ", " << clientes[i].tlm << "\n";
    }

    puts("\n===========================================================\n\n");

    system("pause");
}

int mostrar_cliente(int id)
{

    system("cls");

    for (int i = 0; i < MAX_CLIENTE; i++)
    {
        if (clientes[i].idCliente == id)
        {
            cout << "\n\t [" << id << "]:" << clientes[i].nome << ", " << clientes[i].email << ", " << clientes[i].tlm;
            return 1;
        }
    }
    return 0;
}

int menu_clientes()
{

    int Opcao_Escolhida;

    system("cls");

    puts("================ MENU CLIENTES ==================");

    puts("\n\t1 - Inserir Clientes");

    puts("\n\t2 - Ver Todos os Clientes");

    puts("\n\t3 - Mostrar Dados do cliente pelo código");

    puts("\n\n\t0 - Sair");

    puts("\n=================================================\n");

    cout << "Opção: ";

    cin >> Opcao_Escolhida;

    return Opcao_Escolhida;
}

int novo_automovel()
{

    system("cls");

    if (Num_Automveis < MAX_AUTO)
    {

        puts("================ NOVO AUTOMÓVEL ================");

        puts("\n\t1 - Insira Dados de um novo automóvel");

        cin.ignore();

        cout << "\n\tIDCliente:";
        cin >> automoveis[Num_Automveis].idCliente;

        cin.ignore();

        cout << "\n\tMarca:";
        getline(cin, automoveis[Num_Automveis].marca);

        cout << "\n\tModelo:";
        getline(cin, automoveis[Num_Automveis].modelo);

        cout << "\n\tAno:";
        cin >> automoveis[Num_Automveis].ano;

        cin.ignore();

        cout << "\n\tNúmero do chassi:";
        getline(cin, automoveis[Num_Automveis].num_chassi);

        puts("\n===========================================\n");

        Num_Automveis++;

        return 1;
    }

    else
    {
        "\n\tErro! Não é possível adiconar mais automóveis!";
        return 0;
    }
}

void mostrar_todos_automoveis()
{

    system("cls");

    puts("==================== TODOS OS AUTOMÓVEIS ================");

    for (int i = 0; i < Num_Automveis; i++)
    {

        cout << "\n\t [" << i + 1 << "]:" << automoveis[i].idCliente << ", " << automoveis[i].marca << ", " << automoveis[i].modelo << ", " << automoveis[i].ano << ", " << automoveis[i].num_chassi << "\n";
    }

    puts("\n===================================================\n\n");

    system("pause");
}

int mostrar_automovel(int id)
{
    int numcarros = 0;

    system("cls");

    for (int i = 0; i < Num_Automveis; i++)
    {
        if (automoveis[i].idCliente == id)
        {
            cout << "\n\t [" << automoveis[i].idAuto << "]:" << automoveis[i].marca << ", " << automoveis[i].modelo << ", " << automoveis[i].ano << ", " << automoveis[i].num_chassi << "\n";

            numcarros++;
        }
    }

    if (numcarros)
    {
        cout << "\n\tO cliente com este id tem: " << numcarros << " carro" << (numcarros > 1 ? "s" : "") << ".\n";
        return 1;
    }
    return 0;
}

int menu_automoveis()
{

    int Opcao_Escolhida;

    system("cls");

    puts("================ MENU AUTOMÓVEIS ================");

    puts("\n\t1 - Inserir novo automóvel");

    puts("\n\t2 - Ver Todos os Automóveis");

    puts("\n\t3 - Mostrar Dados de um automóvel pelo código");

    puts("\n\n\t0 - Sair");

    puts("\n===============================================\n");

    cout << "Opção: ";

    cin >> Opcao_Escolhida;

    return Opcao_Escolhida;
}

int automoveis_telemovel(int tlm)
{

    system("cls");

    int numcarros = 0;

    for (int i = 0; i < Num_Clientes; i++)
    {
        if (clientes[i].tlm == tlm)
        {
            mostrar_automovel(clientes[i].idCliente);
            return 1;
        }
    }
    return 0;
}

int automoveis_matricula_anteriores(int ano_input)
{

    // Mostre os automóveis com matrícula igual ou anterior a um dado ano;

    int Num_carros = 0;

    for (int i = 0; i < Num_Automveis; i++)
    {
        if (automoveis[i].ano <= ano_input)
        {
            cout << "\n\t [" << automoveis[i].idAuto << "]:" << automoveis[i].marca << ", " << automoveis[i].modelo << ", " << automoveis[i].ano << ", " << automoveis[i].num_chassi << "\n";
            Num_carros++;
        }
    }

    return Num_carros;
}

int automoveis_matricula_posteriores(int ano_input)
{

    int Num_carros = 0;

    for (int i = 0; i < Num_Automveis; i++)
    {
        if (automoveis[i].ano >= ano_input)
        {
            cout << "\n\t [" << automoveis[i].idAuto << "]:" << automoveis[i].marca << ", " << automoveis[i].modelo << ", " << automoveis[i].ano << ", " << automoveis[i].num_chassi << "\n";
            Num_carros++;
        }
    }

    return Num_carros;
}

int automoveis_numchassi(string numchassi_input)
{
    int Num_carros = 0;

    for (int i = 0; i < Num_Automveis; i++)
    {
        if (numchassi_input.compare(automoveis[i].num_chassi) == 0)

            cout << "\n\t [" << automoveis[i].idAuto << "]:" << automoveis[i].marca << ", " << automoveis[i].modelo << ", " << automoveis[i].ano << ", " << automoveis[i].num_chassi << "\n";
        Num_carros++;
    }

    return Num_carros;
}

int menu_pesquisas()
{

    int Opcao_Escolhida;

    system("cls");

    puts("================ MENU PESQUISAS ================");

    puts("\n\t1 - Pesquisar automóveis do cliente com um determinado telemóvel");

    puts("\n\t2 - Pesquisar automóveis com matrícula igual ou anterior a um dado ano");

    puts("\n\t3 - Pesquisar automóveis com matrícula igual ou posterior a um dado ano");

    puts("\n\t4 - Pesquisar automóvel com um certo número de chassi;");

    puts("\n\n\t0 - Pesquisar o automóvel com um certo número de chassi");

    puts("\n===============================================\n");

    cout << "Opção: ";

    cin >> Opcao_Escolhida;

    return Opcao_Escolhida;
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    system("color 0e");

    int opcao, opcao_menu_clientes, opcao_menu_automoveis, opcao_menu_pesquisas, res, idCliente, tlm, ano_input;
    string numchassi_input;

    do
    {
        opcao = menu_principal();

        switch (opcao)
        {

        case 1:

            do
            {
                opcao_menu_clientes = menu_clientes();

                switch (opcao_menu_clientes)
                {

                case 1:
                    res = novo_cliente();

                    if (res)
                        cout << "\nAdicionado!\n\n";
                    else
                        cout << "\nErro!\n\n";

                    system("pause");

                    break;

                case 2:

                    mostrar_todos_clientes();
                    break;

                case 3:

                    system("cls");

                    puts("================ PESQUISAR CLIENTES ================\n\t");

                    cout << "Insira o ID desejado:";
                    cin >> idCliente;

                    puts("\n===============================================\n");

                    res = mostrar_cliente(idCliente);

                    if (res)
                        cout << "\n\tSucesso!\n\n";
                    else
                        cout << "\n\tInsucesso!\n\n";

                    system("pause");
                    break;

                case 0:
                    break;

                default:
                    puts("\nERRO:Inseriu uma opção inválida.\nTente novamente.\n\n");
                    system("pause");

                    break;
                }
            } while (opcao_menu_clientes != 0); // Menu clientes

            if (opcao_menu_clientes != 0) // Menu automóveis
            {

            case 2:

                do

                {
                    opcao_menu_automoveis = menu_automoveis();

                    switch (opcao_menu_automoveis)
                    {

                    case 1:

                        res = novo_automovel();

                        if (res)
                            cout << "\n\tAdicionado!\n\n";
                        else
                            cout << "\n\tErro!\n\n";

                        system("pause");
                        break;

                    case 2:

                        mostrar_todos_automoveis();
                        break;

                    case 3:
                        system("cls");

                        puts("================ PESQUISAR AUTOMÓVEIS ================\n\t");

                        cout << "Insira o ID desejado:";
                        cin >> idCliente;

                        puts("\n===============================================\n");

                        res = mostrar_automovel(idCliente);

                        if (res)
                            cout << "\n\tSucesso!\n\n";
                        else
                            cout << "\n\tInsucesso!\n\n";

                        system("pause");
                        break;

                    case 0:
                        break;

                    default:

                        puts("\nERRO:Inseriu uma opção inválida.\nTente novamente.\n\n");
                        system("pause");
                        break;
                    }

                } while (opcao_menu_automoveis != 0);
            }

            if (opcao_menu_clientes && opcao_menu_automoveis != 0) // Menu pesquisas
            {
            case 3:

                do

                {
                    opcao_menu_pesquisas = menu_pesquisas();

                    switch (opcao_menu_pesquisas)
                    {
                    case 1:

                        system("cls");

                        puts("================ PESQUISAR AUTOMÓVEIS COM TELEMÓVEL ================\n\t");

                        cout << "Insira o telem:";
                        cin >> tlm;

                        puts("\n===============================================\n");

                        res = automoveis_telemovel(tlm);

                        if (res)
                            cout << "\n\tSucesso!\n\n";
                        else
                            cout << "\n\tInsucesso!\n\n";

                        system("pause");
                        break;

                    case 2:
                        system("cls");

                        puts("================ PESQUISAR AUTOMÓVEIS COM MATRÍCULA E ANTERIORES ================\n\t");

                        puts("Pesquisa os automóveis com matrícula igual ou anterior a um dado ano.\n\t");

                        cout << "Insira o ano da matrícula: ";
                        cin >> ano_input;

                        puts("\n===============================================\n");

                        res = automoveis_matricula_anteriores(ano_input);

                        if (res)
                            cout << "\n\tSucesso!\n\n";
                        else
                            cout << "\n\tInsucesso! Não há automóveis matriculados neste período\n\n";

                        system("pause");
                        break;

                    case 3:
                        system("cls");

                        puts("================ PESQUISAR AUTOMÓVEIS COM MATRÍCULA E POSTERIORES ================\n\t");

                        puts("Pesquisa os automóveis com matrícula igual ou posterior a um dado ano.\n\t");

                        cout << "Insira o ano da matrícula: ";
                        cin >> ano_input;

                        puts("\n===============================================\n");

                        res = automoveis_matricula_posteriores(ano_input);

                        if (res)
                            cout << "\n\tSucesso!\n\n";
                        else
                            cout << "\n\tInsucesso! Não há automóveis matriculados neste período\n\n";

                        system("pause");
                        break;

                    case 4:
                        system("cls");

                        puts("================ PESQUISAR AUTOMÓVEIS COM NÚMERO DE CHASSI ================\n\t");

                        cout << "Insira o número do chassi: ";
                        cin >> numchassi_input;

                        puts("\n===============================================\n");

                        res = automoveis_numchassi(numchassi_input);

                        if (res)
                            cout << "\n\tSucesso!\n\n";
                        else
                            cout << "\n\tInsucesso! Não há automóveis com este número de chassi!\n\n";

                        system("pause");
                        break;

                    case 0:

                        break;

                    default:
                        puts("\nERRO:Inseriu uma opção inválida.\nTente novamente.\n\n");
                        system("pause");
                        break;
                    }
                } while (opcao_menu_pesquisas != 0);
            }
        }

    } while (opcao != 0);

    cout << "\nObrigado por usar o programa. Até à proxima.\n\n";

    return 0;
}
