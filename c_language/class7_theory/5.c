/**
 * @brief 反转字符串 s 中的字符。
 * @param s 要反转的以 '\0' 结尾的字符串
 */
void reverse(char s[])
{	int a=0;
	int b;
	int length;
	char middle;
	int i;
	for( i=0;s[i]!='\0';i++){
		;
	}
	length=i;
	b=length;
	for(;a<b;a++,b--){
		middle=s[a];
		s[a]=s[b];
		s[b]=middle;	
}
}
