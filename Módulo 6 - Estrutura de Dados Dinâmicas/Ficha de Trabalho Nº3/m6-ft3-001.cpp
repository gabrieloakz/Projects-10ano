// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

// 1) A partir do código desenvolvido para construir o programa do exercício da Ficha de
// Trabalho Nº2 deste Módulo, constrói um programa que simule uma Lista Encadeada
// Ordenada. A lista dos alunos deve estar ordenada pelo atributo nome.

// a) O registo de um aluno deve ser inserido na posição correta para que a lista esteja ordenada.
// b) Ao eliminar um registo, a lista deve continuar ordenada.
// c) Adicionar uma opção para mostrar o comprimento da lista.
// d) Adicionar uma opção para esvaziar a lista.

// 2) A partir do código desenvolvido na questão anterior, construir um programa que simule
// uma Lista Encadeada Bidirecional Ordenada.

// Nota: Numa lista bidirecional, cada nó contém um ponteiro para o nó seguinte e para o nó anterior

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

int Numero_elementos_ista = 0;

int Menu()
{

    int MenuEscolhido;

    system("cls");

    puts("\t");

    puts("============ LISTA DE REGISTOS DE ALUNOS DA BATALHA ===========");

    puts("\n\t(1) - Inserir um novo registo de aluno");

    puts("\n\t(2) - Eliminar um registo contendo um determinado nome");

    puts("\n\t(3) - Procurar por um registo com um dado nome");

    puts("\n\t(4) - Listar todos os registos");

    puts("\n\t(5) - Mostrar o comprimento da lista");

    puts("\n\t(6) - Esvaziar a lista");

    puts("\n\n\t(0) - Sair");

    puts("\n===============================================================\n");

    cout << "\nInsira a sua escolha: ";

    while (!(cin >> MenuEscolhido))
    {
        cout << "Entrada inválida. Por favor, digite um número válido: ";

        // Limpa o buffer do std::cin para remover a entrada inválida
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return MenuEscolhido;
}

void InserirOrdenado(Nó *Novo_Nó)
{
    Nó *atual = inicio;
    Nó *anterior = NULL;

    while (atual != NULL && atual->Aluno.nome < Novo_Nó->Aluno.nome)
    {
        anterior = atual;
        atual = atual->prox;
    }

    if (anterior == NULL)
    {
        // Inserir no início da lista
        Novo_Nó->prox = inicio;
        inicio = Novo_Nó;
    }
    else
    {
        // Inserir após o nó anterior
        Novo_Nó->prox = atual;
        anterior->prox = Novo_Nó;
    }
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

    if (inicio == NULL) // Se a lista estiver vazia:
    {
        inicio = Ponteiro_auxiliar;     // Coloca o ponteiro auxiliar no inicio da lista
        Ponteiro_auxiliar->prox = NULL; // Como o próximo ainda não existe é nulo
    }
    else // Se não estiver vazia:
    {
        InserirOrdenado(Ponteiro_auxiliar); // Chama a função para ordenar na lista existente
    }
}

void Eliminar_um_registo_contendo_um_determinado_nome()
{
    if (inicio == NULL)
    {
        cout << "\nA lista esta vazia!\n\n";
        system("pause");
        return;
    }

    system("cls");

    cout << "\n\tEliminar o Registo de um Aluno\n";

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

void Procurar_por_um_registo_com_um_dado_nome()
{

    if (inicio == NULL)
    {
        cout << "\nA lista está vazia!\n\n";
        system("pause");
        return;
    }

    string input_aluno_nome;

    system("cls");

    cout << "\n\tProcure um registo de aluno";

    cin.ignore();

    cout << "\n\n\tInsira o nome do aluno que procura:";
    getline(cin, input_aluno_nome);

    Nó *atual = inicio;
    Nó *anterior = NULL;

    int Posicao_na_lista = 0;

    while (atual != NULL)
    {

        Posicao_na_lista++;

        if (atual->Aluno.nome == input_aluno_nome)
        {
            printf("\n\t( %d ) Nota de %s: %g", Posicao_na_lista, atual->Aluno.nome.c_str(), atual->Aluno.nota);
            cout << "\n\n\t";
            system("pause");
            return;
        }

        anterior = atual;
        atual = atual->prox;
    }

    // Se chegou aqui, significa que o nome não foi encontrado na lista.
    cout << "\n\tNome nao encontrado na lista.\n ";
    cout << "\n\n\t";

    system("pause");
    return;
}

void Listar_todos_os_registos()
{

    if (inicio == NULL)
    {
        cout << "\nA lista esta vazia!\n\n";
        system("pause");
        return;
    }

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
        printf("\n\t(%d) %s - %g", Numero_Registros, atual->Aluno.nome.c_str(), atual->Aluno.nota);

        // Ponteiro auxiliar avança para o próximo nó.

        atual = atual->prox;
    }

    cout << "\n\n\t";

    system("pause");
}

void Mostrar_o_comprimento_a_lista()
{
    if (inicio == NULL)
    {
        cout << "\nA lista está vazia\n\n";
        system("pause");
        return;
    }

    system("cls");

    cout << "\n\tVer Comprimento da Lista\n\n\t";

    Nó *atual = inicio;
    int Comprimento_lista = 0;
    while (atual != NULL)
    {

        Comprimento_lista++;

        atual = atual->prox;
    }

    printf("Comprimento da Lista: %d\n\n\t", Comprimento_lista);

    system("pause");
    return;

    // int Barra = 219; // Código ASCII da barrinha
    // for (int i = 0; i < 100; i++)
    // {
    //     cout << char(Barra);

    //     this_thread::sleep_for(10ms);
    // }

    // this_thread::sleep_for(10ms);
}

void Esvaziar_a_lista()
{
    system("cls");

    cout << "\n\tEsvaziando a lista";

    Nó *atual = inicio;

    while (inicio != NULL)
    {
        atual = inicio;
        inicio = atual->prox;
        delete atual;
    }
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    system("color 0e");

    int MenuEscolhido;

    do
    {
        MenuEscolhido = Menu();

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

                Procurar_por_um_registo_com_um_dado_nome();
                break;

            case 4:

                Listar_todos_os_registos();
                break;

            case 5:
                Mostrar_o_comprimento_a_lista();
                break;

            case 6:
                Esvaziar_a_lista();
                break;

            default:

                puts("\t");
                puts("\nOpção inválida!Tente novamente!\n\n");
                system("pause");
            }
        }

    } while (MenuEscolhido != 0);

    puts("\n\t");

    return 0;
}
