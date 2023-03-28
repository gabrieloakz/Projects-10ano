#include <iostream>
#include <locale>
using namespace std;

// gabriel ferreira carvalho 10

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");

    int Pares = 0, Impares = 0, num;

    cout << " Digite " << 0 << " para sair.\n";

    do
    {
        cout << " Insira um numero: ";
        cin >> num;

        if (num == 0);
        else if (num % 2 == 0)
        {
            Pares++;
        }
        else
        {
            Impares++;
        }

    } while (num != 0);

    cout << "\n Pares: " << Pares << " \n Impares: " << Impares << endl;

    return 0;
}
