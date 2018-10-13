#include<stdio.h>
#define NMAX 5
int main(){//m
int l,c,op;
float x[NMAX][NMAX];
printf("\t\nLER MATRIZ:\t\n");
for(l=0;l<NMAX;l++){//a
for(c=0;c<NMAX;c++){//b
printf("Linha[%d]  Coluna[%d]: ",l,c);
scanf("%f",&x[l][c]);
}//a
}//b
printf("\t\nIMPRIMIR MATRIZ\t\n");
for(l=0;l<NMAX;l++){//c
for(c=0;c<NMAX;c++){//d
printf("\t%.0f\n\n", x[l][c]);
}//c
}//d
printf("\n");
printf("\nInforme a linha desejada:\n ");
scanf("%d", &op);
for(l=0;l<NMAX;l++){//f
for(c=0;c<NMAX;c++){//g
if(l==op){//e
printf("\t%.0f",x[l][c]);
}//f
printf("\n");
}//g
}//e
printf("\n\n");
}//m
