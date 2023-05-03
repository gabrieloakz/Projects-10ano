#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float a = 2.53;

    float *Ponteiro_de_a = NULL; // Boa prática inicializar com NULL que é 0

    Ponteiro_de_a = &a;
    cout << Ponteiro_de_a << "\n"; // Ouput: 010FF95C

    *Ponteiro_de_a = a * a;
    cout << *Ponteiro_de_a << "\n"; // Outpuy: 6.4009

    return 0;
}
