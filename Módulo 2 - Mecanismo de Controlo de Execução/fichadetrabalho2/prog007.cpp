#include <iostream>
#include <locale>
using namespace std;

// gabriel ferreira carvalho 10

int num , soma, numvezes = 0;
    float media;



int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");

    while (num != -99)
    {

        cout << "Digite " << -99 << " para sair.\n";
        cout << "Insira um numero: ";
        cin >> num;

        if (num != -99)
        {

            soma = soma + num;
            numvezes++;
            system("cls") ;
        }

        else

        {

            system("cls") ;
            
        }
    }

    media = soma / numvezes;

    cout << "Soma:" << soma << endl,
        cout << "Média:" << media << endl;

    return 0; 
}
