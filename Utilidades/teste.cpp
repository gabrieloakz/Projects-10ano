#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream arquivo("dados.txt");
    int valor;

    if (arquivo.is_open())
    {
        arquivo >> valor;

        cout << valor;

        arquivo.close();
    }
    else
    {
        cout << "erro";
    }

    return 0;
}
