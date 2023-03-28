// gabriel ferreira carvalho 10

#include <iostream>
#include <locale>
using namespace std;

int num;

int somatorio(int num)
{

    if (num == 1)

        return (1);

    return num + somatorio(num - 1);
}

int main()
{

    int resultado;

    setlocale(LC_ALL, "pt_PT.utf8");

    puts("Insira um Número:");
    cin >> num;

    resultado = somatorio(num);

    cout << resultado << endl;

    return 0;
}

