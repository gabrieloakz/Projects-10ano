// Sintaxe : printf(“string a ser escrita no ecrã”, [lista de argumentos]);

// Na string a ser escrita no ecrã podem - se incluir especificadores de formato(começados por %) dos valores das variáveis indicadas nos argumentos.Alguns especificadores para imprimir conteúdo de variáveis : % c - representação ASCII;
 
// % dou % i - representação decimal com sinal;
// % u - representação decimal sem sinal;
// % o - representação octal sem sinal;
// % x - representação hexadecimal sem sinal.
//% f - representação com ponto decimal;
// % e - representação em notação científica(exponencial);
// % g - representação mais curta entre % f e % e.

#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");

    // Exemplo que demonstra o quão facil é com o printf escrver textos com variáveis juntos.

    int Peso = 65;
    float altura = 1.76;

    printf("Gabriel tem %dKg de peso\n", Peso);
    printf("E tem %.2fm de altura\n", altura);
    return 0;
}
