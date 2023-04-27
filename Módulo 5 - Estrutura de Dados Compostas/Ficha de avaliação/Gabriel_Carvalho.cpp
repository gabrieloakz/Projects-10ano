// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <string>
using namespace std;

int Num_Livros = 6;

int Num_Categorias = 6;

struct Livro
{
    int cod_livro;
    string titulo;
    int cod_categoria;
};

struct Categoria
{
    int cod_categoria;
    string descricao;
};

Livro l[100] = {

    {12, "Livro 1", 92},
    {6, "Livro 2", 93},
    {21, "Livro 3", 92},
    {13, "Livro 4", 91},
    {19, "Livro 5", 94},
    {3, "Livro 6", 94}};

Categoria c[10] = {

    {91, "Romance"},
    {92, "Ficcao"},
    {93, "Ensaio"},
    {94, "Poesia"},
    {95, "Ciencia"},
    {96, "Infantil"}};

void mostra_todos()
{

    system("cls");

    puts("mostra_todos");

    for (int i = 0; i < Num_Livros; i++)
    {
        cout << "\n[" << l[i].cod_livro << "]: " << l[i].titulo << ", " << l[i].cod_categoria << "\n";
    }

    cout << "\n";

    system("pause");
}

void mostra_livros_por_cod(int ll)
{

    system("cls");

    puts("mostra_livros_por_cod");

    for (int i = 0; i < Num_Livros; i++)
    {
        if (l[i].cod_livro == ll)
        {
            cout << "\n[" << ll << "]: " << l[i].titulo << ", " << l[i].cod_categoria << "\n";
        }
    }

    cout << "\n";

    system("pause");
}

void mostra_por_categoria(int cc)
{

    system("cls");

    puts("mostra_por_categoria");

    for (int i = 0; i < Num_Livros; i++)
    {
        if (l[i].cod_categoria == cc)
        {
            cout << "\n[" << cc << "]: " << l[i].titulo  << "\n";
        }
    }

    cout << "\n";

    system("pause");
}

void mostra_total()
{

    system("cls");

    // limpa ecra e mostra toda a informacao dos livros
    // incluindo a descricao da categoria de cada um

    puts("mostra_total");

    for (int i = 0; i < Num_Livros; i++)
    {
        cout << "\n[" << l[i].cod_livro << "]: " << l[i].titulo << "\n";

        for (int j = 0; j < Num_Categorias; j++)
        {
            if (c[j].cod_categoria == l[i].cod_categoria )
            {
                cout << c[j].cod_categoria << ", " << c[j].descricao << "\n";
            }
        }
    }

    cout << "\n";

    system("pause");
}

int main()
{
    int ll = 13, cc = 93;

    /*1*/ mostra_todos(); // limpa o ecra, mostra todos os livros, faz "pausa"

    /*2*/ mostra_livros_por_cod(ll); // limpa ecra, mostra o livro com o
                                     // codigo ll e faz "pausa"

    /*3*/ mostra_por_categoria(cc); // limpa ecra, mostra os livros da
                                    // categoria cc e faz "pausa"

    /*4*/ mostra_total(); // limpa ecra e mostra toda a informacao dos livros
    // incluindo a descricao da categoria de cada um

    return 0;
}