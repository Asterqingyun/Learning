#include <stdio.h>
void print_pyramid(int c){
	for(int i=1;i<c;i++){
	      	int space_length=c-i;
		int middle_space=2*i-3;
		int ge=i%10;	
		for(int j=0;j<space_length;j++){
			printf(" ");
		}
		printf("%d",ge);
		if(i>1){
			for(int j=0;j<middle_space;j++){
			printf(" ");
		}
			printf("%d",ge);
		}
		printf("\n");
		}
	for(int j=0;j<2*c-1;j++){
		printf("%d",c%10);
		}
	}
int main(){
	int n;
	scanf("%d",&n);
	print_pyramid(n);
}


			
