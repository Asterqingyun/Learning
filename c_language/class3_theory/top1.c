#include <stdio.h>

/**
 * @brief Read an integer n, then print all following input lines whose length >= n.
 *  - The program first reads an integer n from stdin (the first token).
 *  - It then reads lines until EOF. For each line, if its length (number of
 *    characters, including a terminating '\n' if present) is greater than or
 *    equal to n, the line is printed to stdout.
 *
 * @example
 * Input:
 *   6
 *   short
 *   longer line
 *   123456
 *   a
 * Expected output:
 *   short
 *   longer line
 *   123456
 */
void print_line_get_n(void)
{
    int length;
	scanf("%d",&length);
	char c;
	getchar();
	char string[1000];
	int i=0;
	while((c=getchar())!=EOF){
	    if(c!='\n'){
	        string[i]=c;
	        i++;
	    }
	    else{
	        string[i]=c;
		string[i+1]='\0';
	        i++;
	        if(i>=length){
	            for(int j=0;j<i;j++){
	                printf("%c",string[j]);
	            }
	        i=0;
	        string[0]='\0';
	        }
	    }
}
}
int main(){
	print_line_get_n();
}
