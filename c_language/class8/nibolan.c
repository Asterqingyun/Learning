#include <stdio.h>
#include <ctype.h>
#define MAXOP 100 // 操作数或运算符的最大长度
#define NUMBER '0' // 标识找到一个数
#define MAXSTACK 100 // 栈的最大容量
double stack[MAXSTACK]; // 栈数组
int top = -1; // 栈顶指针，初始时栈为空
double atoi(char s[]){
	int i=0;
	double sum=0;	
	int power=1;
	while(isdigit(s[i])){
		sum=sum*10+s[i]-'0';
		i++;
	}
	if(s[i]=='.'){
		i++;
	}
	while(isdigit(s[i])){
		sum=sum*10+s[i]-'0';
		power*=10;
		i++;
	}
	return sum/power;
	}
		
		
		
		

/**
* @brief Push value onto the stack.
* @param value The value to push onto the stack.
*/
void push(double value)
{

	top++;
	stack[top]=value;
}

/**
* @brief Pop value from the stack.
* @return The popped value.
*/
double pop()
{
	return stack[--top];
}

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
		if (c=='/'||c=='+'||c=='-'||c=='*'||c=='\n'){
			return c;
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
				c=getchar();
				}
			while(isdigit(c)){
				s[i]=c;
				c=getchar();
				i++;
			}
			s[i]='\0';
			return NUMBER;
			
				
		}
		else{
			return 0;
		}
			
      }

int main()
{
 // 注：以下代码为了防止同学们工作量过大，按照课堂结构给予了同学们一些提示。若同学们希望自己实现也可以完全不采用课堂实现全部删去，最终只要实现功能正确即可。
 // 注意自行实现的话输出格式为%.8g
 int type;
 char s[MAXOP];
 double a1;
 double a0;
 while((type = getop(s)) != EOF) {
    switch(type) {
       case NUMBER:
	  push(atoi(s)); 
          break;
       // 扩展思考：课堂示例代码的实现是每个操作符都写一个case，你有没有什么更好的实现方式呢？（可以等你日后学完函数指针之后再回来思考该问题？）
       case '+':
         a1=pop();
	     a0=pop();
	  push(a1+a0);
	printf("108line:+got\n");
	  break; 
       case '-':
          a1=pop();
	  a0=pop();
	  push(a0-a1);
	  
          break;
       
       case '/':
          a1=pop();
	        a0=pop();
	  push(a0/a1);
	  break;
       case '*':
          a1=pop();
	       a0=pop();
	  push(a0*a1);
	  break;
       case '\n':
          printf("%.8g", pop());
          break;
       case EOF:
	  break;
       default:
          printf("error: unknown command %s\n", s);
          break;
    }
 }
 return 0;

}

