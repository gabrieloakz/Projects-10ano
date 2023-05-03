#include <iostream>
using namespace std;

int main()
{
    float array[3] = {2.5, -1.0, 7.3};

    float *ponteiro_do_array;

    ponteiro_do_array = array;
    cout << *ponteiro_do_array << "\n"; // Ouput: 2.5

    ponteiro_do_array++;
    cout << *ponteiro_do_array++ << "\n"; // Output: -1
    cout << *ponteiro_do_array << "\n";   // Output: 7.3
    return 0;
}
