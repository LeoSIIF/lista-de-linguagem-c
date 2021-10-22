#include<stdio.h>
int main()
{
	int idade;
	printf("Qual a sua idade?\n");
	scanf("%d",&idade);
  if(idade>=18 && idade<65){
        printf("Eleitor obrigatorio\n");
    }
    else if(idade>=16 && idade<18 || idade>=65){
        printf("Eleitor facultativo\n");
    }
    else
    {
        printf("Nao eleitor\n");
    }
	




}
