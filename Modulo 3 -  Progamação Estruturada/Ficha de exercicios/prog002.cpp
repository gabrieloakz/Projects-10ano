#include <iostream>
#include <locale>
using namespace std;

int multiplicacao()
{

    int num, multiplicacao = 0 ;
    
    do
    {

        cout << "\ninsira um numero:" ;
        cin >> num ;

        if (num != 0)
        {
            multiplicacao = multiplicacao + num ;
        }
                                        
    }while (num != 0) ;
    
    multiplicacao++ ;

    return soma ;

}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    cout << "Digite 0 para encerrar\n" ;
    
    cout << "Resultado:"  << multiplicacao() << endl ;
    
    return 0;
}


    