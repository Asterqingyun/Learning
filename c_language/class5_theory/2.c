/**
 * @brief 实现一个简单的atoi函数（不考虑字符串中有数字之外的内容）
 * @param s 以'\0'结尾的字符串
 * @return 解析后的整型值
 * @example
 * 
 * "42" -> 42
 *
 */
int myatoi(const char s[])
{ 	int result=0;
	for(int i = 0; s[i]!='\0'&&s[i]!=EOF;i++){
		result=result*10+s[i]-'0';
		
		
}
	return result;
}
