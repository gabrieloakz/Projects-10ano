#include <iostream>
#include <fstream>
using namespace std;

struct Carro
{
    string marca;
    string modelo;
    int ano;
};

void adicionar_carro()
{
    Carro item;
    item.marca = "Opel";
    item.modelo = "Corsa";
    item.ano = 1980;

    // Abrir/criar ficheiro em modo escrita e adicionar carro a partir da struct
    cout << "Writing Carro to file" << endl;
    ofstream fout("mydata.txt");
    fout << item.marca << ' ' << item.modelo << ' ' << item.ano;
    fout.close();

    cout << "Original: " << item.marca << ' ' << item.modelo << ' ' << item.ano << endl;
}

void ler_ficheiro()
{
    // Abrir ficheiro e ler carro do ficheiro para dentro da struct
    cout << "Reading Carro from file" << endl;
    Carro from_file;
    ifstream fin("mydata.txt");
    fin >> from_file.marca >> from_file.modelo >> from_file.ano;
    fin.close();

    cout << "Read in:  " << from_file.marca << ' ' << from_file.modelo << ' ' << from_file.ano << endl;
}

int main()
{
    // adicionar_carro();

    ler_ficheiro();

    return 0;
}