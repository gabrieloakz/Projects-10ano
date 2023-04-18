// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

// Descrição:Pretende-se construir um programa que faça a gestão de clientes e
// respetivos automóveis da oficina “CarRepair”, oficina de reparações de automóveis.

#include <iostream>
#include <string>
#include <locale>
using namespace std;

const int MAX_CLIENTE = 20;

int Num_Clientes = 8;

struct Cliente
{

    int idCliente;

    string nome;

    string email;

    int tlm;
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

    cout << "Opção:";

    cin >> Opcao_Escolhida;

    return Opcao_Escolhida;
}

int novo_cliente()
{

    // 9.2. Leia os dados de um novo cliente e insira na primeira posição livre do vetor clientes.
    // 9.3. Devolva 1 no caso de se ter inserido com sucesso o novo cliente(não se ultrapassou
    // o limite do vetor) ou 0 no caso de não ter sido possível inserir novo cliente.

    if (Num_Clientes < MAX_CLIENTE)
    {

        system("cls");

        _sleep(300);

        puts("================ NOVO CLIENTE ================");

        puts("\n\t1 - Insira Dados de um novo Cliente");

        cin.ignore();

        cout << "\n\tNome:";
        getline(cin, clientes[Num_Clientes].nome);

        cout << "\n\tEmail:";
        getline(cin, clientes[Num_Clientes].email);

        cout << "\n\tTelemóvel:";
        cin >> clientes[Num_Clientes].tlm;

        puts("\n===========================================\n");

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

    _sleep(300);

    puts("================ TODOS OS CLIENTES ================");

    for (int i = 0; i < Num_Clientes; i++)
    {

    cout << "\n\t [" << i+1 << "]:" <<  clientes[i].nome <<  ", " << clientes[Num_Clientes].email << ", " <<   ;


            

    }

    puts("\n===========================================\n");
}

int menu_clientes()
{

    int Opcao_Escolhida;

    system("cls");

    _sleep(300);

    puts("================ MENU CLIENTES ================");

    puts("\n\t1 - Inserir Clientes");

    puts("\n\t2 - Ver Todos os Clientes");

    puts("\n\t3 - Mostrar Dados do cliente pelo código");

    puts("\n\n\t0 - Sair");

    puts("\n===========================================\n");

    cout << "Opção:";

    cin >> Opcao_Escolhida;

    return Opcao_Escolhida;

    // return 0;
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    system("color 0e");

    int opcao, opcao_menu_clientes, res;

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
                        cout << "Adicionado!\n\n";
                    else
                        cout << "Erro!\n\n";
                   
                    system("pause");
                    
                    break;

                case 2:

                    mostrar_todos_clientes();
                    break;

                case 0:
                    break;

                default:
                    puts("\nERRO:Inseriu uma opção inválida.\nTente novamente.\n\n");
                    system("pause");

                    break;
                }
            } while (opcao_menu_clientes != 0);
        }

    } while (opcao != 0);

    cout << "\nObrigado por usar o programa. Até à proxima.\n\n";

    return 0;
}
