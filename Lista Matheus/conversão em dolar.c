//1.Elaborar um programa em C que apresente o valor da convers�o em d�lar (US$) de um valor lido em real, o
//programa deve solicitar a cota��o do d�lar e tamb�m a quantidade de reais dispon�vel com o usu�rio.
#include <stdio.h>
int main()
{
	float valoremreais,cotacaodolar,valoremdolar;
	printf("Digite a quantidade em reais: ");
	scanf("%f",&valoremreais);
	printf("Digite a cotacao do dolar: ");
	scanf("%f",&cotacaodolar);
	valoremdolar = valoremreais*cotacaodolar;
	printf("A conversao para dolar fica em US$%.2f",valoremdolar);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
