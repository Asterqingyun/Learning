#include <stdio.h>
int main(){
	int f,c;
	int low=0;
	int upper=300;
	int step=20;
	f=upper;
 	printf("fahr\tcelsius\n");
	while(f>=low) {
		c=5*(f-32)/9;
		printf("%d\t%d\n",f,c);
		f=f-step;}
}
		
