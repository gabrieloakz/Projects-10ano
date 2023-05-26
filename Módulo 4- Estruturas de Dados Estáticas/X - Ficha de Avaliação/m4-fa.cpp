// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
using namespace std;

// Declaração de constantes

const int DIM = 10;

// Declaração do vetor

int valores[DIM] = {4, 2, 9, 7, 5, 1, 6, 0, 8, 3};

void leia_v()
{
    int valor;
    for (int i = 0; i < DIM; i++)
    {
        cout << "Insira um valor[" << i << "]:";
        cin >> valor;
        valores[i] = valor;
    }
}

void mostra_v()
{

    for (int i = 0; i < DIM; i++)
    {

        cout << "\tValor[" << i << "]: " << valores[i];

        cout << "\n\n";
    }
}

bool se_no_vetor(int valor)
{

    for (i = 0; i < DIM; i++)
    {

        if (valor == valores[i])
        {

            return true;
        }
    }

    return false;
}

void menor_v()
{

    int menornum = valores[0];

    for (int i = 0; i < N_LINHAS; i++)
    {

        if (valores[i] < menornum)
        {
            menornum = valores[i];
            posicao = i;
        }
    }

    cout << "\tMenor Valor[" << posicao << "]: " << menornum;
}

int proc_maior_indice_v(int valor)
{
    int maiorindice = -1;

    for (i = 0; i < DIM; i++)
    {

        if (valor == valores[i])
        {

            maiorindice = i;
        }
    }

    return maiorindice;
}

int soma_v()
{
    int soma = 0;

    for (int i = 0; i < DIM; i++)
    {

        soma = valores[i] + soma;
    }

    cout << "Somatório:\n"
         << soma << endl;
}

void ordena_v()
{
    int i, j, aux;

    for (i = 1; i < DIM; i++)
    {
        aux = valores[i];

        for (j = i - 1; (j >= 0) && (aux > valores[j]); j--)

            valores[j + 1] = valores[j];

        valores[j + 1] = aux;
    }
}
