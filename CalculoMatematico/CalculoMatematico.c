#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {	
srand(time(0));

int n1;          
int n2;
int op;
int max;
int min;
char simb;
int resposta;
int valor;
  
  max = 101;
  min = 0;

op = rand()%4;
n1 = rand()%(max-min)+min;
n2 = rand()%(max-min)+min;  

if (op==0){                             // 0 = soma
  simb = '+';}                          // 1 = subtracao
                                        // 2 = multiplicacao
else if (op==1){                        // 3 = divisao
  simb = '-';}
  
else if (op==2){
  simb = 'x';} 

else if (op==3){
  simb = '/';}

        		
		
if(op==0){
resposta = n1 + n2;} 		
		
else if (op==1){
resposta = n1 - n2;}		
		
else if (op==2){
resposta = n1 * n2;}		
		
else if (op==3){
resposta = n1 / n2;}		

	printf("Segue a seguinte equacao: %d %c %d. \n", n1,simb,n2);
    printf("Agora escreva a resposta : "); 
scanf("%d", &valor);
    

if (valor==resposta){
 printf("Parabens, voce acertou!");} 
 
else if (valor<resposta){
 printf("Voce errou!");} 
 
else if (valor>resposta){
 printf("Voce errou!");}   
    
  
	return 0;
}
