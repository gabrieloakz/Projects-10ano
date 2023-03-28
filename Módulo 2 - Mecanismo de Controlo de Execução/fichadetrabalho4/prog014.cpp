// gabriel ferreira carvalho 10

// Escreve um programa que escreva no ecrã, toda a tabela ASCII (0 … 255 chars),
// escrevendo em cada linha o código ASCII e o carácter correspondente.

#include <iostream>
using namespace std;

int num1;

int main()
{

    // Se baseando num número vai de 0 a 255 crescentemnte

    for (num1 = 0; num1 <= 255; num1++)

    {

        //O char() mostra o caractere do número em ASCII

        cout << num1 << "-->" << char(num1) << "\n";
    
    }

    system("pause");

    return 0;
}