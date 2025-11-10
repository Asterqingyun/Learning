#include <stdio.h>

/**
 * @brief 打印从 1 到 n 的自然数，每行 10 个。
 */
int main(void)
{
    int n = 123;
    for(int i = 1; i <= n; i++) {
        printf("%6d%c", i,______);
    }
    return 0;
}#include <string.h>
/**
 * @brief 删除字符串 s 中所有等于字符 c 的字符（就地修改）。
 * @param s 要修改的以 '\0' 结尾的字符串。
 * @param c 要删除的字符。
 */
void delete_char(char s[], int c)
{
	int length=strlen(s);
	for(int i=0;i<length;i++){
		if(s[i]==c){
			length--;
			for(int j=i;j<length;j++){
				s[j]=s[j+1];
}
			s[length]='\0';
}
}
}

