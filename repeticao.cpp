#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int num1, num2, num3;

int main(){
	
		num1 = 0;
		num2 = 0;
		num3 = 0;
	
		printf ("Digite o primeiro numero inteiro\n");
		scanf ("%d",&num1);
		printf ("Digite o segundo numero inteiro\n");
		scanf ("%d",&num2);
		printf ("Digite o terceiro numero inteiro\n");
		scanf ("%d",&num3);
		
		for(num1=num1;num1<=100000;num1=num1+2)
		{
			printf ("O valor digitado na variavel 1 foi %d, na variavel 2 foi %d e na variavel 3 foi %d onde sera adicionado mais 1 em cada ate a variavel 1 for igual ou maior que 100000\n",num1,num2,num3);
			num2 = num2+15;
			num3 = num3+60;
		}
		
}
