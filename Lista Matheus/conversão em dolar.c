//1.Elaborar um programa em C que apresente o valor da conversão em dólar (US$) de um valor lido em real, o
//programa deve solicitar a cotação do dólar e também a quantidade de reais disponível com o usuário.
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
