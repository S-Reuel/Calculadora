#include<stdio.h>
#include"plataforma.h"
#include"soma.h"
#include"subtracao.h"
#include"multiplicacao.h"
#include"divisao.h"

int main(){
    char opcao;
    float num1, num2;
    
    configConsole();

    printf("\t\t########Calculadora########");
    printf("\n\nPara realizar qualquer cálculo basta escrever a expressão, exemplo: 2+1");
    printf("\n\nOpções disponíveis:\n (+) Soma\n (-) Subtração\n (*) Multiplicação\n (/) Divisão");
    do{
        printf("\n\nCálculo:\n>> ");
        scanf("%f %c %f", &num1, &opcao, &num2);
        switch (opcao){
        case '+':
            printf("%.2f + %.2f = %.2f", num1, num2, soma(num1, num2));
            break;
        
        case '-':
            printf("%.2f - %.2f = %.2f", num1, num2, subtracao(num1, num2));
            break;
        
        case '*':
            printf("%.2f * %.2f = %.2f", num1, num2, multiplicacao(num1, num2));
            break;
        
        case '/':
            if(num2==0){
                printf("\nErr: Divisão por zero");
            }else{
                printf("%.2f / %.2f = %.2f", num1, num2, divisao(num1, num2));
            }
            break;
        
        default:
            printf("Operação inválida!");
            break;
        }
        printf("\nRealizar novo Cálculo? S/N\n>> ");
        scanf(" %c", &opcao);
        getchar();
    } while (opcao=='S' || opcao=='s');
    printf("Pressione qualquer tecla para fechar");
    getchar();
    return 0;
}