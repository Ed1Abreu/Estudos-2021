#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
setlocale(LC_ALL,"""");

int corbike;
int final_bike1;
int final_moto1;
int escolha2;
int escolha;
int moto;
int bike;

	printf("   O que voc� deseja comprar?\n");

	printf("   \n 1 - moto (R$ 12.000)\n\n 2 - Bicicleta (R$ 6.000)\n");
	
		scanf("%d", &escolha);

switch(escolha)
{ case 1 :
	
	printf("\n\n Moto, escolha a cor: \n\n");
		
	printf("  1 - Vermelho\n  2 - Preto\n  3 - Azul\n");	
		
		scanf("%d", &moto);

switch(moto)
{ case 1 :

printf("\n Deseja parcelar a compra? ");

	printf("\n\n 1 - 1x parcela\n 2 - 2x parcelas\n 3 - 3x parcelas\n 4 - 12x parcelas\n");

		scanf("%d", &final_moto1);

if(final_moto1==1){
 	printf("\nO valor fica: R$12.600, com apenas uma parcela!");}
if(final_moto1==2){
	printf("\nO valor fica: R$12.600, com 2 parcelas com o valor de R$6.300");}
if(final_moto1==3){
	printf("\nO valor fica: R$12.600, com 3 parcelas com o valor de R$4.200");}
if(final_moto1==4){
	printf("\nO valor fica: R$12.600, com 12 parcelas com o valor de R$1.050");}

break;
case 2 :

printf("\n Deseja parcelar a compra? ");

	printf("\n\n 1 - 1x parcela\n 2 - 2x parcelas\n 3 - 3x parcelas\n 4 - 12x parcelas\n");

		scanf("%d", &final_moto1);

if(final_moto1==1){
 	printf("\nO valor fica: R$12.360, com apenas uma parcela!");}
if(final_moto1==2){
	printf("\nO valor fica: R$12.360, com 2 parcelas com o valor de R$6.180");}
if(final_moto1==3){
	printf("\nO valor fica: R$12.360, com 3 parcelas com o valor de R$4.120");}
if(final_moto1==4){
	printf("\nO valor fica: R$12.360, com 12 parcelas com o valor de R$1.030");}	
break;

case 3 :

printf("\n Deseja parcelar a compra? ");

	printf("\n\n 1 - 1x parcela\n 2 - 2x parcelas\n 3 - 3x parcelas\n 4 - 12x parcelas\n");

		scanf("%d", &final_moto1);

if(final_moto1==1){
 	printf("\nO valor fica: R$12.600, com apenas uma parcela!");}
if(final_moto1==2){
	printf("\nO valor fica: R$12.600, com 2 parcelas com o valor de R$6.300");}
if(final_moto1==3){
	printf("\nO valor fica: R$12.600, com 3 parcelas com o valor de R$4.200");}
if(final_moto1==4){
	printf("\nO valor fica: R$12.600, com 12 parcelas com o valor de R$1.050");}
break;

default : printf("A op��o digitada � invalida!\a");
}}

if (escolha==2){

printf("Bicicleta, escolha a cor: ");

printf(" \n\n1 - Prata \n\n2 - Dourada\n");
	scanf("%d", &corbike);

switch(corbike)
{ case 1 :

printf("\n Deseja parcelar a compra? ");

		printf("\n\n 1 - 1x parcela\n 2 - 2x parcelas\n 3 - 3x parcelas\n 4 - 12x parcelas\n");

	scanf("%d", &final_bike1);

if(final_bike1==1){
 	printf("\nO valor fica: R$6.150, com apenas uma parcela!");}
if(final_bike1==2){
	printf("\nO valor fica: R$6.150, com 2 parcelas com o valor de R$3.075");}
if(final_bike1==3){
	printf("\nO valor fica: R$6.150, com 3 parcelas com o valor de R$2.050");}
if(final_bike1==4){
	printf("\nO valor fica: R$6.150, com 12 parcelas com o valor de R$512,50");}
break;

case 2 :

printf("\n Deseja parcelar a compra? ");

printf("\n\n 1 - 1x parcela\n 2 - 2x parcelas\n 3 - 3x parcelas\n 4 - 12x parcelas");

	scanf("%d", &final_bike1);

	if(final_bike1==1){
 	printf("\nO valor fica: R$6.480, com apenas uma parcela!");}
	if(final_bike1==2){
	printf("\nO valor fica: R$6.480, com 2 parcelas com o valor de R$3.240");}
	if(final_bike1==3){
	printf("\nO valor fica: R$6.480, com 3 parcelas com o valor de R$2.160");}
	if(final_bike1==4){
	printf("\nO valor fica: R$6.480, com 12 parcelas com o valor de R$540");}
break;

default : printf("A op��o digitada � invalida!");
}
}


  return 0;
}	

