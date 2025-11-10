#include<stdio.h>
#include <stdio.h>

/**
 * @brief Read a line from stdin into s (including the terminating '\n' if present).
 * @param s Buffer to store the line. Must have space for at least `limit` chars.
 * @param limit Maximum number of characters to read (including terminating '\0')(positive).
 * @return The length of the line stored in s (number of characters, not
 *         including the terminating '\0'). 
 *
 */
char c;

int mygetline(char s[], int limit)
{
    int i=0;
	for(i=0;i<=limit-1;){
		c=getchar();
		if (c==EOF){
			break;
}
		else if(c=='\n'){

			s[i]=c;
			i++;
			s[i+1]='\0';
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




/**
 * @brief Read lines from stdin and print the longest line found.
 *
 * @example
 * Input (three lines, terminated by EOF):
 *   short
 *   this is the longest line
 *   mid
 *
 * Expected output:
 *   this is the longest line
 */
void print_longest_line(void)
{       char longest[1000];
        char new[1000];
        int length;
        int new_length;
        length=mygetline(longest,1000);
        while(c!=EOF){
            new_length=mygetline(new,1000);
            if(new_length>length){
                length=new_length;
                for (int i=0;i<length;i++){
                    longest[i]=new[i];
                     
                }
                new[0]='\0';
            }
            }
        for(int i=0;i<length;i++){
            printf("%c",longest[i]);
            }
    
}
int main(){
	print_longest_line();
}


