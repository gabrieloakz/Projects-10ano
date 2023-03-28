// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
using namespace std;

// Escreve um programa que, usando um vetor, permita obter a altura de
// cada um dos alunos  da turma e que apresente a média das alturas.

int main()

{

    int i ;
    float Altura[22] ;
    float Soma = 0 ;
    float Media ; 

    for (i = 0; i < 22; i++)
    {

        cout << i << "/22\t";
        cout << "Insira a altura do aluno:" ;
        cin >> Altura[i];

        Soma = Soma + Altura[i];
    }

    Media = Soma / 22;

    cout << "\nMedia: " << Media << "\n\n";

    return 0;
}
