// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

// Descrição:Pretende-se construir um programa que faça a gestão de clientes e 
// respetivos automóveis da oficina “CarRepair”, oficina de reparações de automóveis.


#include <iostream>
#include <string>
#include <locale>
using namespace std;

int menu_principal() 
{

system("cls");

puts("======== MENU PRINCIPAL ========");

puts("\n\t1 - Menu Clientes");

puts("\n\t1 - Menu Automóveis");

puts("\n\t1 - Pesquisas");

puts("\n\n\t0 - Sair");

puts("================================\n");

cout << "Opção:";

cin >> int Opcao_Escolhida;

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

    } while (opcao = 0);

    cout << "Obrigado por usar o programa. Até à proxima.\m\n";

    return 0;
}
