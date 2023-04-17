// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

// Descrição:Pretende-se construir um programa que faça a gestão de clientes e
// respetivos automóveis da oficina “CarRepair”, oficina de reparações de automóveis.

#include <iostream>
#include <string>
#include <locale>
using namespace std;

const int MAX_CLIENTE = 20;

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

int menu_clientes()
{

    int Opcao_Escolhida;

    system("cls");

    _sleep(400);

    puts("================ MENU CLIENTES ================");

    puts("\n\t1 - Inserir Clientes");

    puts("\n\t2 - Ver Todos os Clientes");

    puts("\n\t3 - Mostrar Dados do cliente pelo código");

    puts("\n\n\t0 - Sair");

    puts("\n===========================================\n");

    cout << "Opção:";

    cin >> Opcao_Escolhida;

    return Opcao_Escolhida;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");

    system("color 0e");

    int opcao;

    do
    {
        opcao = menu_principal();

        switch (opcao)
        {

        case 1:
            menu_clientes();
            break;

        default:
            puts("\nERRO:Inseriu uma opção inválida.\nTente novamente.\n\n");
            system("pause");
            opcao = -1;
            break;
        }

    } while (opcao = 0);

    cout << "\nObrigado por usar o programa. Até à proxima.\n\n";

    return 0;
}
