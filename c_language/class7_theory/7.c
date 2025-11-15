/**
 * @brief 删除字符串 s 尾部的空格符、制表符和换行符。
 * @param s 要处理的以 '\0' 结尾的字符串
 */
#include<ctype.h>
#include <stdio.h>
void trim(char s[])
{
	int length;
	int i;
	for( i=0;s[i]!='\0';i++){
	;
	}
	length=i;
	for(int i=length-1;isspace(s[i]);i--){
		;
	}
	s[i+1]='\0'	;
}
int main(){
	char s[]="hello world   \n";
	trim(s);
	printf("%s",s);
	}
