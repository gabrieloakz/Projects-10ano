// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
using namespace std;

// Cria um programa que contenha as variáveis: char c; int i; float f; bool b; double d; int *p;
// e escreva no ecrã o número de Bytes que cada uma ocupa.
// Nota : Consulta a função sizeof() em https: // www.geeksforgeeks.org/sizeof-operator-c/

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");

    char c;
    int i;
    float f;
    bool b;
    double d;
    long long int *p;

    cout << "A variável caracter c tem " << sizeof(c) << " bytes" << "\n";
    cout << "A variável inteira i tem " << sizeof(i) << " bytes" << "\n";
    cout << "A variável float  f tem " << sizeof(f) << " bytes" << "\n";
    cout << "A variável booleana b tem " << sizeof(b) << " bytes"<< "\n";
    cout << "A variável dupla d tem " << sizeof(d) << " bytes" << "\n";
    cout << "O ponteiro inteiro p tem " << sizeof(*p) << " bytes" << "\n";

    return 0;
}
