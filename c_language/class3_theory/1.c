#include <stdio.h>
/**
 * @brief Count characters read from stdin until EOF.
 * @return Number of characters read (non-negative int). Reads from stdin until EOF is encountered
 *
 * Example usage (in a program):
 * int n = count_chars();
 */
int count_chars(void)
{	int number=0;
	char c;
	while((c=getchar())!=EOF){
		number++;
	}
	return number;	
}

