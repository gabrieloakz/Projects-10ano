// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
#include <string> //biblioteca pra trabalhar com strings
using namespace std;

// Enunciado

// 1.1. Inicialize a string texto, declarada localmente na main(), com a sequência anterior.

// 1.2. Construa a função void mostra_palavras(string s) que adicione uma nova-linha ao
// ecrã e mostre a o conteúdo da string, uma palavra em cada linha do ecrã.

// 1.3. Construa a função int conta_chars(string s, char c), que determine o número de
// ocorrências de um caractere c na string s (ambos recebidos como argumentos).

// 1.4. Construa a função int substitui(string s, char c1, char c2), que substitua todas as
// ocorrências de c1 por c2 na string s (s, c1 e c2 todos recebidos como argumentos)
// e retorne quantas substituições foram efetuadas (Por exemplo, se a função devolver
// zero significa que não foi feita substituição alguma).

// 1.5. Construa a função void primeiras_maiusculas(string s), que substitua todas as
// ocorrência de cada primeira letra de uma palavra pela respetiva maiúscula.

// 1.6. Construa a função void troca_duplo_espaco(string s), que altere as sequências
// de dois espaços seguidos “ ” pela sequencia dos caracteres ‘.’ e ‘\n’ (ponto final e
// nova-linha).

// 1.7. Construa a função int conta_palavras(string s), que determine o número de
// palavras na string. Nota: Pode considerar uma palavra toda a sequência de
// caracteres limitado por espaços (com um espaço antes e um espaço depois)

// Declaração de variáveis globais

string texto;

int MenuEscolhido;

// Declaração de funções

void Insira_String();

void Menu_Principal();

void EscolhaMenu();

void mostra_palavras(string s);

int conta_chars(string s, char c);

int substitui(string s, char c1, char c2);

void primeiras_maiusculas(string s);

void troca_duplo_espaco(string s);

int conta_palavras(string s);

void Sair();

// Função Principal

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    system("color 0e");

    Insira_String();

    EscolhaMenu();

    return 0;
}

void Insira_String()
{

    puts("\t");
    cout << "\tInsira a frase desejada:";
    getline(cin, texto);
}

void Menu_Principal()
{

    system("cls");

    puts("\t");
    puts("\t1 - Mostrar Palavras da String");
    puts("\t2 - Contar Cracter");
    puts("\t3 - Substituir Caracter");
    puts("\t4 - Tornar Maiúscula");
    puts("\t5 - Eliminar Duplo-Espaço ");
    puts("\t6 - Contar Palavras ");

    cout << "\n\n\tInsira a sua escolha: ";

    cin >> MenuEscolhido;
}

void EscolhaMenu()
{
    int NumOcorrencias, NumSubstituicoes, NumPalavras;
    char letra, letraSubstituida, letraSubstituta;

    do
    {

        Menu_Principal();

        if (MenuEscolhido != 0)
        {

            switch (MenuEscolhido)
            {
            case 1:

                mostra_palavras(texto);
                break;

            case 2:
                cout << "\n\tQual caractere deseja contar?";
                cin >> letra;

                NumOcorrencias = conta_chars(texto, letra);

                cout << "\n\tNúmero de ocorrências do caractere:" << NumOcorrencias << "\n\n\t";

                system("pause");

                break;

            case 3:
                cout << "\n\tQual caractere deseja substituir?";
                cin >> letraSubstituida;
                cout << "\n\tPor qual outro caractere?";
                cin >> letraSubstituta;

                NumSubstituicoes = substitui(texto, letraSubstituida, letraSubstituta);

                cout << "\n\tNúmero de Substituições do caractere:" << NumSubstituicoes << "\n\n\t";

                system("pause");

                break;

            case 4:

                primeiras_maiusculas(texto);
                break;

            case 5:

                troca_duplo_espaco(texto);
                break;

            case 6:

                NumPalavras = conta_palavras(texto);
                cout << "\n\tA string \"" << texto << "\" contém " << NumPalavras << " palavras."
                     << "\n\n\t";
                system("pause");
                break;

            default:

                puts("\t");
                puts("\tEscolha inválida, tente novamente");
                cout << "\n\n\t";
                system("pause");
                break;
            }
        }

    } while (MenuEscolhido != 0);

    Sair();
}

void mostra_palavras(string s)
{
    system("cls");

    int posicaoEspaco = -1; // começa na posiçao -1 pra nao desconsiderar a 0

    cout << "\n";

    do
    {
        // procura proximo espaço

        posicaoEspaco = s.find(" ", posicaoEspaco + 1);

        if (posicaoEspaco != -1)
        {
            // substitui o espaço por outro caractere
            s = s.replace(posicaoEspaco, 1, "\n");
            // cout << "Encontrei um espaço na posicao: " << posicaoEspaco
        }

    } while (posicaoEspaco != -1);

    cout << s << endl;

    // Outra solução
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (s[i] == ' ' && s[i + 1] != ' ')
    //     {
    //         cout << "\n";
    //     }
    //     else
    //     {
    //         cout << s[i];
    //     }
    // }

    system("pause");
}

int conta_chars(string s, char c)
{

    system("cls");

    int posicaoCaractere = -1;
    int NumVezes = 0;

    // cout << "\t";

    do
    {
        // procura o caractere recebido

        posicaoCaractere = s.find(c, posicaoCaractere + 1);

        if (posicaoCaractere != -1)
        {
            // conta ocorrencias do caractere
            NumVezes++;
        }

    } while (posicaoCaractere != -1);

    return NumVezes; // ou poderia ser com for tambem
}

int substitui(string s, char c1, char c2)
{

    // Construa a função int substitui(string s, char c1, char c2), que substitua todas as
    // ocorrências de c1 por c2 na string s (s, c1 e c2 todos recebidos como argumentos)
    // e retorne quantas substituições foram efetuadas (Por exemplo, se a função devolver
    // zero significa que não foi feita substituição alguma).

    system("cls");

    int NumSubstituicoes = 0;

    int posicaoCaracter = -1;

    cout << "\n";

    do
    {
        // procurar character par substitui-lo

        posicaoCaracter = s.find(c1, posicaoCaracter + 1);

        if (posicaoCaracter != -1)
        {
            // substitui o caracter c1 por outro caractere c2
            s = s.replace(posicaoCaracter, 1, 1, c2); // tipo  de replace utilizado = fill

            NumSubstituicoes++;
        }

    } while (posicaoCaracter != -1);

    cout << s << endl;

    return NumSubstituicoes;
}

void primeiras_maiusculas(string s)
{

    // 1.5. Construa a função void primeiras_maiusculas(string s), que substitua todas as
    // ocorrência de cada primeira letra de uma palavra pela respetiva maiúscula.

    system("cls");

    int posicaoEspaco = -1;

    cout << "\n\t";

    s[0] = toupper(s[0]); // deixa o primeiro caracter maisculo

    do
    {
        // procura proximo espaço

        posicaoEspaco = s.find(" ", posicaoEspaco + 1);

        if (posicaoEspaco != -1)
        {
            // substitui o caracter a seguir ao espaço pelo carceter maiusculo
            s = s.replace(posicaoEspaco + 1, 1, 1, toupper(s[posicaoEspaco + 1]));
        }
    } while (posicaoEspaco != -1);

    cout << s << "\n\n\t";

    system("pause");
}

void troca_duplo_espaco(string s)
{

    // 1.6. Construa a função void troca_duplo_espaco(string s), que altere as sequências
    // de dois espaços seguidos “ ” pela sequencia dos caracteres ‘.’ e ‘\n’ (ponto final e
    // nova-linha).

    system("cls");

    int posicaoEspaco = -1;

    cout << "\n";

    do
    {
        // procura duplo espaço

        posicaoEspaco = s.find("  ", posicaoEspaco + 1);

        if (posicaoEspaco != -1)
        {
            // substitui o duplo espaço por ".\n"
            s = s.replace(posicaoEspaco, 2, ".\n");
        }
    } while (posicaoEspaco != -1);

    cout << s << "\n\n";

    system("pause");
}

int conta_palavras(string s)
{

    // 1.7. Construa a função int conta_palavras(string s), que determine o número de
    // palavras na string. Nota: Pode considerar uma palavra toda a sequência de
    // caracteres limitado por espaços (com um espaço antes e um espaço depois)

    system("cls");
    cout << "\n";

    int posicaoEspaco, NumPalavras = 0;

    posicaoEspaco = -1;

    // Se o primeiro caractere nao for espaco, é uma palavra!

    if (s[0] != ' ')

        NumPalavras++;

    // Procura pelos espaços, e oque vem a seguir ao espaço é palavra

    do
    {
        posicaoEspaco = s.find(" ", posicaoEspaco + 1);

        // so contabiliza a ult. palavra se nao for um espaço

        if (posicaoEspaco != -1 && (posicaoEspaco + 1 < s.length() && s[posicaoEspaco + 1] != ' '))

            NumPalavras++;

    } while (posicaoEspaco != -1);

    cout << "\t" << s << endl;

    return NumPalavras;
}

void Sair()
{
}