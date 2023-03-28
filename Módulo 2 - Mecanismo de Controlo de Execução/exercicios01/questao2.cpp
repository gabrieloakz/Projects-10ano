#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float Perimetro, Area, raio;

int main(int argc, char const *argv[])
{
    cout << "Insira o raio do circulo:\n \tcm\r";
    cin >> raio;
    Perimetro = 2 * M_PI * raio;
    Area = M_PI * raio * raio;
    system("cls");
    cout << "Perimetro:" << Perimetro << endl;
    cout << "Area:" << Area << endl;
    system("pause");
}
