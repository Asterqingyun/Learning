#include <stdio.h>
int hex_str_to_int(char str[])
{
	int add=0;
	int n=22;
	int result=0;
	int number=0;
	while(1){
		if(str[n]>='0'&&str[n]<='9'){
			number=str[n]-'0';
		}
		else if(str[n]>='a'&&str[n]<='z'){
			number=(str[n]-'a')+10;
		}
		else if(str[n]>='A'&&str[n]<='Z'){
			number=(str[n]-'A')+10;
		}
		else if(str[n]=='x'||str[n]=='X'){
			n++;
			continue;
		}
		else if(str[n]=='\0'){
			break;
		}		
	result=result*16+number;
	n++;
	
}
	return result;
}
int main(){
char c[]="0x12JKA23";
printf("%d",hex_str_to_int(c));
}
