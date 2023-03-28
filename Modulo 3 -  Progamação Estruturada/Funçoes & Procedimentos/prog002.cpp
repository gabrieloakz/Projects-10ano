#include <iostream>
#include <locale>
using namespace std;

int soma(int a , int b) 
{

// Subtrai números e retorna o valor para a função principal

return a - b ;

}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");

    int num1 , num2 , resultado;

    cout << "Insira o primeiro número:";
    cin >> num1;
    cout << "Insira o segundo número:";
    cin >> num2;
    
    resultado = soma(num1,num2) ;
    
    // Exibe o cáuculo e o resultado

    cout << num1 << " - " << num2 << " = " << resultado << endl ;
    
    return 0;
}


