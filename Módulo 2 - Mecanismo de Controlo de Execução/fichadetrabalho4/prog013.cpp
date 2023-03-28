// gabriel ferreira carvalho 10

// Escreve um programa que solicite ao utilizador um número.
// Em seguida escreve todos os números inteiros a partir desse número exceto os múltiplos de 3.
// Quando encontrar o primeiro múltiplo de 10 termina a execução

#include <iostream>
#include <locale>
using namespace std;

int num, contagem;

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    cout << "Introduza um número:";
    cin >> num;

    // A contagem começa no número, por exemplo 5,
    // E encerra quando encotrar o primeiro múltiplo de 10, no caso 10
    // E devido ao if, escreve os proximos números exceto multiplos de 3: contagem%3 !=0

    for (contagem = num; contagem % 10 != 0; contagem++)
    {

        if (contagem % 3 != 0)
        {
            cout << "\n" << contagem;
        }
    }

    // O \n acima srve para saltar uma linha após o campo de introdução

    // Os dois "\n" abaixo serve para saltar a mensagem final duas linhas

    cout << "\n\n";

    system("pause");

    return 0;
}
