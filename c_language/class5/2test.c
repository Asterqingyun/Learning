#include<stdio.h>
#define MAX 100000
int judge_perfect(int number,int factor[],int i){
	int sum=0;
	for(int j=0;j<i;j++){
		sum=sum+factor[i];
	}
	if(number==sum){
		return 1;}
	else{
	 	return 0;
	}
	}
int main(){
	int n=0;
	scanf("%d",&n);
	for(int number=1;number<=n;number++){
		int factor[MAX];
		int i=0;
		for(int pointer=1;pointer<=number;pointer++){
		if(number%pointer==0){
			factor[i]=pointer;
			i++;
		}
		}
		if(1){
			printf("%d = ",number);
			for(int k=0;k<i-1;k++){
				printf("%d + ",factor[k]);
				}
			printf("%d",factor[i-1]);
			printf("\n");
			}	
		if(judge_perfect(number,factor,i)){
			printf("%d = ",number);
			for(int k=0;k<i-1;k++){
				printf("%d + ",factor[k]);
				}
			printf("%d",factor[i-1]);
			}
		}
	}

			
