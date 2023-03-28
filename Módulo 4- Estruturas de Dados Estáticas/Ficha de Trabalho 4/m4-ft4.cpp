// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
using namespace std;

// Declaração de constantes

const int DIM = 7;

// Declaração do vetor

int valores[DIM] = {54, 35, 67, 97, 101, 43, 153};

// Declaração de Variáveis

int MenuEscolhido;

// Declaração de Funções

void Menu_Principal();

void EscolhaMenu();

void Mostrar_Registro_de_Quilometragens();

void Quilometragem_Maxima();

void Quilometragem_Minima();

void Ordem_Crescente();

void Ordem_Decrescente();

void Sair();

// Enunciado

// O João registou os quilómetros que percorreu em cada dia da passada semana(domingo a sábado) com o seu automóvel.
// Considere que o valor relativo aos quilómetros é um número inteiro.Fazendo uso do conceito de Array,
// construa um programa em C++ em que :

// 1. Escreva uma função que escreva no ecrã o conteúdo do array, indicando o respetivo índice.

// 2. Tendo por base o array nas condições de 1. (isto é, o vetor não está ordenado), crie
// uma função que escreva no ecrã o índice e o valor do array em que o valor máximo
// de quilómetros foi percorrido.

// 3. Tendo por base o array nas condições de 1. (isto é, o vetor não está ordenado), crie
// uma função que escreva no ecrã o índice e o valor do array em que o valor mínimo
// de quilómetros foi percorrido.

// 4. Crie uma função que ordene por ordem crescente os quilómetros percorridos pelo
// João, utilizando o algoritmo insertion sort, e escreva no ecrã.

// 5. Crie uma função que ordene por ordem decrescente os quilómetros percorridos pelo
// João, utilizando o algoritmo selection sort, e escreva no ecrã

// Funções

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    system("color 0e");

    EscolhaMenu();

    return 0;
}

void Menu_Principal()
{

    system("cls");

    puts("\t");
    puts("\t1 - Mostrar Registro de Quilometragens");
    puts("\t2 - Quilometragem Máxima");
    puts("\t3 - Quilometragem Mínima");
    puts("\t4 - Ordem Crescente");
    puts("\t5 - Ordem Decrescente ");

    cout << "\n\n\tInsira a sua escolha: ";

    cin >> MenuEscolhido;
}

void EscolhaMenu()
{

    do
    {

        Menu_Principal();

        if (MenuEscolhido != 0)
        {

            switch (MenuEscolhido)
            {
            case 1:

                Mostrar_Registro_de_Quilometragens();
                break;

            case 2:

                Quilometragem_Maxima();
                break;

            case 3:

                Quilometragem_Minima();
                break;

            case 4:
                Ordem_Crescente();
                break;

            case 5:

                Ordem_Decrescente();
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

void Mostrar_Registro_de_Quilometragens()
{

    system("cls");

    puts("\t");

    puts("\tREGISTRO DE QUILOMETRAGENS...");

    puts("\t");

    for (int i = 0; i < DIM; i++)
    {

        cout << "\tQuilometragem[" << i << "]: " << valores[i];

        cout << "\n\n";
    }

    cout << "\tPara voltar ao menu digite qualquer tecla!"
         << "\n\n\t";

    system("pause");
}

void Quilometragem_Maxima()
{

    int i, maiornum = valores[0], posicao = 0;

    system("cls");

    puts("\t");

    puts("\tQUILOMETRAGEM MÁXIMA...");

    puts("\t");

    for (i = 0; i < DIM; i++)
    {

        if (valores[i] > maiornum)
        {
            maiornum = valores[i];
            posicao = i;
        }
    }

    cout << "\tO maior valor é: "
         << "Quilometragem[" << posicao << "]: " << maiornum << "\n\n\t";

    cout << "Para voltar ao menu digite qualquer tecla!"
         << "\n\n\t";

    system("pause");
}

void Quilometragem_Minima()
{

    int i, menornum = valores[0], posicao = 0;

    system("cls");

    puts("\t");

    puts("\tQUILOMETRAGEM MÍNIMA...");

    puts("\t");

    for (i = 0; i < DIM; i++)
    {

        if (valores[i] < menornum)
        {
            menornum = valores[i];
            posicao = i;
        }
    }

    cout << "\tO menor valor é: "
         << "Quilometragem[" << posicao << "]: " << menornum << "\n\n\t";

    cout << "Para voltar ao menu digite qualquer tecla!"
         << "\n\n\t";

    system("pause");
}

void Ordem_Crescente()
{

    int i, j, aux;

    system("cls");

    puts("\t");

    puts("\tORDENAÇÃO CRESCENTE DOS VALORES...");

    puts("\t");

    // Insertion Sort: Neste caso compara os elementos do vetor e os põe em ordem crescente

    for (i = 1; i < DIM; i++)
    {
        aux = valores[i];

        for (j = i - 1; (j >= 0) && (aux > valores[j]); j--) //*obs: mudando o sinal faz se decrescente

            valores[j + 1] = valores[j];

        valores[j + 1] = aux;
    }

    // Abaixo escreve os valores na tela

    cout << "\t{" << valores[0];

    for (i = 1; i < DIM; i++)
    {
        cout << ", " << valores[i];
    }

    cout << "}\n\n\t";

    cout << "Para voltar ao menu digite qualquer tecla!"
         << "\n\n\t";

    system("pause");
}

void Ordem_Decrescente()
{

    int i, j, aux, maior;

    system("cls");

    puts("\t");

    puts("\tORDENAÇÃO DECRESCENTE DOS VALORES...");

    puts("\t");

    // Selection Sort: Neste caso percorre todos os elementos percebe qual o menor que identificou
    // e coloca-os em ordem decrescente.

    for (i = 0; i < DIM - 1; i++)
    {
        maior = INT_MIN;

        for (j = 0; j < DIM - i; j++)

            if (valores[j] < valores[maior]) // sINAL DE MENOR QUE PARA FAAZER DECRESCENTE

                maior = j;

        aux = valores[DIM - i - 1];
        valores[DIM - i - 1] = valores[maior];
        valores[maior] = aux;
    }
    
    // Abaixo escreve os valores na tela
   
    cout << "\t{" << valores[0];

    for (i = 1; i < DIM; i++)
    {
        cout << ", " << valores[i];
    }

    cout << "}\n\n\t";

    cout << "Para voltar ao menu digite qualquer tecla!"
         << "\n\n\t";

    system("pause");
}

void Sair()
{

    system("cls");

    cout << "\n\n\tPressione qualquer tecla para sair do progama!"
         << "\n\n\t";
}
