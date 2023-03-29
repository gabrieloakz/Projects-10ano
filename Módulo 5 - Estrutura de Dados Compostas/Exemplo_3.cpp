// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
#include <string>
using namespace std;

// Implementa um programa que use duas estruturas do tipo dma, cada uma
// representando uma data válida, e devolva o número de dias que
// decorreram entre as duas datas.

struct dma
{

    int dia;
    int mes;
    int ano;
}

int main()
{
    dma data1 = {17, 7, 2005 };

    dma data2 = {17, 7, 2023};
    return 0;
}
