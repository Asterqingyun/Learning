#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int syn=1;
float value;
float result;
int big=2*n-1;
float small=1.0;
float number=small;
for(;number<=big;number=number+2){
value=syn*number*(number+1)/((number+2)*(number+3));
result=value+result;
}
printf("%f",result);
}
