#include <iostream>
#include <locale>
using namespace std;

// gabriel ferreira carvalho 10

int num, numvezes;

int main()
{
    
setlocale(LC_ALL, "pt_PT.utf8");
    
cout << " Insira um número: ";
cin >> num;
     
do
    
{
        
num = num / 2 ;

numvezes++ ; 
        
system ("cls") ;  
       
} while (num > 1);

    cout << "Resultado da divisão:" << num << endl ;
    cout << "Quantidade de divisões efetuadas:" << numvezes << endl ;

    return 0;
}
