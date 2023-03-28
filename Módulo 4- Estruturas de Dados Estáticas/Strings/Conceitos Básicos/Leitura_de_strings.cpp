// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
#include <string> //biblioteca pra trabalhar com strings
using namespace std;

// • Em C++, a leitura usando apenas cin>>string pode falhar se entre
// duas palavras da string existirem espaços.
// • É possível usar a função getline(cin, nomedastring) para ler
// corretamente strings

int main(int argc, char const *argv[])
{
    string nome;

    cout << " Insira o seu nome completo : ";

    getline(cin, nome);

    // *Se em vez de getline se usar cin >> nome, a leitura pode não ser correta

    return 0;
}
