#include <stdio.h>
#include <math.h>
#define MAX 100
int is_prime(int c){
	if(c<2){
		return 0;
	}
	if(c==2){
		return 1;
	}
	for(int i=2;i<c;i++){
		if(c%i==0){
			return 0;
		}
		}
	return 1;
	}

void judge_lucky(char string[],int length){
		int max=0;
		int min=MAX;
		int many[26]={0};
		int diff=0;
		for(int j=0;j<length;j++){
			for(int i=0;i<=25;i++){
				if(string[j]=='a'+i){
					many[i]++;
					break;
				}
			}
		}
		for(int i=0;i<=25;i++){
			if(many[i]==0){
			continue;
			}
			if(many[i]<min){
				min=many[i];
			}
			
		}
		for(int i=0;i<=25;i++){
			if(many[i]==0){
			continue;
			}
			if(many[i]>max){
				max=many[i];
			}
			
		}
		
		diff=max-min;
		printf("max:%d,min:%d",max,min);
		if(is_prime(diff)){
		printf("Lucky Word %d",diff);
		}
		else{
		printf("No Answer");
		}
	}

			
			
int main(){
	char c;
	char string[MAX];
	int length=0;
	while((c=getchar())!=EOF){
		if(c=='\n'){
			judge_lucky(string,length);
			string[0]='\0';
			length=0;
		}
		else{
			string[length]=c;
			length++;
		}
	}
}

