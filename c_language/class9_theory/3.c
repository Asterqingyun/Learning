/**
 * @brief 将 n 个盘子从柱子 A 移动到柱子 C，借助柱子 B。
 * @param n 盘子数量
 * @param a 源柱子
 * @param b 辅助柱子
 * @param c 目标柱子
 */
void hanoi(int n, char a, char b, char c)
{
	if(n==1){
		trans(a,c);
	}
	hanoi(n-1,a,c,b);
	trans(a,c);
	hanoi(n-1,b,a,c);
		
}
void trans(char a,char b){
	printf("%c->%c",a,b);
}
