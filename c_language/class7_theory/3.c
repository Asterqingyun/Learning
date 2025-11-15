/**
 * @brief 将字符串转换为整数，处理首空格、字符间空格和正负号。
 * @param s 输入字符串
 * @return 转换后的整数值
 */
#include<ctype.h>
int atoi(const char s[])
{
	int i=0;
	int sign=1;
	int n=0;
	while(s[i]!='\0'){
		if(isspace(s[i])){
			i++;
		}
		else if(s[i]=='+'){
			sign=1;
			i++;
		}
		else if(s[i]=='-'){
			sign=-1;
			i++;
		}
		else if(s[i]>='0'&&s[i]<='9'){
			n=n*10+s[i];
		}
		
		
			
		
}
	return n*sign;
}
