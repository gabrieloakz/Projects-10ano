#include <iostream>
#include <cmath>
using namespace std;

float x1, Py1, x2, Qy2, soma, distancia;

int main(int argc, char const *argv[])
{
    cout << "Insira x2:";
    cin >> x2;
    cout << "Insira x1:";
    cin >> x1;
    cout << "Insira y2:";
    cin >> Qy2;
    cout << "Insira y1:";
    cin >> Py1;
    
    soma = pow(x2 - x1, 2) + pow(Qy2 - Py1, 2);
    
    distancia = sqrt(soma);
    
    system("cls");
    
    cout << "Distancia:" << (distancia) << (endl);

    return 0;
}
