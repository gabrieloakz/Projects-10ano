#include <iostream>
#include <locale>
using namespace std;

// Cria um programa que implemente certas operações simples para uma base de dados de alunos,
// cujos registos tem apenas dois campos : nome e nota.As operações a efetuar, são :

// • Inserir um novo registo de aluno
// • Eliminar um registo contendo um determinado nome
// • Procurar por um registo com um dado nome
// • Adicionar um registo de aluno
// • Listar todos os registos 

// Construir o programa com rotinas apropriadas, nomeadamente com 
// uma rotina para o menu de operações a efetuar.Deves criar funções 
// distintas para cada uma das operações a efetuar.

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    system("color 0e");

    do
    {

        Menu_Principal();

        if (MenuEscolhido != 0)
        {

            switch (MenuEscolhido)
            {
            case 1:

                Mostrar_Registro_de_Quilometragens();
                break;

            case 2:

                Quilometragem_Maxima();
                break;

            case 3:

                Quilometragem_Minima();
                break;

            case 4:
                Ordem_Crescente();
                break;

            case 5:

                Ordem_Decrescente();
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

void Menu_Principal()
{

    system("cls");

    puts("\t");
    puts("\t1 • Inserir um novo registo de aluno");
    puts("\t2 • Eliminar um registo contendo um determinado nome");
    puts("\t3 • Procurar por um registo com um dado nome");
    puts("\t4 • Listar todos os registos ");
    puts("\t5 • ");

    cout << "\n\n\tInsira a sua escolha: ";

    cin >> MenuEscolhido;
}



 