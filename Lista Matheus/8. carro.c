/*8. O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de f�brica). Supondo que a percentagem do distribuidor seja de 25% e os
impostos de 42%, escrever um programa em C que receba o custo de f�brica de um carro e escreva o custo
ao consumidor.*/
#include <stdio.h>
int main()
{
	float custofabrica,custofinal,distribuidor,imposto;
	printf("Digite o custo de fabrica do carro: ");
	scanf("%f",&custofabrica);
	distribuidor = custofabrica+(custofabrica*25/100);
	imposto = custofabrica+(custofabrica*42/100);
	custofinal = pctdistribuidor + imposto - custofabrica ;
	printf("O custo de um carro novo e de: %.2f",custofinal);
}
