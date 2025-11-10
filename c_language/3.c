#include<string.h>
#include<stdio.h>
int wrong(){
	return -1;
}
int number_looking(char c){
    int result;
	if(c>='0'&&c<='9')
		result=c-'0';
	else if(c>='a'&&c<='z')
		result = c-'a'+10;
	else if(c>='A'&&c<='Z')
		result= c-'A'+10;
	else{
	    result=0;
	}
	return result;
}

int add(int begin,char s[],int length,int how){
	int result=0;
	int j=begin;
	int middle=0;
	for(;j<length;j++){
		middle=number_looking(s[j]);
		result=result*how+middle;
	}
	return result;
}

int hex (int length,char s[]){
	return add(2,s,length,16);
}
int oct(int length,char s[]){
	return add(1,s,length,8);
}
int binary(int length,char s[]){
	return add(2,s,length,2);
}
int decimal(int length,char s[]){
	return add(0,s,length,10);
	}

int judge_variety(int length,char s[]){
	if (s[0]!='0'){
		for(int i=0;i<length;i++){
			if(s[i]<'0'||s[i]>'9')
				return wrong();
			else{
				return decimal(length,s);
				
				}
			}
		}
	else if(s[1]=='b'||s[1]=='B'){
		for(int i=2;i<length;i++){
			if(s[i]<'0'||s[i]>'1')
				return wrong();
			else{
				return binary(length,s);
			}
		}
}

	else if(s[1]=='x'||s[1]=='X'){
		for(int i=2;i<length;i++){
			if((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
				return hex(length,s);
			    
			}
			else{
			    return wrong();
}
		}
}
	
	else if(s[1]>='0'&&s[1]<='9'){
		for(int i=2;i<length;i++){
			if(s[i]<'0'||s[i]>'8')
				return wrong();	
			else{
				return oct(length,s);}
			}
		}
	else {
	    return wrong();
	}
}
int str2num(char s[])
{  int length=strlen(s); 
    return judge_variety(length,s); 
}
		
int main(){
	printf("%d",str2num("0xa"));
}
