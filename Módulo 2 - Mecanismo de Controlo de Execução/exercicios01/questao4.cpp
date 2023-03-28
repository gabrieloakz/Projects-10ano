#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

float raio, altura, area, litros, latas, custo;

int main(int argc, char const *argv[])
{
    cout << "Insira o raio:\n   cm\r";
    cin >> raio;
    cout << "Insira a altura:\n   cm\r";
    cin >> altura;
    area = M_PI * pow(raio, 2) + 2 * M_PI * raio * altura;
    litros = area / 3;
    latas = ceil(litros / 5);
    custo = latas * 20;

    system("cls");

    cout << "Latas necessarias:\n" << (latas)  << (endl);
    cout << "Custo:\n   Euros\r"  << (custo) << (endl);

    // dividir area por 3 para saber a quantidade de litros,
    // depois dividir litros por 5 para saber a quantidade de latas,
    // ao final multiplicar por 20 para achar o custo

    return 0;
}
