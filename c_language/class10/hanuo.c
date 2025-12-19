#include<stdio.h>
int hanuo_cishu(int n){
	if(n==1){
		return 1;
	}
	int result=0;
	result=hanuo_cishu(n-1)*2+1;		
	return result;
}
int m=0;
void hanuo_steps(int n,char begin,char end,char help){
	if(n==1){	
	m++;
	printf("%d %c %c\n",m,begin,end);
	}
	else{
	hanuo_steps(n-1,begin,help,end);
	m++;
	printf("%d %c %c\n",m,begin,end);
	hanuo_steps(n-1,help,end,begin);
	}
}
int main(){
	int n;
    scanf("%d",&n);
	printf("%d\n",hanuo_cishu(n));
	hanuo_steps(n,'A','C','B');
	}
	

