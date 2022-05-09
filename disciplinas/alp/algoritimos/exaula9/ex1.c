#include<stdio.h>


int main() {
int idade, falta;




 printf (" digite sua idade:\n");
scanf("%d%*c",&idade);

if (idade>=18)
{
     printf("voce é maior de idade");
}
else
 { falta=18-idade;
    printf("voce nao e maior de idade nao pode ir no entrevero");
    printf("falta%d",falta);
 }


}
