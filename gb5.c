#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char x[10], y[10], z[20];
	int tx,ty, tz, i; //tx = tamanho do x; ty = tamanho do y; tz = tamanho do z
	
	printf("String 1: ");
	gets(x);
	printf("String 2: ");
	gets(y);
	
	tx = strlen(x);
	ty = strlen(y);
	
	printf("\nTamanho da string 1 = %d\n", tx);
	printf("\nTamanho da string 2 = %d\n", ty);
	
	strcpy(z,x);
	printf("String Copiada = %s\n", z);
	
	if(strcmp(y, x))
		printf("Diferentes");
	else
		printf("Iguais");
	
	strcat(z,y);
	printf("Concatenada = %s\n", z);
	
	tz = strlen(z);
	for(i=0; i<tz; i++)
		z[i] = toupper(z[i]);
	printf("Maiúsculo = %s\n\n", z);
}
