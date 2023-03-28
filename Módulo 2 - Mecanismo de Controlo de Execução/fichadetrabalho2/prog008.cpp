#include <iostream>
#include <locale>
using namespace std;

// gabriel ferreira carvalho 10

int num = 1, soma = 0, numvezes = 0;
float media;

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    while (num != 0)
    {
        cout << "Este progama só caucula se os números forem pares! \n";
        cout << "Digite 0 para sair.\n";
        cout << "Insira um numero: ";
        cin >> num;

        if (num != 0)
        {
            if (num % 2 == 0)
            {
                soma = soma + num;
                numvezes++;
                system("cls");
            }

            else

            {

               system("cls");
               
            
            }
        }
    }

    media = soma / numvezes;

    cout << "Soma:" << soma << endl,
        cout << "Média:" << media << endl;

    return 0;
}