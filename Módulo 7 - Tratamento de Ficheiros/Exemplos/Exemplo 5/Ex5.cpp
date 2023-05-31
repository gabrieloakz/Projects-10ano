Gravar dados num ficheiro
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char fname[20], str[200];
    
    fstream fp;
    
    cout << "Escreve o nome do ficheiro : ";
    cin.getline(fname, 20);
    
    fp.open(fname, fstream::out);
    
    if (!fp)
    {
        cout << "\nOcorreu um erro!";
        return 0;
    }

    cout << "Introduz a data: ";
    cin.getline(str, 200);
    
    while (strlen(str) > 0)
    {
        fp << str;
        fp << "\n";
        gets_s(str);
    }
    
    fp.close();
    cout << endl;
    
    return 0;
}
