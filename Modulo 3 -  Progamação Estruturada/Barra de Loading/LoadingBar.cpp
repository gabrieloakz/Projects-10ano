// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    // setlocale(LC_ALL, "pt_PT.utf8");

    int Barra, i;
    
    system("color 0c");

    system("cls");

    Barra = 219;

    cout << "\n\n\n\t\t\t\t";

    cout << "\n\n\n\t\t\t\t";

    for (i = 0; i < 32; i++)
    {
        cout << char(Barra);

        this_thread::sleep_for(10ms) ;
    }

    cout << " " << "Tarefa Concluida" << i << "/32\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t" ;

    this_thread::sleep_for(10ms) ;

    return 0;
}
