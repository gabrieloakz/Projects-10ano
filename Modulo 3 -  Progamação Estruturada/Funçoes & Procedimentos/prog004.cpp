#include <iostream>
#include <locale>
using namespace std;

// Cria uma calculadora que pergunte qual das operações
// básicas a fazer (+, -, * e /), para de seguida solicitar dois
// números e mostrar o resultado da operação matemática
// entre eles.

float adicao(float n1, float n2)
{

    return n1 + n2;
}

float subtracao(float n1, float n2)
{

    return n1 + n2;

}

float multiplicacao(float n1, float n2)
{

    return n1 + n2;

}

float divisao(float n1, float n2)
{

    return n1 + n2;

}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");
    float n1, n2, resultado;
    char operacao;

    do
    {
        system("cls");
        cout << "Insira o primeiro número:\n";
        cin >> (n1);
        cout << "Digite o símbolo do operação desejada:\n";
        cin >> (operacao);
        cout << "Insira o segundo número:\n";
        cin >> (n2);

        if (n1 != -99)
        {
            switch (operacao)
            {
            case '+':
                
                resultado = adicao(n1, n2);
                
                break;
            case '-':
                
                resultado = subtracao(n1, n2);
                
                break;
            case '*':
                
                resultado = multiplicacao(n1, n2);
                
                break;
            case '/':
                
                resultado = divisao(n1, n2);

                break;

            default:
            
            cout << "\nCarácter Inválido!\n " ;
            cout << "\nTente Novamente:\n" ;
                
                break;
            }

            cout << "\nResultado: " << resultado << endl;
            system("pause");
        }

    } while (n1 != -99);

    return 0;
}
