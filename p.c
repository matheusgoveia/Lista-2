#include<stdio.h>
int main(){
int l,c,x[4][4],y[4][4],s[4][4];
printf("\t\nLENDO MATRIZ X\n\n");
for(l=0;l<4;l++){
for(c=0;c<4;c++){
printf("[%d][%d]",l,c);
scanf("%d",&x[l][c]);
}}
printf("\n\n");
printf("\t\nLENDO MATRIZ Y\n\n");
for(l=0;l<4;l++){
for(c=0;c<4;c++){
printf("[%d][%d]",l,c);
scanf("%d",&y[l][c]);
}}
printf("\n\n");
printf("\t\nIMPRIMINDO MATRIZ X\n\n");
for(l=0;l<4;l++){
for(c=0;c<4;c++){
printf("\t%d\t",x[l][c]);
}
printf("\n");
}
printf("\tIMPRIMINDO MATRIZ Y\n\n");
for(l=0;l<4;l++){
for(c=0;c<4;c++){
printf("\t%d\t",y[l][c]);
}
printf("\n");
}
printf("\n\n");
}
