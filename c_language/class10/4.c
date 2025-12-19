#include <stdio.h>
#define MAX 10000
#include <string.h>
/**
* @brief Shuffle string s by moving first m characters to the end.
* @param s Pointer to string to be shuffled.
* @param m Number of characters to move from front to end.
* @example
*   char str[] = "ABCDEFGHIJK";
*   shuffle(str, 3); // str becomes "DEFGHIJKABC"
*/
void shuffle(char s[], int m)
{
	char temp[MAX];
	for(int i=0;i<m;i++){
		temp[i]=s[i];
}
	temp[m]='\0';
	int j=m;
	for(;s[j]!='\0';j++){
		s[j-m]=s[j];
	}
	for(int i=0;temp[i]!='\0';i++){
		s[j-m+1+i]=temp[i];
	}
}
