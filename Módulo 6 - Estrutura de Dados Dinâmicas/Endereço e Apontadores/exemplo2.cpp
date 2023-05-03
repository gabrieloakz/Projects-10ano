#include <iostream>
#include <locale>
using namespace std;

int y = 200;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");

    int x = 100;
    int *Ponteiro_de_x = &x;

    cout << "O valor de x = " << x << "\n";                          // Output: 100
    cout << "Endereço de x = 0x" << &x << "\n";                      // Output: 0x0059FD9C
    cout << "Endereço do ponteiro de x = " << Ponteiro_de_x << "\n"; // Output: 0059FD9C

    return 0;
}
