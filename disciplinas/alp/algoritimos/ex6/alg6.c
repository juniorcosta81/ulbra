#include<stdio.h>

int  main () {
 

  float salarioBase, salarioAreceber;
 
  printf ( " Digite o salário base do colaborador: $ " );
  scanf ( " %f%*c " , &salarioBase);
  float gratificacao = salarioBase * 0.05 ;
  float imposto = salarioBase - (salarioBase - salarioBase * 7/100 ) ;
  salarioAreceber = salarioBase + gratificacao - imposto;
  
  printf ( " Salário a receber: $ %.2f  \n " , salarioAreceber);
  return  0 ;
}