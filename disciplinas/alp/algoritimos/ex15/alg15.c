#include<stdio.h>


int  main () {


  float precoFabrica, perceLucro, percImposto, lucroDistribuidor, imposto, precoFinal;
  printf ( " Digite o preço de fábrica do veículo: $ " );
  scanf ( " %f%*c " , &precoFabrica);
  printf ( " Digite o percentual de lucro do distribuidor: " );
  scanf ( " %f%*c " , &perceLucro);
  printf ( " Digite o percentual de imposto: " );
  scanf ( " %f%*c " , &percImposto);

  lucroDistribuidor = precoFabrica *perceLucro/ 100 ;
  imposto = precoFabrica *percImposto/ 100 ;
  precoFinal = precoFabrica + lucroDistribuidor + imposto;
  printf ( " O lucro do distribuidor sobre um veículo no valor de $ %.2f será de $ %.2f  \n " ,precoFabrica, lucroDistribuidor);
  printf ( " O valor do imposto será de $ %.2f  \n " , imposto);
  printf ( " O preço final do veículo fixo sem valor de $ %.2f \n " ,precoFinal);
  return 0 ;
}
