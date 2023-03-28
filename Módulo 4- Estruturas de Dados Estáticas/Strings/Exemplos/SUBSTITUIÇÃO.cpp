// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
using namespace std;

// • replace() – permite substituir um excerto de texto por outro podendo também
// servir para acrescentar ou excluir conteúdo numa posição especificada.
// Deverão ser utilizados os argumentos seguintes:

// Argumento Descrição

// pos: Posição a partir da qual se inicia a substituição. A indexação começa em 0.

// len: Número de caracteres a serem substituídos.

// str: Texto de substituição.

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    string valor "Eis un texto.";

    cout << valor << endl; // Imprime "Eis um texto."

    valor = valor.replace(7, 0, "pouco de"); // Substitui "Eis []texto."
                                             // por "Eis [um pouco de ]texto."

    cout << valor << endl; // Imprime "Eis um pouco de texto."

    valor = valor.replace(7, 8, "pequeno"); // Substitui "Eis [um pouco de ]texto."
                                            // por "Eis um [pequeno] texto."

    cout << valor << endl; // Imprime "Eis um [pequeno] texto."

    valor = valor.replace(7, 8, ""); // Substitui "Eis um [pequeno] texto."
                                     // por "Eis []texto."

    cout << valor << endl; // Imprime "Eis un texto."

    return 0;
}
