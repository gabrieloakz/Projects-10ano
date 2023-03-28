// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
#include <string> //biblioteca pra trabalhar com strings
using namespace std;

// • substr() – permite extrair um excerto de texto da cadeia de caracteres
// especificada. Deverão ser utilizados os argumentos seguintes:

// Argumento || Descrição

// pos: Posição inicial no processo de obtenção. A indexação é iniciada em 0.
// Todos os caracteres à esquerda da posição especificada não surgem na
// cadeia de caracteres alfanuméricos final.

// len: Número de caracteres a ser devolvidos a partir da posição especificada.

// Nota: caso o objetivo seja uma comparação completa entre duas cadeias de
// caracteres alfanuméricos, apenas é especificado o argumento str.
// Os argumentos len e pos são usados apenas em comparações parciais

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    string data;

    data = "15/03/2023";

    string dia, mes, ano;
    
    dia = data.substr(0, 2);

    mes = data.substr(3, 2);

    ano = data.substr(6, 4);

    // Impressão 
    
    cout << "Data: " << data << endl; // Imprime "Data: 15/03/2023 
    
    cout << "Dia: " << dia << endl; // Imprime "Dia: 15

    cout << "Més: " << mes << endl; // Imprime 76: 03"

    cout << "Ano: " << ano << endl; // Imprime " Ano : 2022 
    
    return 0;
}
