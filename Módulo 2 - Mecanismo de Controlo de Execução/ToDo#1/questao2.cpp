#include <iostream>
#include <locale>
using namespace std;

int num;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");
    cout << "Insira o número:";
    cin >> num;

    if (num > 0)
    {
        cout << "O número é positivo\n";
    } 
    else
    {
        cout << "O número não é positivo\n";
    }

    return 0;
}
