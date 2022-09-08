#include <stdio.h>

#define texto "Entrada e Saida de Dados"

int main(){
	
	printf("%s\n", texto);
	
	int Idade = 0;
	float altura = 0.0;
	char nome [50] = "";
	
	printf("Digite a idade: \n");
	scanf("%d", &Idade);
	
	printf("Digite a altura: \n");
	scanf("%f", &altura);
	
	printf("Digite um nome: \n");
	scanf("%s", nome);
	
	printf("Dados informados:\n");
	printf("Idade: %d\n", Idade);
	printf("Altura: %.2f\n", altura);
	printf("Nome: %s\n", nome);
}
