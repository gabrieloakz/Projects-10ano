#include <iostream>
#include <locale>
using namespace std;

// gabriel ferreira carvalho 10

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    // Prover um valor de semente
    srand((unsigned)time(NULL));

    int random ,  num ,  soma = 0 ;

    do
    {
        cout << "insira um número:" ;
        cin >> num ;
    
    } while ( num < 1 || num > 10 );

    do
    {
        // obter um numero aleatorio
        random = rand() % 10 + 1;

        // Escrever o número 
        cout << random << endl;

        soma = soma + random ;
   
    } while ( random != num );

    
    cout << "\nA soma é:" << soma << endl;
    system ("pause"); 

    return 0;
}
