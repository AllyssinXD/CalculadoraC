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

        if(type <= 4){
            if(type == 1){
                int a, b;
                printf("Digite o valor a :");
                scanf("%d", &a);
                printf("\nDigite o valor b :");
                scanf("%d", &b);
                printf("Resultado :");
                printf("%d", soma(a,b));
                printf("\n\n\n");
            }

            else if(type == 2){
                int a, b;
                printf("Digite o valor a :");
                scanf("%d", &a);
                printf("\nDigite o valor b :");
                scanf("%d", &b);
                printf("Resultado :");
                printf("%d", sub(a,b));
                printf("\n\n\n");
            }

            else if(type == 3){
                int a, b;
                printf("Digite o valor a :");
                scanf("%d", &a);
                printf("\nDigite o valor b :");
                scanf("%d", &b);
                printf("Resultado :");
                printf("%f", divi(a,b));
                printf("\n\n\n");
            }

            else if(type == 4){
                int a, b;
                printf("Digite o valor a :");
                scanf("%d", &a);
                printf("\nDigite o valor b :");
                scanf("%d", &b);
                printf("Resultado :");
                printf("%d", mult(a,b));
                printf("\n\n\n");
            }

            else if(type <= 0){
                return 0;
            }
        }
    }
    return 0;
}
