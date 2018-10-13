#include<stdio.h>
#define Linha 3
#define Coluna 5
int main(){
int l,c,a[Linha][Coluna],soma_linha[Linha][Coluna];
printf("\t\nRecebendo Valores para Matriz A\t\n");
for(l=0;l<Linha;l++){
for(c=0;c<Coluna;c++){
printf("Linha[%d]  Coluna[%d]:  ",l,c);
scanf("%d",&a[l][c]);
}
}
for(l=0;l<Linha;l++){
for(c=0;c<Coluna;c++){
printf("\t%d",a[l][c]);
}
printf("\n");
}
printf("\n\n");
printf("\t\nSomando a Linha\t\n");
for(l=0;l<Linha;l++){
for(c=0;c<Coluna;c++){
soma_linha[l][c]=a[l][0]+a[l][1]+a[l][2]+a[l][3]+a[l][4];
printf("\t%d",soma_linha[l][c]);
}
printf("\n");
}
printf("\n\n");
}
