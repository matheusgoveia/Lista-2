#include<stdio.h>
int main(){
			int l,c,x[5][5],y[l][c],d[5][5];
			
			printf("\n\t\tRecebendo valores para a matriz X\n\n");
			
			for(l=0;l<5;l++){
							for(c=0;c<5;c++){
											printf("Linha [%d]:  Coluna [%d]:  ",l,c);
											scanf("%d",&x[l][c]);
											}
							}
			printf("\n\t\tRecebendo valores para a matriz Y\n\n");
			
			for(l=0;l<5;l++){
							for(c=0;c<5;c++){
											printf("Linha [%d]:  Coluna [%d]:  ",l,c);
											scanf("%d",&y[l][c]);
											}
							}
			printf("\n\t\tResultado da diferença entre as matrizes X\n\n");
			
			for(l=0;l<5;l++){
							for(c=0;c<5;c++){
											d[l][c]=x[l][c]-y[l][c];
											printf("Resultado: %d\t  ",d[l][c]);
											}
			printf("\n");
							}
			printf("\n\n");
			}