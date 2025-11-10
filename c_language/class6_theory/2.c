/**
 * @brief 将 src 拼接到 dest 末尾。
 * @param dest 目标缓冲区，以 '\0' 结尾且有足够空间。
 * @param src 源字符串，以 '\0' 结尾。
 */
#include <stdio.h>
void mystrcat(char dest[], char src[])
{
	int length=0;
	for(int i=0;dest[i]!='\0';i++){
		;
   	}
	length=i;
	for(int j=0;src[j]!='\0';j++){
		dest[length]=src[j];
		length++;
	}
}
	
