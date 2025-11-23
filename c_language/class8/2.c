      #include <ctype.h>
      #define NUMBER '0' // 标识找到一个数

      /**
      * @brief Get next operator or numeric operand.
      * @param s The output buffer to store the operator or operand.
      * @return The type of the token: NUMBER for numbers, or the character for operators.
      */
      int getop(char s[])
      {
	char c;
	int i=0;
	c=getchar();
		if (c=='+'||c=='-'||c=='*'||c=='\n'){
			return -1;
		}
		else if (isdigit(c)){
			while(isdigit(c)){
				s[i]=c;
				c=getchar();
				i++;
			}

			if(c=='.'){
				s[i]=c;
				i++;
				}
			while(isdigit(c)){
				s[i]=c;
				c=getchar();
				i++;
			}
			return NUMBER;
			
				
		}
		else{
			return 0;
		}
			
      }
