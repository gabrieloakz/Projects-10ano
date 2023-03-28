#include <iostream>
#include <locale>
using namespace std;

float imc, peso, altura;

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    cout << "Insira seu peso:";
    cin >> peso;
    cout << "Insira sua altura:";
    cin >> altura;
    imc = peso / (altura * altura);

    system ("cls") ;
    
    if (imc <= 0)
    {
        cout << "IMC INVÁLIDO" << endl ;
    }
    else if (imc <= 18.5)
    {
        cout << "Seu IMC é:" << imc << endl << "Abaixo do peso!\n";
    }
    else if (imc <= 24.9)
    {
        cout << "Seu IMC é:" << imc << endl << "Peso normal!\n";
    }
    else if ( imc <= 29.9)
    {
        cout << "Seu IMC é:" << imc << endl << "Sobrepeso!\n";
    }
    else if ( imc <= 34.9)
    {
        cout << "Seu IMC é:" << imc << endl << "Obesidade grau I!\n";
    }
    else if ( imc <= 39, 9)
    {
        cout << "Seu IMC é:" << imc << endl << "Obesidade grau II\n";
    }
    else 
    {
        cout << "Seu IMC é:" << imc << endl << "Obesidade grau III\n";
    }

return 0;
}
