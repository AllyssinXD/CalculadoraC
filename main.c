#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b)
{
    return a+b;
}

int mult(int a, int b)
{
    return a*b;
}

float divi(float a, float b)
{
    return (float)a/b;
}

int sub(int a, int b){
    return a-b;
}

int main()
{

    while(1){
        int type;
        printf("1.Somar   |   2.Subtrair\n3.Dividir   |   4.Multiplicar\n");
        scanf("%d", &type);

        int a, b;

        printf("Resultado :");
        switch(type){
            case 0:
                return 0;
            break;

            case 1:
                printf("Digite o valor a :");
                scanf("%d", &a);
                printf("\nDigite o valor b :");
                scanf("%d", &b);
                printf("%d", soma(a,b));
            break;

            case 2:
                printf("Digite o valor a :");
                scanf("%d", &a);
                printf("\nDigite o valor b :");
                scanf("%d", &b);
                printf("%d", sub(a,b));
            break;

            case 3:
                printf("Digite o valor a :");
                scanf("%d", &a);
                printf("\nDigite o valor b :");
                scanf("%d", &b);
                printf("%d", divi(a,b));
            break;

            case 4:
                printf("Digite o valor a :");
                scanf("%d", &a);
                printf("\nDigite o valor b :");
                scanf("%d", &b);
                printf("%d", mult(a,b));
            break;

            default:
                printf("Essa opcao nao existe.");
            break;
        }
        printf("\n\n\n");
    }
    return 0;
}
