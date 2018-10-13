#include<stdio.h>
int main(){
float x[4][5],y[4][5],t[4][5];
int l,c;
printf("\t\nLENDO MATRIZ X\n\n");
for(l=0;l<4;l++){
for(c=0;c<5;c++){
printf("[%d][%d]",l,c);
scanf("%f",&x[l][c]);
}}
printf("\n\n");
printf("\t\nIMPRIMINDO MATRIZ X\n\n");
for(l=0;l<4;l++){
for(c=0;c<5;c++){
printf("\t%.1f\t\n",x[l][c]);
}
printf("\n");
}
printf("\n\n");
for(l=0;l<4;l++){
for(c=0;c<5;c++){
t[l][c]=x[l][c]*3.0;
printf("\nTriplo da linha [%d] e coluna [%d] = [%.1f]\t\n", l,c,t[l][c]);
}
printf("\n");
}
printf("\n\n");
}


