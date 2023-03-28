// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
#include <string> //biblioteca pra trabalhar com strings
using namespace std;

// • Em C++, é possível determinar o comprimento de uma
// string utilizando a função length() da biblioteca string.

int main(int argc, char const *argv[])
{
    string primeiroNome = "Maria";
    
    int comprimento = primeiroNome.length();
    
    cout << comprimento << endl;
    
    return 0;
}
