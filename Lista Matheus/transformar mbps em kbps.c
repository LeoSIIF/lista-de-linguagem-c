//2. Fa�a um programa em C para efetuar a convers�o de um valor dado em Mbps para Kbps.
#include<stdio.h>
int main()
{ 
float mbps,kbps;
printf("entre com os valores em Mbps: ");
scanf("%f",&mbps);
kbps = mbps*1000;
printf("O valor em Kbps e de: %.2f",kbps);
}
