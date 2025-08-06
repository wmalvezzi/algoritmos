
#include <stdlib.h>
#include<stdio.h>
/*4. Fa�a um programa que receba o sal�rio de um funcion�rio, calcule e mostre o novo
sal�rio, sabendo-se que este sofreu um aumento de 25%.*/
int main()
{ float sal, novosal;
  // Mostra mensagem antes da leitura do sal�rio
  printf("Digite o salario do funcionario: ");
  // Recebe o sal�rio
  scanf("%f",&sal);
  // Calcula o novo sal�rio
  novosal = sal + sal * 25/100;
  // Mostra o novo sal�rio
  printf("O novo salario: %.2f",novosal);
  // P�ra o programa a espera de um ENTER
}
