#include <stdio.h>

/**
 * @brief Read a line from stdin into s (including the terminating '\n' if present).
 * @param s Buffer to store the line. Must have space for at least `limit` chars.
 * @param limit Maximum number of characters to read (including terminating '\0')(positive).
 * @return The length of the line stored in s (number of characters, not
 *         including the terminating '\0'). 
 *
 */
int mygetline(char s[], int limit)
{
	char c;
	for(i=0;i<=limit-2;i++){
		c=getchar();
		if (c==EOF){
			break;
}
		else if(c=='\n'){

			s[i]=c;
			i++;
			break;
}

		else{
			s[i]=c;
			i++;
			}
}
	s[i]='\0';
	return i;
}

