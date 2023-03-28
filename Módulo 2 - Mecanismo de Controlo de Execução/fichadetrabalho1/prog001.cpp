#include <iostream>
using namespace std;

//gabriel ferreira carvalho 10e

int main()
{
    int year;

    cout <<"Ano: ";
    cin >> year;


    if( (year % 400 == 0) || ( (year % 4 == 0) && (year % 100 != 0) ) )
        cout << "É bissexto" << endl;
    else
        cout << "Não é bissexto" << endl;


    return 0;
}