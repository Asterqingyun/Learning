#define MAXSTACK 100 // 栈的最大容量

double stack[MAXSTACK]; // 栈数组
int top = -1; // 栈顶指针，初始时栈为空

/**
* @brief Push value onto the stack.
* @param value The value to push onto the stack.
*/
void push(double value)
{
	stack[pop]=value;
	pop++;
}

/**
* @brief Pop value from the stack.
* @return The popped value.
*/
double pop()
{
	return stack[--pop];
}
