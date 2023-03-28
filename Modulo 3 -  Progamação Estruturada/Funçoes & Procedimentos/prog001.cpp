#include <iostream>
#include <locale>
using namespace std;

float soma(float a , float b) 
{

// Soma os números e retorna o valor para a função principal

return a + b ;

}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");

    float num1 , num2 , resultado;

    cout << "Insira o primeiro número:";
    cin >> num1;
    cout << "Insira o segundo número:";
    cin >> num2;
    
    resultado = soma(num1,num2) ;
    
    cout << "Soma = " << resultado << endl ;
    
    return 0;
}


