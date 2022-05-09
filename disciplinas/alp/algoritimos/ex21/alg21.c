#include<stdio.h>




int  main () {


  float anguloEscada, altura, radiano, escada;
  float pi = 3.14 ;
  printf ( " Digite a medida do treinamento pela escada na parede: " );
  scanf ( " %f%*c " , &ânguloEscada);
  printf ( " Digite a altura alcançada pela escada: " );
  scanf ( " %f%*c " , &altura);

  radiano = anguloEscada * pi / 180 ;
  escada = altura / radiano;
  printf ( " A escada tem: %.1f metros de escada complementar. \n " , escada);
  return 0 ;
}