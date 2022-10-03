#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>

int main(){

	const int tamvet=1;
			
	int aluno,vet[tamvet];

	float prova1[tamvet],prova2[tamvet],prova3[tamvet],media[tamvet],mediaprova1,mediaprova2,mediaprova3,soma;
	
	mediaprova1=0;
	mediaprova2=0;
	mediaprova3=0;
	
	for(aluno=0;aluno<tamvet;aluno++){
		soma=0;
		printf("Digite a primeira nota do aluno de numero %d\n",aluno+1);
		scanf("%f",&prova1[aluno]);
		soma=soma+prova1[aluno];
		printf("Digite a segunda nota do aluno de numero %d\n",aluno+1);
		scanf("%f",&prova2[aluno]);
		soma=soma+prova2[aluno];
		printf("Digite a terceira nota do aluno de numero %d\n",aluno+1);
		scanf("%f",&prova3[aluno]);
		soma=soma+prova3[aluno];
		mediaprova1=mediaprova1+prova1[aluno];
		mediaprova2=mediaprova2+prova2[aluno];
		mediaprova3=mediaprova3+prova3[aluno];
		media[aluno]=soma/3;
	}
	printf("%f",prova1[aluno-1]);
}
