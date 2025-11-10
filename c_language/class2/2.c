#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
float sum=0;
int product=1;
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
product=product*j;}
sum=sum+1.0/product;
product=1;}

float sum_real=sum+1;
printf("%f",sum_real);}

