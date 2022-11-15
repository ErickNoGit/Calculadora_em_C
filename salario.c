// programa para ajudar gestores
// até 1.903,98 = isento
// de 1.903,99 a 2.826,65 =  7.5%
// de 2.826,66 a 3.751,05 = 15%
// de 3.751,06 a 4.664,68 = 22.5%
// acima de 4.664,68 = 27.5%

// para cada salário de entrada de Dados, aplicar regra de imposto!

#include <stdio.h>

int main()
{
  float salario;

  printf("Digite o salário para calculo: \n");
  scanf("%f", &salario);

  if (salario <= 1903.98)
  {
    printf("isento de imposto!");
  }
  else if ((salario >= 1903.99) && (salario <= 2826.65))
  {
    float resultado;
    resultado = (7.5 * salario) / (100);
    printf("seu imposto é de 7.5 por cento, portanto será retirado do salário: \n");
    printf("%f \n", resultado);
    printf("ficando apenas \n");
    printf("%f \n", (salario) - (resultado));
  }
  else if ((salario >= 2826.66) && (salario <= 3751.05))
  {
    float resultado;
    resultado = (15 * salario) / (100);
    printf("seu imposto é de 15 por cento, portanto será retirado do salário: \n");
    printf("%f \n", resultado);
    printf("ficando apenas \n");
    printf("%f \n", (salario) - (resultado));
  }
  else if ((salario >= 3751.06) && (salario <= 4664.68))
  {
    float resultado;
    resultado = (22.5 * salario) / (100);
    printf("seu imposto é de 22.5 por cento, portanto será retirado do salário: \n");
    printf("%f \n", resultado);
    printf("ficando apenas \n");
    printf("%f \n", (salario) - (resultado));
  }
  else if (salario > 4664.68)
  {
    float resultado;
    resultado = (27.5 * salario) / (100);
    printf("seu imposto é de 27.5 por cento, portanto será retirado do salário: \n");
    printf("%f \n", resultado);
    printf("ficando apenas \n");
    printf("%f \n", (salario) - (resultado));
  }
  printf("Calculado com precisão! \n");
}