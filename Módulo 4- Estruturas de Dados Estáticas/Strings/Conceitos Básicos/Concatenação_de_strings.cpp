// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
#include <string> //biblioteca pra trabalhar com strings
using namespace std;

// A concatenação de strings, em C++, é conseguida através:
// • do operador “+”
// • da função append()

int main(int argc, char const *argv[])
{
    string primeiroNome = "Maria";

    string ultimoNome = "Silva";

    string completoNome = primeiroNome + " " + ultimoNome;

    cout << completoNome << endl;

    // Ou...

    primeiroNome.append(ultimoNome);

    cout << primeiroNome << endl;

    // Ao utilizar a função append(), variável primeiroNome fica com o valor “MariaSilva”.

    return 0;
}
