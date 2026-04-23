#include <stdio.h>
#include <math.h>
//math.h para usar raiz quadrada
//Fazendo o procedimento para a equação de primeiro grau e calculo da mesma usando float para numeros com virgula
void primeiro_grau()
{
    float a, b, x;

    printf("\n--- EQUACAO DO PRIMEIRO GRAU ---\n");
    printf("Formato: ax + b = 0\n\n");

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Equacao: %.2fx + %.2f = 0\n\n", a, b);

    //Se a = 0
    if(a == 0)
    {
        printf("Isso nao e uma equacao de primiero grau pois a = 0\n\n");
        return ;
    }

    printf("Primeiro passo: Isolar o X\n");
    printf("Passando o termo B para o outro lado invertendo a operacao\n");
    printf("%.2fx = -%.2f\n\n", a, b);

    printf("Segundo passo: Dividindo ambos os lados por %.2f\n", a);
    printf("x = -%.2f / %.2f\n\n", b, a);

    x = -b / a;

    printf("Terceiro passo: Resultado\n");
    printf("x = %.2f\n\n", x);
}

//Fazendo o procedimento para a equação de segundo grau e calculo da mesma também usando float para numeros com virgula
void segundo_grau()
{
    float a, b, c;
    float delta, x1, x2;

    printf("\n--- EQUACAO DO SEGUNDO GRAU ---\n");
    printf("Formato: ax^2 + bx + c = 0\n\n");

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    printf("Equacao: %.2fx^2 + %.2fx + %.2f = 0\n\n", a, b, c);

    // Se a = 0
    if (a == 0)
    {
        printf("Isso nao e uma equacao de segundo grau pois a = 0\n");
        return;
    }

    printf("Primeiro passo: Calcular o Delta\n");
    printf("Delta = b^2 - 4*a*c\n");
    printf("Delta = (%.2f)^2 - 4*%.2f*%.2f\n", b, a, c);

    delta = (b * b) - (4 * a * c);

    printf("Delta = %.2f\n\n", delta);

//Determinando as raizes baseado nos Deltas
    if (delta > 0)
    {
        printf("Delta > 0: duas raizes reais\n");
        printf("sqrt = raiz quadrada\n\n");

        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Segundo passo: Calcular x1 e x2\n");
        printf("x1 = (-%.2f + sqrt(%.2f)) / (2*%.2f)\n", b, delta, a);
        printf("x2 = (-%.2f - sqrt(%.2f)) / (2*%.2f)\n\n", b, delta, a);

        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n\n", x2);

    } else if (delta == 0)
    {
        printf("Delta = 0: uma raiz real\n\n");

        x1 = -b / (2 * a);

        printf("x = -%.2f / (2*%.2f)\n", b, a);
        printf("x = %.2f\n\n", x1);

    } else
    {
        printf("Delta < 0: nao existem raizes reais\n\n");
    }
}

//Definindo o "sobre" do programa
void sobre()
{
    printf("\n--- SOBRE O PROGRAMA ---\n");
    printf("Este programa serve para calcular equacoes de primeiro e segundo grau\n");
    printf("Programadores: Lucas Silverio e Rodrigo Carvalho de Sa Teles\n\n");
}

//Definindo as opções do menu

int main()
{
    int opcao;

    do
    {
        //Criando o menu
        printf("--- MENU PRINCIPAL ---\n");
        printf("1 - Resolver equacao de primeiro grau\n");
        printf("2 - Resolver equacao de segundo grau\n");
        printf("3 - Sobre o programa\n");
        printf("0 - Sair\n");
        printf("Escolha uma das opcoes: ");
        scanf("%d" ,&opcao);

        //Processo de escolha
        switch(opcao)
        {
            case 1:
                primeiro_grau();
                break;

            case 2:
                segundo_grau();
                break;

            case 3:
                sobre();
                break;

            case 0:
                printf("programa encerrado...");
                break;

            default:
                printf("opcao invalida...digite novamente\n");
        }

    }       while (opcao != 0);
            return 0;
}
