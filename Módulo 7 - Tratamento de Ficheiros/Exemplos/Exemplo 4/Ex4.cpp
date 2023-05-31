// Criar ficheiro e imprimir no ecrã o conteúdo de um txt
// ▪ Este é o programa para ler o conteúdo de um ficheiro de texto em C++.
// ▪ O ficheiro recém-criado, segundo.txt, é lido por meio deste programa :

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Criar um ficheiro de texto
    ofstream meuficheiroescrita("segundo.txt");
    
    // Escrever no ficheiro
    meuficheiroescrita << "\nOs ficheiros podem ser complicados, mas divertidos suficiente !";
    meuficheiroescrita << "\nSera que posso ter duas linhas?";
    meuficheiroescrita << "\nSim, mas esta a escrever tudo na mesma !";
    
    // Fechar o ficheiro
    meuficheiroescrita.close();
    
    // Criar uma variável string, que é usado para gerar o ficheiro de texto
    string meutexto;
    
    // Ler do ficheiro de texto
    ifstream meuficheiroleitura("segundo.txt");
    
    // Use um loop while junto com a função getline() para ler oficheiro linha por linha 
    while (getline(meuficheiroleitura, meutexto))
    {
        // Saída do texto do ficheiro
        // Aqueles \n lá acima não contam, o correto seria escrever o \n aqui
        cout << meutexto; // << "\n";
        
    }
    // Fechar o ficheiro
    meuficheiroleitura.close();
}
