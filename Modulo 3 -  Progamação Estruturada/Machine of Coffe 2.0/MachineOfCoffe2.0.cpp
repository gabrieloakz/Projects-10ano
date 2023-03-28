// Projeto do aluno: Gabriel Ferreira Carvalho 10E

// Objetivo: Implementar um programa em C++ que simule uma máquina automática de café.

#include <iostream>
#include <locale>
using namespace std;

// Declaração de variáveis

int MenuEscolhido, EscolhaCompras;
int escolha, valor, credito, moeda, troco;
int q1, q2, q3, q4, q5, q6, q7;
float faturamento = 0;

void MenuPrincipal()
{

    system("cls");

    puts("(1) Comprar ");
    puts("(2) Faturamento");
    puts("(3) Sair");
    cin >> MenuEscolhido;
}

void Comprar()
{
    system("cls");
    puts("(1) Bebidas ");
    puts("(2) Lanches");
    puts("(3) Doces");
    cin >> EscolhaCompras;
}

void Faturamento()
{

    cout << "\nFaturamento = " << (faturamento / 100) << " Euros\n\n";
    
    if (q1 > 0)
   {
      cout << q1 << "Café(s) pingado(s) Vendido(s)\n\n";
   }

   if (q2 > 0)
   {
      cout << q2 << "Chá(s) de limão Vendido(s)\n\n";
   }

   if (q3 > 0)
   {
      cout << q3 << "Café(s) longo(s) Vendido(s)\n\n";
   }

   if (q4 > 0)
   {
      cout << q4 << "Café(s) curto(s) Vendido(s)\n\n";
   }

   if (q5 > 0)
   {
      cout << q5 << "Cappuccino(s) Vendido(s)\n\n";
   }

   if (q6 > 0)
   {
      cout << q6 << "Chocolate(s) Vendido(s)\n\n";
   }

   if (q7 > 0)
   {
      cout << q7 << "Galão(ões) Vendido(s)\n\n";
   }
    
    system("pause");
    system("cls");
}

void Sair()
{

    cout << "\n\nTchau Tchau Baby\n\n";
    system("pause");
    system("cls");
}

void MenuBebidas()

{
    system("cls");
    
    do

    {

        // Zerar as variáveis a cada compra seguida

        troco = 0, credito = 0, valor = 0, moeda = 0;

        cout << "----------------------------------\n";
        cout << "|       Cafeteria do Biel        |\n";
        cout << "----------------------------------\n";
        cout << "| 1-Café pingado ( 80 cêntimos ) |\n";
        cout << "| 2-Chá de limão ( 60 cêntimos ) |\n";
        cout << "| 3-Café longo ( 70 cêntimos )   |\n";
        cout << "| 4-Café curto ( 70 cêntimos )   |\n";
        cout << "| 5-Cappuccino ( 95 cêntimos )   |\n";
        cout << "| 6-Chocolate ( 85 cêntimos )    |\n";
        cout << "| 7-Galão ( 95 cêntimos )        |\n";
        cout << "----------------------------------";
        cout << "\n*Obs: Esta máquina só aceita moedas\n";
        cout << "\nInsira o número do produto: ";
        cin >> escolha;

        // Agora temos um if para que se digitado -99 parar a máquina

        if (escolha != -99)
        {

            // Logo após temos um Switch para o usário escolher o número
            // respectivo ao produto desejado
            // Tendo dentro de caso o valor do produto
            // E um acumulador para contabilizar a quantidade vendida

            switch (escolha)
            {
            case 1:
                valor = 80;
                q1++;
                break;

            case 2:
                valor = 60;
                q2++;
                break;

            case 3:
                valor = 70;
                q3++;
                break;
            case 4:
                valor = 70;
                q4++;
                break;

            case 5:
                valor = 95;
                q5++;
                break;

            case 6:
                valor = 85;
                q6++;
                break;

            case 7:
                valor = 95;
                q7++;
                break;

            default:
                cout << "Item inavlido! \n Escolha outro número! \n";
                valor = 0;
                break;
            }

            // Agora temos a declaração do faturamento para aumentar propgressivamente sempre que houver um novo valor

            faturamento = faturamento + valor;

            // Tendo o cliente escolhido seu produto temos um while para que
            // Enquanto o credito, valor que o cliente paga, for menor que o valor
            // Continuar a repetir o valor a pagar e pedir que o usuário insira a moeda

            while (credito < valor)
            {

                cout << "\nValor a pagar: " << valor - credito << endl;
                cout << "\ninsira a moeda: ";
                cin >> moeda;

                // Aqui temos uma estrutura de decisao if e else para que
                // Se inserida uma moeda correta, prosseguir e somar o valor da moeda ao credito inserido
                // Senão avisar que é uma moeda invalida e voltar a pedir uma moeda

                if (moeda == 5 || moeda == 10 || moeda == 20 || moeda == 50 || moeda == 100 || moeda == 200)
                {

                    credito = credito + moeda;
                }
                else
                {
                    cout << "Inválido! \nInsira uma moeda correta! \n";
                }
            }

            // Após ter sido pago o produto
            // Temos um if para que se o credito inserido seja maior doque o valor
            // Devolver o troco ao usuario, que é a diferença entre o que ele inseriu e o valor

            if (credito > valor)

            {

                troco = credito - valor;
                cout << "\nO seu troco é: " << troco << endl;
            }

            cout << "\nCompra bem sucedidada!\nRetire sua bebida! \nObrigado e volte sempre!\n";
            cout << "\nSe deseja algo a mais pressione enter\n\n";
        }

        // Após todo o processo da venda ter sido feito o usuario retira sua bebida
        // E temos um system pause e um system cls para limpar o ecrã
        // E caso o usuário queira comprar algo novamente digitar enter

        system("pause");
        system("cls");

        // E enfim o while respectivo ao do, responsavel por fazer esse processo todo se repetir
        // Enquanto nao digitarmos -99

    } while (escolha != -99);
}

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    // Variáveis Locais

    // Primeiramente faremos o Do While para que a maquina só funcione
    // enquanto nao for digitado -99, e caso seja digitado, encerrado

    do

    {

        MenuPrincipal();

        if (MenuEscolhido != 0)
        {

            switch (MenuEscolhido)
            {
            case 1:

                Comprar();
                break;

            case 2:

                Faturamento();
                break;

            case 3:

                Sair();
                break;

            default:
                break;
            }

            switch (EscolhaCompras)
            {
            case 1:

                MenuBebidas();

                break;

            default:
                break;
            }
        }

    } while (MenuEscolhido != 0);

    return 0;
}