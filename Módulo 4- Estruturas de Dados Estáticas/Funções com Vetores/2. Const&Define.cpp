#include <iostream>
using namespace std;

// Exemplo com define

const int num = 10; // Define 10 valor constante de num

void inicia(int s[])
{
    int i;

    for (i = 0; i < num; i++)

        s[i] = 0;
}
int main()
{
    int v[num], i;

    inicia(v);

    for (i = 0; i < num; i++)

        v[i] = i;

    for (i = num - 1; i >= 0; i--)

        cout << v[i] << "\n";

    return 0;
}

// Exemplo com define

#define NUM 10 // Define 10 associado a NUM

void inicia(int s[])
{
    int i;

    for (i = 0; i < NUM; i++)

        s[i] = 0;
}
int main()
{
    int v[NUM], i;

    inicia(v);

    for (i = 0; i < NUM; i++)

        v[i] = i;

    for (i = NUM - 1; i >= 0; i--)

        cout << v[i] << "\n";

    return 0;
}