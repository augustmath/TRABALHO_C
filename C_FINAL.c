#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main() {

  int num_cat = 1;
  int cat_compras[99];
  int cat_itens = 0;
  int parcela;
  char porcentagem[0];
  /////////////////////////
  char cat_nome[99][25];
  char desc_itemN[99][15];
  char uni_med[4][3];
  char moeda[3][3];
  char pagA_pagP[2];
  //////////////////////////
  double real[99];
  double desconto;
  double value_min[99];
  double value_total[99];
  double value_cat[99];
  double compra_total;
  double value_desc;
  double value_pag;
  double quant[99];
  double value_par;

  printf("Digite o numero de categorias que deseja: ");
  scanf("%d", &num_cat);
    int a = 1;
    int cont = 1;
    for (a ; a <= num_cat; a++) {
      printf("\nQuais categorias deseja ? \n");
      scanf("%s", cat_nome[a]);

      printf("\nDigite a quantidade de %s que deseja: ", cat_nome[a]);
      scanf("%d", &cat_compras[a]);
        cat_itens = cat_itens + cat_compras[a];
        for (int b =1 ; b <= cat_compras[a]; b++) {
     printf("\n%dº Quais %s deseja?\n",b,cat_nome[a]);
     scanf("%s", desc_itemN[cont]);

     printf("\nSERA NECESSARIO DIGITAR A UNIDADE DE MEDIDA: UN PARA UNIDADE / KG PARA KILOGRAMA / PCT PARA PACOTE \n");
     printf("\nQuantidade de %s que deseja: \n", desc_itemN[cont]);
     scanf("%lf %s", &quant[cont], uni_med[cont]);
     printf("\nDIGITE SEU PRECO DE ACORDO COM SUA UNIDADE/KILOGRAMA/PACOTE E O TIPO DE MOEDA (R$)\n" );
     scanf("%lf %s", &real[cont], moeda[cont]);

          cont = cont+1;

    }
    system("cls");
    }
    a=1;
    cont = 1;

    printf("DIGITE 'A' PARA PAGAMENTO A VISTA OU 'P' PARA PARCELADO\n");
    scanf("%s", pagA_pagP);

       if (pagA_pagP[0] == 'A') {

        for (a ; a <= num_cat; a++){
        printf("MATHEUS AUGUSTO DE BRITO ASSIS\n assismatheusbrito@gmail.com\n\n");
        printf("%s  ", cat_nome[a]);
        printf("%d\n",cat_compras[a]);
        for (int b = 1; b <= cat_compras[a]; b++) {
        value_total[b] = real[cont] * quant[cont];
        value_cat[a] = value_total[b] + value_cat[a];


        printf("* %s:  ", desc_itemN[cont]);
        printf ("%s ", moeda[cont]);
        printf ("%.2f", value_total[b]);
        printf ("(%.1f %s)\n", quant[cont], uni_med[cont]);
        cont = cont+1;
        printf("** TOTAL %s: %.2f\n\n", cat_nome[a], value_cat[a]);


        }
        compra_total = value_cat[a] + compra_total;

   }
       printf("TOTAL DE ITENS: %d\n\n", cat_itens);
       printf("VALOR TOTAL DA COMPRA: %.2f\n\n", compra_total);
       printf("QUANTIDADE DE DESCONTO: ");
       scanf("%lf %s", &desconto, porcentagem);
       value_desc = compra_total * (desconto/100);
       printf("VALOR DO DESCONTO: %s %.2f\n\n", moeda[cont], value_desc);
       value_pag = compra_total - value_desc;
       printf("VALOR A PAGAR: %s %.2f\n\n", moeda[cont], value_pag);

       }
       else if (pagA_pagP[0] == 'P') {
       for (a ; a <= num_cat; a++){
       printf("MATHEUS AUGUSTO DE BRITO ASSIS\n assismatheusbrito@gmail.com\n\n");
       printf("%s  ", cat_nome[a]);
       printf("%d\n",cat_compras[a]);
       for (int b = 1; b <= cat_compras[a]; b++) {
        value_total[b] = real[cont] * quant[cont];
        value_cat[a] = value_total[b] + value_cat[a];


        printf("* %s:  ", desc_itemN[cont]);
        printf ("%s ", moeda[cont]);
        printf ("%.2f", value_total[b]);
        printf ("(%.1f %s)\n", quant[cont], uni_med[cont]);
        cont = cont+1;
        printf("** TOTAL %s: %.2f\n\n", cat_nome[a], value_cat[a]);


        }
        compra_total = value_cat[a] + compra_total;

   }
       printf("TOTAL DE ITENS: %d\n\n", cat_itens);
       printf("VALOR TOTAL DA COMPRA: %.2f\n\n", compra_total);
       printf("QUANTIDADE DE DESCONTO: ");
       scanf("%lf %s", &desconto, porcentagem);
       value_desc = compra_total * (desconto/100);
       printf("\nVALOR DO DESCONTO: %s %.2f\n\n", moeda[cont], value_desc);
       value_pag = compra_total - value_desc;
       printf("VALOR A PAGAR: %s %.2f\n\n", moeda[cont], value_pag);
       printf("PARCELA: ");
       scanf("%d", &parcela);
       value_par = compra_total/parcela;
       printf("\nVALOR DA PARCELA: %.2f", value_par);
       }






}



