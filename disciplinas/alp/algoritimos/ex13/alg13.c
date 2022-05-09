#include<stdio.h>

int  main () {


   float flutuante , polegada, jarda, milha;
  printf ( " Digite uma medida em pes: " );
  scanf ( " %f%*c " , &pes);

  polegada = pes * 12 ;
  jarda = pes/ 3 ;
  milha = jarda / 1.760 ;

  printf ( " Letra %.1f \n " , polegada);
  printf ( " Letra %.1f \n " , jarda);
  printf ( " Letra %.1f \n " , milha);
  return  0 ;
}