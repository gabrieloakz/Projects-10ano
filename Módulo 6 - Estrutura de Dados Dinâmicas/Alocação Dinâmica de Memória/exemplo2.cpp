// Descrição:  Implementa num programa uma função
// que recebe um valor n como parâmetro e cria
// dinamicamente um vetor de n elementos inteiros e
// retorne um apontador para o início desse vetor.

#include <iostream>
using namespace std;

int *Alocamemoria(int n)
{

    int *ponteiro;

    ponteiro = new int[n];

    return ponteiro;
}

int main()
{
    int *variavel, tamanho, contador;
    cout << "\nDigite o tamanho do vetor: ";
    cin >> tamanho;

    variavel = Alocamemoria(tamanho);

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
