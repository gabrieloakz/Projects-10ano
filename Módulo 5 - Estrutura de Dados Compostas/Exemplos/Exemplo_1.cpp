// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
#include <string>
using namespace std;

// Implementa um programa que leia o nome, a idade e
// morada de uma pessoa e armazene os dados numa estrutura.

struct Dados_Pessoa
{

    string Nome;
    int Idade = 0;
    string Morada;
};

int main()
{
    Dados_Pessoa Pessoa1;

    cout << "Insira o seu nome completo : ";

    getline(cin, Pessoa1.Nome);

    cout << "Insira sua idade:";

    cin >> Pessoa1.Idade;

    cin.ignore(); //Ignora o número anterior para ler a string morada

    cout << "Insira a sua morada : ";

    getline(cin, Pessoa1.Morada);

    return 0;
}
