// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
#include <string> //biblioteca pra trabalhar com strings
using namespace std;

// • Em C++, a manipulação de uma string pode ser feita da
// mesma forma que de um vetor.

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");
    
    string disciplina = "Protamação";

    cout << disciplina << endl;

    disciplina[3] = 'g';

    cout << disciplina << endl;

    return 0;
}
