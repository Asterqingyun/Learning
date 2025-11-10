#include<stdio.h>
int main(){
int lower=5;
int upper=100;
int sum=0;
for(int i=lower;i<=upper;i=i+5){
	sum=sum+i;
}
printf("the sum of this array is %d",sum);
}
