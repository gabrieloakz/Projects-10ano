#include <iostream>
#include <locale>
#include <string>
using namespace std;

// Cria um programa que implemente certas operações simples para uma base de dados de alunos,

// cujos registos tem apenas dois campos : nome e nota.
// As operações a efetuar, são :

// • Inserir um novo registo de aluno
// • Eliminar um registo contendo um determinado nome
// • Procurar por um registo com um dado nome
// • Adicionar um registo de aluno
// • Listar todos os registos

// Construir o programa com rotinas apropriadas, nomeadamente com
// uma rotina para o menu de operações a efetuar.Deves criar funções
// distintas para cada uma das operações a efetuar.

struct DadosAlunos
{

    string nome;
    float nota;
};

struct Nó
{

    DadosAlunos Aluno;

    Nó *prox;
};

Nó *inicio = NULL;

int Menu_Principal()
{

    int MenuEscolhido;

    system("cls");

    puts("\t");
    puts("\t(1) - Inserir um novo registo de aluno");
    puts("\t(2) - Eliminar um registo contendo um determinado nome");
    puts("\t(3) - Procurar por um registo com um dado nome");
    puts("\t(4) - Listar todos os registos");
    puts("\t(0) - Sair");

    cout << "\n\n\tInsira a sua escolha: ";

    cin >> MenuEscolhido;

    return MenuEscolhido;
}

void Inserir_um_novo_registo_de_aluno()
{
    // Cria-se um ponteiro que aponta para um endereço de memória,
    // criando um novo nó, e verifica se houve erro ao alocar memória.

    Nó *Ponteiro_auxiliar = new Nó;

    if (Ponteiro_auxiliar == NULL)
    {
        cout << "Erro ao alocar memória\n";
        return;
    }

    // Pede ao utilizador os dados de alunos.

    system("cls");

    cout << "\n\tInsira o Registo do Aluno\n";

    cin.ignore();

    cout << "\n\tNome:";
    getline(cin, Ponteiro_auxiliar->Aluno.nome);

    cout << "\n\tNota:";
    cin >> Ponteiro_auxiliar->Aluno.nota;

    // Adiciona o novo nó no final da lista.

    Ponteiro_auxiliar->prox = NULL;

    // Verifica se a lista está vazia.

    if (inicio == NULL)
    {
        // Adiciona o novo nó no inicio da lista.
        inicio = Ponteiro_auxiliar;
    }
    else
    {
        // Adiciona o novo nó no inicio da lista.
        Nó *atual = inicio;

        // Adiciona o novo nó no fim da lista.
        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = Ponteiro_auxiliar;
    }
}

void Listar_todos_os_registos()
{

    // Ponteiro auxiliar para percorrer a lista.

    Nó *atual = inicio;

    int Numero_Registros = 0;

    system("cls");

    cout << "\n\tTodos os Registos de Alunos\n";

    // Enquanto a lista não estiver vazia, percorre a lista.

    while (atual != NULL)
    {
        // Incrementa o numero de registros.

        Numero_Registros++;

        // cout << "\n\t"<< "( " << Numero_Registros << " )" << atual->Aluno.nome << " - " << atual->Aluno.nota;
        printf("\n\t( %d ) %s - %g", Numero_Registros, atual->Aluno.nome.c_str(), atual->Aluno.nota);

        // Ponteiro auxiliar avança para o próximo nó.

        atual = atual->prox;
    }

    cout << "\n\n\t";

    system("pause");
}

void Eliminar_um_registo_contendo_um_determinado_nome()
{
    system("cls");

    cout << "\n\tEliminar o Registo de um Aluno\n";

    if (inicio == NULL)
    {
        cout << "\n\n\tA lista esta vazia.\n";
        cout << "\n\n\t";
        system("pause");
        return;
    }

    string nome_a_eliminar;
    cin.ignore(); // Limpar o caractere de nova linha pendente no buffer de entrada
    cout << "\n\tInsira o nome do Aluno: ";
    getline(cin, nome_a_eliminar);

    Nó *atual = inicio;
    Nó *anterior = NULL;

    // Percorre a lista até encontrar o nome a ser eliminado ou chegar ao final da lista.
    while (atual != NULL)
    {
        if (atual->Aluno.nome == nome_a_eliminar)
        {
            if (anterior == NULL)
            {
                // Caso o nó a ser eliminado seja o primeiro da lista.
                inicio = atual->prox;
                delete atual;
                cout << "\n\tRegistro eliminado.\n";
                cout << "\n\n\t";
                system("pause");
                return;
            }
            else
            {
                // Caso o nó a ser eliminado esteja no meio ou no final da lista.
                anterior->prox = atual->prox;
                delete atual;
                cout << "\n\tRegistro eliminado.\n";
                cout << "\n\n\t";
                system("pause");
                return;
            }
        }
        anterior = atual;
        atual = atual->prox;
    }

    // Se chegou aqui, significa que o nome não foi encontrado na lista.
    cout << "\n\tNome nao encontrado na lista.\n";
    cout << "\n\n\t";
    system("pause");
    return;
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    system("color 0e");

    int MenuEscolhido;

    do
    {

        MenuEscolhido = Menu_Principal();

        if (MenuEscolhido != 0)
        {

            switch (MenuEscolhido)
            {
            case 1:

                Inserir_um_novo_registo_de_aluno();
                break;

            case 2:

                Eliminar_um_registo_contendo_um_determinado_nome();
                break;

            case 3:

                // Procurar_por_um_registo_com_um_dado_nome();
                break;

            case 4:

                Listar_todos_os_registos();
                break;

            default:

                puts("\t");
                puts("\n\tOpção inválida!\nTente novamente.\n\n");
                system("\tpause");
            }
        }

    } while (MenuEscolhido != 0);

    return 0;
}
