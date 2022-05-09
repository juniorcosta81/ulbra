#include<stdio.h>


int  main () {
 
  int numero1, numero2;

  printf ( "numero1" );
  scanf ( " %d%*c " , & numero1);
  printf ( "numero2 " );
  scanf ( " %d%*c " , &numero2);
  
  int resultado = pow (30, 70);
  printf ( " O número %d elevado ao número %d é igual a: %d \n " , numero1, numero2, resultado);
  return 0 ;
}