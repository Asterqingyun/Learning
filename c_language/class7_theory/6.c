/**
 * @brief 将整数 n 转换为字符串表示。
 * @param n 要转换的整数
 * @param s 存储结果的字符数组，必须有足够空间
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
	length=i-1;
	b=length;
	for(;a<b;a++,b--){
		middle=s[a];
		s[a]=s[b];
		s[b]=middle;	
}
}

void itoa(int n, char s[])
{
	int i=0;
	int n1=n;
	do{
		
		s[i]=n%10+'0';
		n/=10;
		i++;
	}
	while(n!=0);
	if(n1<0){
		s[i]='-';
		i++;
	}	
	
	s[i]='\0';
	reverse(s);	
}

