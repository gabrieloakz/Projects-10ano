#include <iostream>
#include <locale>
using namespace std;

int main(int argc, char const *argv[])
{
    int *variavel, tamanho, contador;
    cout << "\nDigite o tamanho do vetor: ";
    cin >> tamanho;

    // aloca um vetor de determinado tamanho e elementos
    variavel = new int[tamanho];

    cout << "\nDigite os elementos do vetor: ";
    for (contador = 0; contador < tamanho; contador++)
    {
        cout << "\nVetor[" << contador << "] = ";
        cin >> variavel[contador];
    }

    cout << "\nExibir o vetor: ";
    
    for (contador = 0; contador < tamanho; contador++)
    {
        cout << variavel[contador] << "\n";
    }

    delete[] variavel;

    return 0;
}
