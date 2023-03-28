// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
#include <string> //biblioteca pra trabalhar com strings
using namespace std;

// • compare() – compara os conteúdos (totais ou parciais) de duas cadeias de
// caracteres alfanuméricos. Tem os seguintes argumentos:

// Argumento || Descrição

// pos: Posição inicial no processo de comparação. A indexação é iniciada em 0,
// pelo que o primeiro caractere é de índice 0, o segundo de índice 1, etc.

// len: Número de caracteres que deverão ser comparados.

// str: Texto de comparação.

// Nota: caso o objetivo seja uma comparação completa entre duas cadeias de caracteres
// alfanuméricos, apenas é especificado o argumento str.

// Os argumentos len e pos são usados apenas em comparações parciais.

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    string a1 = "gato preto";

    string a2 = "gato branco";

    if (a1.compare(a2) != 0) // Compara gato preto com o gato branco e verifica que são diferentes
    {
        cout << "Os animais são diferentes\n";
    }

    if (a1.compare(0, 4, "gato") == 0) // Compara gato preto da posição 0 até 4 e verifica se é um gato
    {

        cout << "O 1º animal é um gato\n";
    }

    if (a1.compare(0, 3, "cão") != 0) // Compara gato preto da posição 0 até 3 e verifica se é um cão
    {

        cout << "O 1º animal não é um cão\n";
    }

    if (a1.compare(0, 4, a2, 0, 4) == 0) // Compara a1 de 0-4 com a2 0-4 e verifica se são iguais
    {
        cout << "O 1º animal é um gato\n";
    }

    return 0;
}