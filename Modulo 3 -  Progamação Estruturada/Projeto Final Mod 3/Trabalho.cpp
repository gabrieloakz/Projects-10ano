#include <iostream>
#include <locale>
using namespace std;

// Declaração de Variáveis

int MenuEscolhido;
int valorIntoduzido1, valorIntoduzido2, valorIntoduzido3, valorIntoduzido4;
int valorCodificado1, valorCodificado2, valorCodificado3, valorCodificado4;
int valorD1, valorD2, valorD3, valorD4;

// Declaração de Funções

void Menu();

void IntroduzirSequencia();

void CodificarSequencia();

void DescodificarSequencia();

void Sair();

// Função Principal

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    do
    {
        Menu();

        switch (MenuEscolhido)
        {
        case 1:

            IntroduzirSequencia();
            break;

        case 2:

            CodificarSequencia();

            break;

        case 3:

            DescodificarSequencia();

            break;

        case 0:

            Sair();
            break;

        default:

            break;
        }
    } while (MenuEscolhido != 0);

    return 0;
}

// Definição das funções abaixo:

// Menu Inicial

void Menu()
{

    system("cls");

    cout << "PROGRAMA DE CODIFICAÇÃO - CENTRAL SECRET\n";
    cout << "1 - Introduzir Sequência\n";
    cout << "2 - Codificar Sequência\n";
    cout << "3 - Descodificar Sequência\n";
    cout << "0 - Sair\n";
    cin >> MenuEscolhido;

    system("cls");
}

int codificacao(int x)
{
    int resultado;

    resultado = (x + 8) * 10;
    return resultado;
}

int descodificacao(int y)
{
    int resultado;

    resultado = (y / 10) - 8;

    return resultado;
}

void IntroduzirSequencia()
{

    cout << "---- PROCESSO SECRETO DE CODIFICAÇÃO ----\n\n";

    cout << "Insira um valor: ";
    cin >> valorIntoduzido1;
    cout << "Insira um valor: ";
    cin >> valorIntoduzido2;
    cout << "Insira um valor: ";
    cin >> valorIntoduzido3;
    cout << "Insira um valor: ";
    cin >> valorIntoduzido4;
}

void CodificarSequencia()
{

    valorCodificado1 = codificacao(valorIntoduzido1);
    valorCodificado2 = codificacao(valorIntoduzido2);
    valorCodificado3 = codificacao(valorIntoduzido3);
    valorCodificado4 = codificacao(valorIntoduzido4);
    cout << valorCodificado1 << " - " << valorCodificado2 << " - " << valorCodificado3 << " - " << valorCodificado4 << "\n";

    system("pause");
}

void DescodificarSequencia()
{
    valorD1 = descodificacao(valorCodificado1);
    valorD2 = descodificacao(valorCodificado2);
    valorD3 = descodificacao(valorCodificado3);
    valorD4 = descodificacao(valorCodificado4);

    cout << valorD1 << " - " << valorD2 << " - " << valorD3 << " - " << valorD4 << "\n";
}

void Sair()
{
    system("pause");
    system("cls");
}