#include<stdio.h>
#include<math.h>
int main()
{
	float y, base;
	int op;
	do
	{
	  printf("MENU \n\n1-Calcular o Quadrado\n2-Calcular Raiz Quadrada\n3-Calcular Logaritmo\n4Sair\n\nOpção: ");
	  scanf("%d", &op);
	  switch(op)
	  {
		case 1:
			printf("Informe um número: ");
			scanf("%f", &y);
			printf("Quadrado = %.1f\n", pow(y,2));
			break;
		case 2:			
			printf("Informe um número: ");
			scanf("%f", &y);
			if(y>=0)
			   printf("Raiz Quadrada = %.1f\n", sqrt(y));
			else
			   printf("Erro");
			break;
		case 3:
			printf("Número: ");
			scanf("%f", &y);
			printf("Base: ");
			scanf("%f", &base);
			printf("Logaritmo = %.1f\n\n", log(y)/log(base));
			break;
		case 4:
			printf("\nEncerrado...\n");
			break;
	  }
	}while(op!=4);
}
			
