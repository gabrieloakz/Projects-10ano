// gabriel ferreira carvalho e joao bahia 10E

#include <iostream>
#include <locale>

using namespace std;

// Define os valores de pedra, papel e tesoura
// Útil para definir valores constantes para usar no futuro

#define PEDRA 1
#define PAPEL 2
#define TESOURA 3

// Variáveis Globais

int Pontosjogador = 0, Pontoscpu = 0;

// Exibe o menu a cada rodada

void Menu()

{

    cout << "\t-------------------";
    cout << "\tPedra Papel Tesoura";
    cout << "\t-------------------";
    cout << "\n\n\t\t\t        Total de pontos" << endl;
    cout << "\n\t\t\t          Jogador:" << Pontosjogador << endl;
    cout << "\n\t\t\t          CPU:" << Pontoscpu << endl;
}

int EscolhaJogador()
{

    int aposta;

    cout << "\n\t\t\t(1) Pedra |(2) Papel | (3) Tesoura |\n";
    cout << "\n\t\t\t        Digite sua aposta:";

    cin >> aposta;

    return aposta;
}

int EscolhaCpu()
{

    // Ferrementa random
    // Rand começa do 0
    // Por isso % 3 + 1 pra ir do 1 ao 3
    // Computador escolhe aleatoriamente 1, 2 ou 3

    return (rand() % 3 + 1);
}

void legendaescolha(int l)
{

    if (l == PEDRA)
    {
        cout << " PEDRA ";
    }

    else if (l == PAPEL)
    {
        cout << " PAPEL ";
    }

    else
    {
        cout << " TESOURA ";
    }
}

void ExibirEscolhas(int j, int c)
{

    cout << "\n\t\t\tJogador ->";

    legendaescolha(j);

    cout << "X";

    legendaescolha(c);

    cout << "<- Computador\n\t\t\t";
}

char VerificarVencedor(int ApostaJ, int ApostaC)
{

    if (ApostaJ == PEDRA && ApostaC == PAPEL || ApostaJ == PAPEL && ApostaC == TESOURA || ApostaJ == TESOURA && ApostaC == PEDRA)
    {
        return 'C';
    }

    if (ApostaJ == PAPEL && ApostaC == PEDRA || ApostaJ == TESOURA && ApostaC == PAPEL || ApostaJ == PEDRA && ApostaC == TESOURA)
    {
        return 'J';
    }

    return 'E';
}

void ContarPontos(char Vencedor)
{

    if (Vencedor == 'J')
    {
        Pontosjogador++;
        puts("Jogador Ganhou!");
    }

    else if (Vencedor == 'C')
    {
        Pontoscpu++;
        puts("Computador Ganhou!");
    }

    else
    {
        puts("Empate!");
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int ApostaJogador;
    int ApostaCpu;
    char Resultado;

    do
    {

        if (Pontosjogador < 3 && Pontoscpu < 3)
        {

            Menu();

            ApostaJogador = EscolhaJogador();

            if (ApostaJogador > 0 && ApostaJogador < 4)
            {
                ApostaCpu = EscolhaCpu();

                ExibirEscolhas(ApostaJogador, ApostaCpu);

                Resultado = VerificarVencedor(ApostaJogador, ApostaCpu);

                ContarPontos(Resultado);

                system ("pause") ;

                system ("cls") ;

            }
        }

    } while (Pontosjogador < 3 && Pontoscpu < 3);

    return 0;
}
