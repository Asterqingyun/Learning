    /**
    * @brief Get next integer from standard input.
    * @param pn Pointer to int where result is stored.
    * @return Last character read.
    * @example
    *   int n;
    *   char c = getint(&n);
    */
#include <ctype.h>
    char getint(int *pn)
    {
    	int result=0;
	char c;
	while((c=getchar())!=EOF&&(!isspace(c))){
		result=result*10+c-'0';
		
    }
	*pn=result;
	return c;
}
