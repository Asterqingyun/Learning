#include<stdio.h>
#include<ctype.h>
#define MAX 1000
int rank(char op){
	if (op=='+'||op=='-'){
		return 1;
	}
	else if(op=='*'||op=='/'){
		return 2;
	}
	else{
		return 3;
	}
}
char pop(char stack[],int *space){ 
	if((*space)>0){
	return stack[--(*space)];
}
	else{
	return '\0';
	}
	
}
void push(char stack[],char op,int *space){
	stack[(*space)++]=op;
}
	
	
void nibolan(char s[]){
	int number=0;
	char stack[MAX];
	int space=0;
	int times=0;
	for(int i=0;s[i]!='\0';i++){
		if(isdigit(s[i])){
			number=number*10+s[i]-'0';
			}
		else if (rank(s[i])==2||rank(s[i])==1) {
			printf("%d",number);
			number=0;
			if (rank(s[i])>=rank(stack[space-1])){
				push(stack,s[i],&space);
			}
			else{    
				printf(" %c",pop(stack,&space));
				int j=1;
				while(rank(i)>rank(space-1)){
				printf(" %c",pop(stack,&space));
			}

		}
	}
		else if(isspace(s[i])){
			;
			}
		}
	printf("%d",number);
	int result;
	while((result=pop(stack,&space))!='\0'){
			printf(" %c",result);	
			}
}
int main(){
	char s[MAX];
	scanf("%s",s);
	nibolan(s);
}
			
			
			
			
