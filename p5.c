#include<stdio.h>
int main(){
int l,c,M[6][4],N[6][4],P[6][4];
printf("\t\nMATRIZ M:\t\n");
printf("\n");
for(l=0;l<6;l++){
for(c=0;c<4;c++){
printf("Linha[%d]  Coluna[%d]:  ", l,c);
scanf("%d",&M[l][c]);
}
}
printf("\t\nMATRIZ N:\t\n");
printf("\n");
for(l=0;l<6;l++){
for(c=0;c<4;c++){
printf("Linha[%d]  Coluna[%d]:  ", l,c);
scanf("%d", &N[l][c]);
}
}
printf("\t\nIMPRIMIR MATRIZ M:\t\n");
printf("\n");
for(l=0;l<6;l++){
for(c=0;c<4;c++){
printf("Linha[%d]  Coluna[%d]: %d\n ", l,c,M[l][c]);
}
printf("\n");
}
printf("\t\nIMPRIMIR MATRIZ N:\t\n");
printf("\n");
for(l=0;l<6;l++){
for(c=0;c<4;c++){
printf("Linha[%d]  Coluna[%d]: %d\n ", l,c,N[l][c]);
}
printf("\n");
}
printf("\t\nIMPRIMIR MATRIZ PRODUTO:\t\n");
printf("\n");
for(l=0;l<6;l++){
for(c=0;c<4;c++){
P[l][c]=M[l][c]*N[l][c];
printf("Linha[%d]  Coluna[%d]: %d\n ",l,c,P[l][c]);
}
printf("\n");
}
printf("\n\n");
}
