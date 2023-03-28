// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
#include <string> //biblioteca pra trabalhar com strings
using namespace std;

void conteudo(string s)
{

    // função que imprime no ecrã a mensagem

    // "Com conteúdo (n caracteres)" ou "Sem conteudo (0 caracteres)".
    // conforme a string tenha ou não conteúdo

    if (s.empty()) // empty verifica se a string esta vazia
    {
        cout << "Sem conteudo (0 caracteres)" << endl;
    }

    else
    {
       cout << "Com conteúdo(" << s.length() << " caracteres)"<< endl; 
    }
    
    
}

int main()

{
    setlocale(LC_ALL, "pt_PT.utf8");
    
    string cumprimento; // declaração

    cumprimento = "Olá!"; // atribuição

    conteudo(cumprimento); // imprime "Com conteúdo (4 caracteres)

    cumprimento.clear(); // Limpeza

    conteudo(cumprimento); // imprime "Sem conteúdo (0) caracteres)"

    cumprimento = "Bom dia!"; // Reatribuição

    conteudo(cumprimento);

    return 0;
}
