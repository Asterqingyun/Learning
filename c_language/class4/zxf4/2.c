#include<stdio.h>
int main(){
	char string[100];
	int i=0;
	int status=0;
	char c;
	while((c=getchar())!=EOF){
		if(c!=' '){
			status=1;
			string[i]=c;
			i++;
			}
		else{
			if(status==1){
				string[i]=' ';
				status=0;
				i++;
				}
			}
		}
	for (int j=0;j<=i; j++){
		printf("%c",string[j]);
}
}
			
