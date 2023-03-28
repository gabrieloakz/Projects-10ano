#include <iostream>
#include <locale>
using namespace std;

int num;

/*Procedimento*/

void primeirosinteiros(int x)
{

   // Exibe os números inteiros apartir do número x
   
    for (int i = 0; i <= 10; i++)
    {
        cout << i + x << " ";
    }

    // Outra solução

    // for ( i = x; i <= 10 + x ; i++)
    // {
    //     cout << i << " ";
    // }

    cout << "\n";
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");
    
    cout << "Digite o número:";
    cin >> num;
    primeirosinteiros(num);
    return 0;
}
