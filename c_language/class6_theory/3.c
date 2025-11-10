#include<stdio.h>
/**
 * @brief 返回 x 中从第 p 位开始（从 0 起，0 为最低位）连续的 n 位（作为无符号整数）。
 * @param x 输入无符号整数
 * @param p 起始位置（从 0 开始计数，0 = 最低位）
 * @param n 位数
 * @return 从 x 的第 p 位开始向右连续 n 位组成的值。
 */
unsigned getbits(unsigned x, int p, int n)
{
	int length=sizeof(x)*8;
	unsigned int c=0;
	c=~c;
	c=c<<(length-n);
	c=c>>(length-1-p);
	x=x&c;
	x=x>>(p-n+1);
	return x;
}
int main(){
	printf("%u", getbits(0b1101110, 4, 3));
}
