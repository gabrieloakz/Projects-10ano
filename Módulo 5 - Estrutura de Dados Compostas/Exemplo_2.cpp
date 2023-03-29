// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
#include <string>
using namespace std;

// Cria uma estrutura que armazene e exiba o registo de
// um aluno com o seu nome e as notas de três testes
// obtidas numa disciplina.

struct Registro_Aluno
{
    string Nome;
    float Nota_Disciplina_Teste1;
    float Nota_Disciplina_Teste2;
    float Nota_Disciplina_Teste3;
};

int main()
{
    Registro_Aluno Aluno1;

    puts("Insira os dados do aluno!");

    cout << "Insira o nome do aluno : ";

    getline(cin, Aluno1.Nome);

    cout << "Insira a nota do Teste1 na disciplina:";

    cin >> Aluno1.Nota_Disciplina_Teste1;

    cout << "Insira a nota do Teste2 na disciplina:";

    cin >> Aluno1.Nota_Disciplina_Teste2;

    cout << "Insira a nota do Teste3 na disciplina:";

    cin >> Aluno1.Nota_Disciplina_Teste3;

    cout << "\n\nDados do aluno:";

    cout << "\n\nNome: " << Aluno1.Nome;

    cout << "\n\nNota do Teste 1: " << Aluno1.Nota_Disciplina_Teste1;

    cout << "\n\nNota do Teste 2: " << Aluno1.Nota_Disciplina_Teste2;

    cout << "\n\nNota do Teste 3: " << Aluno1.Nota_Disciplina_Teste3 << "\n\n";

    return 0;
}
