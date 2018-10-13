#include<stdio.h>
#define Linha 3
#define Coluna 5
int main(){
int l,c,a[Linha][Coluna],soma_coluna[Linha][Coluna];
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
printf("\t\nSomando a Coluna\t\n");
for(l=0;l<Linha;l++){
for(c=0;c<Coluna;c++){
soma_coluna[l][c]=a[0][c]+a[1][c]+a[2][c];
printf("\t%d",soma_coluna[l][c]);
}
printf("\n");
}
printf("\n\n");
}
