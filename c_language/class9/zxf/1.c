#include <stdio.h>
int median(int num1[],int num2[],int m,int n){
	int length=(m+n)/2;
	int is_even=(m+n)%2==0?1:0;
	int i=(0+m)/2;
	int j=length-(i+1)-1;
	
	while((num1[i]>num2[j+1]||num1[i+1]<num2[j])){
		if(num1[i]>num2[j+1]){
			i--;
			j++;
		}
		else{
			i++;
			j--;
		}
		if((i==-1)&&(j==-1)){
			break;
	
		else if((i==m+1)&&(j==n+1)){
			break;
		}
		}	
		if((i==-1)&&(j==-1)){
			
		}
		else if((i==m+1)&&(j==n+1)){
			break;
		}
		 int temp_big=(num1[i+1]>num2[j+1])?num2[j+1]:num1[i+1];
		 int temp_small=(num1[i]>num2[j])?num1[i]:num2[j];
		 if (is_even){
			return (temp_big+temp_small)/2;
		}
		
			
			
			
