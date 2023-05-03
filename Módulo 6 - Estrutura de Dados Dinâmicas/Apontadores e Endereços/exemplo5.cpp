#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char string[] = "abcdef";

    char *ponteiro_da_string = string;

    for (int i = 5; i >= 0; i--) 
    {
        cout << *(ponteiro_da_string+i); // Output: fedcba
    }

    cout << "\n";

    return 0;
}
