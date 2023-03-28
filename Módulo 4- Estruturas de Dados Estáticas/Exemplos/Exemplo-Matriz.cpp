#include <iostream>
using namespace std;

const int N_LINHAS = 5;
const int N_COLUNAS = 3;

int m[N_LINHAS][N_COLUNAS]; // DECLARAÇÃO DE MATRIZ

// Função para ler matriz
void leia_m()
{ // USA VARs GLOBAIS
    for (int i = 0; i < N_LINHAS; i++)
    { // percorrer as linhas
        for (int j = 0; j < N_COLUNAS; j++)
        { // percorrer as colunas
            cout << "Insira m[" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
}

// Função para mostrar matriz
void mostre_m()
{ // USA VARs GLOBAIS
    system("cls");
    cout << "CONTEUDO DA MATRIZ\n\n";
    for (int i = 0; i < N_LINHAS; i++)
    { // percorrer as linhas
        for (int j = 0; j < N_COLUNAS; j++)
        { // percorrer as colunas
            cout << m[i][j] << "  ";
        }
        cout << endl;
    }
}

int main()
{
    leia_m();
    mostre_m();

    return 0;
}