#include<stdint.h>


int  main () {

  float pesoRacao, racaoDiaria, gastoRacao, quantidade Restante;
  printf ( " Digite o peso do saco de ração: Kg " );
  scanf ( " %f%*c " , &pesoRacao);
  printf ( " Digite a quantidade de ração diária em gramas: " );
  scanf ( " %f%*c " , &racaoDiaria);

  pesoRacao *= 1000 ;
  gastoRacao = racaoDiaria * 5 ;
  quantidadeRestante = (pesoRacao - gastoRacao) / 1000 ;
  printf ( " A quantidade de ração restante após 5 dias é de: %.1f Kg \n " , quantidade Restante);
  return  0 ;
}