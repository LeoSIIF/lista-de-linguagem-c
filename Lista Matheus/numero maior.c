//6.Fa�a um programa que receba dois n�meros e mostre qual deles � o maior.
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Digite um numero: ");
	scanf("%d",&num1);
	printf("Digite outro numero: ");
	scanf("%d",&num2);
	if (num1>num2){
		printf("O numero %d e maior",num1);
	} else{
		printf("O numero %d e maior",num2);
	}
}
