#include <iostream>
#include <locale>
using namespace std;

float n1, n2, n3;
char operacao;

void adicao()
{

    system("cls");
    n3 = n1 + n2;
    cout << "Resultado: " << n3 << endl;
}

void subtracao()
{

    system("cls");
    n3 = n1 - n2;
    cout << "Resultado: " << n3 << endl;
}

void multiplicacao()
{
    system("cls");
    n3 = n1 * n2;
    cout << "Resultado: " << n3 << endl;
}

void divisao()
{
    system("cls");
    n3 = n1 / n2;
    cout << "Resultado: " << n3 << endl;
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    cout << "Insira o primeiro número:\n";
    cin >> (n1);
    cout << "Insira o segundo número:\n";
    cin >> (n2);
    cout << "Digite a operação desejada:\n";
    cin >> (operacao);

    switch (operacao)
    {
    case '+':
        adicao();
        break;
    case '-':
        subtracao();
        break;
    case '*':
        multiplicacao();
        break;
    case '/':
        divisao();
        break;

    default:
        break;
    }

    return 0;
}

