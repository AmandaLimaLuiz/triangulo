#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void triangulo(){
	setlocale(LC_ALL, "Portuguese");
	int a[3];
	int b[3];
	int c[3];
	int i;
	
	for (i = 0 ;i < 3 ; i++){
		int n = 0;
		printf("\nDigite o %d° lado do triângulo: ", n+1);
		scanf("%d", &a[i]);
		fflush(stdin);
	

		printf("\nDigite o %d° lado do triângulo: ", n+2);
		scanf("%d", &b[i]);
		fflush(stdin);
	

		printf("\nDigite o %d° lado do triângulo: ", n+3);
		scanf("%d", &c[i]);
		fflush(stdin);
		
		if((a[i] + b[i]) <= c[i]){
			printf("\nnão formou um triângulo\n---------------------------");
		}else if((a[i] + c[i]) <= b[i]){
			printf("\nnão formou um triângulo\n---------------------------");
		}else if((b[i] + c[i]) <= a[i]){
			printf("\nnão formou um triângulo\n---------------------------");
		}else{
			printf("\nFormou um Triângulo\n---------------------------");
		}
		
	}	
	
}
int main() {
	triangulo();
	return 0;
}
