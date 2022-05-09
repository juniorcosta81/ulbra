#include<stdio.h>


int  main () {
 


  float base, altura, area;
  
  printf ( " Base do triângulo: " );
  scanf ( " %f%*c " , &base);
  printf ( " Altura do triângulo: " );
  scanf ( " %f%*c " , &altura);
  area = (base * altura) / 2 ;
  printf ( " A área de um triângulo com base de %.1f m e altura de %.1f m é igual a: %.1f \n " , base, altura, area);
  return 0;
}