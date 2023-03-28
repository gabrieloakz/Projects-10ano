// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
using namespace std;

// "Limpa todos os endereços de memória do vetor"

void iniciar(int s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        s[i] = 0;
}
int main()
{
    int v[10];
    int x[20];
    iniciar(v, 10);
    iniciar(x, 20);

    return 0;
}
