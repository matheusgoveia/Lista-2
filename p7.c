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
printf("\nInforme a coluna desejada:\n ");
scanf("%d", &op);
for(l=0;l<NMAX;l++){//f
for(c=0;c<NMAX;c++){//g
if(c!=op){//e
printf("\t");
}//e
else{//h
printf("\t%.0f\n", x[l][c]);
}//h
}//f
}//g
printf("\n\n");
}//m
