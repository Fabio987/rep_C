#include <stdio.h>
#include <stdlib.h>

void main()
{  float unid1, unid2, unid3, media, af;

    printf ("Digite a nota do primeira unidade");
    scanf ("%f", &unid1);
    printf ("Digite a nota da segunda unidade");
    scanf ("%f", &unid2);
    printf ("Digite a nota da terceira unidade");
    scanf ("%f", &unid3);
    media = (unid1 + unid2 + unid3 )/3;
    af = (50 - (6*media))/ 4 ;

    if (media >= 7)
     {
       printf ("Parabens! voce foi aprovado com media %f", media);
     }
    else {
         if  ((media < 7) & (media >=3.5))
          {
        printf ("vc esta na recuperacao! sua media foi %f", media);
        printf ("vc precisara de %f na avalacao final", af);
          }
       else {
      printf ("vc foi reprovado! sua media foi %f", media);
     }
     }
// 50 = mp *6 + af*4M
