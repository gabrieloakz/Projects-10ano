#include <iostream>
#include <locale>
using namespace std;

/*Procedimento*/



void primeirosinteiros()
{

    // Escreve os números de 1 até 10

    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }

    cout << "\n";
}

int main(int argc, char const *argv[])
{

    // Chama a função

    primeirosinteiros();
    return 0;
}
