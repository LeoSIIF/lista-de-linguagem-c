//5. Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre:
// O n�mero digitado ao quadrado � A raiz quadrada do n�mero digitado
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
