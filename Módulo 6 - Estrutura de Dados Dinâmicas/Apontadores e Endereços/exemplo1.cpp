#include <iostream>
#include <locale>
using namespace std;

int y = 200;

int main(int argc, char const *argv[])
{

    setlocale(LC_ALL, "pt_PT.utf8");

    int x = 100;

    cout << "O valor de x = " << x << "\n"; // Output: 100
    cout << "Endereço de x = 0x" << &x << "\n"; // Output: 0x0135FC90

    cout << "O valor de y = " << y << "\n"; // Output: 200
    cout << "Endereço de y = 0x" << &y << "\n"; // Ouput: 

    return 0;
}
