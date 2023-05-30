#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char nomefile[30], ch;
    
    fstream fp;
    
    cout << "Escreva o nome do ficheiro : ";
    cin.getline(nomefile, 30);
    
    fp.open(nomefile, fstream::in);

    if (!fp)
    {
        cout << "Ocorreu um erro!";
        return 0;
    }
    
    cout << "\n------" << nomefile << "-------\n";
    
    while (fp >> noskipws >> ch)
    {
        cout << ch;
    }

    fp.close();
    
    cout << endl;
    
    return 0;
}
