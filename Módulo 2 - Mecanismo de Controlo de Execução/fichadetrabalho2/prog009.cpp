#include <iostream>
#include <locale>
using namespace std;

// gabriel ferreira carvalho 10

int idade = 1, soma, numpessoas = 0;
float salario, media = 0;
char sexo;

int idademaior = 0, idademenor = 1000;
int qmulheres = 0;

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    while (idade > 0)
    {
        cout << "Digite uma idade negativa para terminar\n";
        cout << "Insira sua idade: \n";
        cin >> idade;
        
        if (idade > 0)
        {
            cout << "Insira seu sexo (m ou f): \n";
            cin >> sexo;
            cout << "Insira seu salário: \n";
            cin >> salario;

            soma = soma + salario;
            numpessoas++;

            if (idade < idademenor)
            {
                idademenor = idade;
            }

            if (idade > idademaior)
            {
                idademaior = idade;
            }

            if (sexo = "f" && salario <= 1000)
            {
                qmulheres++;
            }
        }

        else
        {

            system("cls");
        }
    }

    if (soma > 0 && numpessoas > 0)

    {
        media = soma / numpessoas;

        cout << "Média Salarial:" << media << endl;
        cout << "Maior idade:" << idademaior << endl;
        cout << "Menor idade:" << idademenor << endl;
        cout << "Mulheres com salário até 1000:" << qmulheres << endl;
    }
    return 0;
}
