//5. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
// O número digitado ao quadrado • A raiz quadrada do número digitado
#include<stdio.h>
#include<math.h>
main()
{
	int num,quadrado,raiz;
	printf("Digite um numero: ");
	scanf("%d",&num);
	quadrado = pow(num,2);
	raiz = sqrt(num);
	if (num>0) {
		printf("O quadrado de %d e: %d\n",num,quadrado);
		printf("A raiz quadrada de %d e: %d",num,raiz);
	}
}
