#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int is_prime(int c){
	for(int i=2;i<=sqrt(c);i++){
		if(c%i==0){
			return 0;
		}
		}
	return 1;
	}
int is_odd(int c){
	if(c%2==1){
	return 1;
	}
	else{
	return 0;
	}
}
int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		for(int i=1;i<=n;i++){
			if(is_prime(i)&&is_odd(i)&&is_prime(n-i)&&is_odd(n-i)){
				printf("%d %d",i,n-i);
				break;
			}
		}
	}
}
			

