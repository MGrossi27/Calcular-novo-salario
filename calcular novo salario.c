#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float salario, reajuste, novo_salario;
    printf("Digite o salário e o percentual de reajuste:\nSalário: R$");
    scanf("%f", &salario);
    printf("Rejuste: ");
    scanf("%f", &reajuste);
    novo_salario = salario + (salario * (reajuste / 100));
    printf("O novo salário é R$%.2f", novo_salario);
    return 0;
}
