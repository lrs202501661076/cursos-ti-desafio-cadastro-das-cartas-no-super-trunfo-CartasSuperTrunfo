#include <stdio.h>
int main(){
     //dados da carta 01
     char estado01[20],codcarta01[3],nomecidade01[30];
     int populacao01,pontosturisticos01;
     float area01,pib01;
    
    // dados carta 02
     char estado02[20],codcarta02[3],nomecidade02[30];
     int populacao02,pontosturisticos02;
     float area02,pib02;

     //cadastrando carta 01

     printf ("Digite o nome do ESTADO:  ")
     Scanf("%s",&estado01);
     printf ("Digite o codigo da Carta: ");
     scanf("%s"&codcarta01);
     printf ("Digite o nome da cidade: ");
     scanf ("%s",&nomecidade01);
     printf ("Digite o total população: ");
     scanf ("%s"&populacao01);
     printf ("Digite a Area km: ");
     scanf ("%s",&area01);
     printf ("Digite o PIB: ");
     scanf ("%S,"&pib01);
     printf (" Digite quantos pontos turisticos: ");
     scanf ("%s",pontosturisticos01);


     //cadastrando carta 02 

     printf ("Digite o nome do ESTADO:  ")
     Scanf("%s",&estado02);
     printf ("Digite o codigo da Carta: ");
     scanf("%s"&codcarta02);
     printf ("Digite o nome da cidade: ");
     scanf ("%s",&nomecidade02);
     printf ("Digite o total população: ");
     scanf ("%s"&populacao02);
     printf ("Digite a Area km: ");
     scanf ("%s",&area02);
     printf ("Digite o PIB: ");
     scanf ("%S,"&pib02);
     printf (" Digite quantos pontos turisticos: ");
     scanf ("%s",pontosturisticos02);

      
    return 0;

}
